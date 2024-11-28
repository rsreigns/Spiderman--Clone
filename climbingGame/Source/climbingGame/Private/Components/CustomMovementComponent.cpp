// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CustomMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "climbingGame/ClimbingGameCharacter.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "MotionWarpingComponent.h"

#pragma region ClimbTraces
void UCustomMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bSprinting && OwningPlayerCharacter)
	{
	}
}
void UCustomMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	OwningPlayerAnimInstance = CharacterOwner->GetMesh()->GetAnimInstance();
	if (OwningPlayerAnimInstance)
	{
		OwningPlayerAnimInstance->OnMontageEnded.AddDynamic(this, &UCustomMovementComponent::OnClimbMontageEnded);
		OwningPlayerAnimInstance->OnMontageBlendingOut.AddDynamic(this, &UCustomMovementComponent::OnClimbMontageBlendOut);
	}
	OwningPlayerCharacter = Cast<AClimbingGameCharacter>(CharacterOwner);
}
void UCustomMovementComponent::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PreviousMovementMode, PreviousCustomMode);
	if (IsFalling())
	{
		bOrientRotationToMovement = true;
		CharacterOwner->GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
	}
	if (IsClimbing() && !IsVaulting)
	{
		bOrientRotationToMovement = false;
		CharacterOwner->GetCapsuleComponent()->SetCapsuleHalfHeight(48.0f);
		OnEnterClimbStateDelegate.ExecuteIfBound();
	}
	if (PreviousMovementMode == MOVE_Custom && PreviousCustomMode == ECustomMovementMode::MOVE_Climb)
	{
		bOrientRotationToMovement = true;
		CharacterOwner->GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
		const FRotator DirtyRotation = UpdatedComponent->GetComponentRotation();
		const FRotator CleanRotation = FRotator(0.0f, DirtyRotation.Yaw, 0.0f);
		UpdatedComponent->SetRelativeRotation(CleanRotation);
		StopMovementImmediately();	
		OnExitClimbStateDelegate.ExecuteIfBound();
	}
}
void UCustomMovementComponent::PhysCustom(float deltaTime, int32 Iterations)
{
	if (IsClimbing())
	{
		PhysClimb(deltaTime,Iterations);
	}
	Super::PhysCustom(deltaTime, Iterations);
}
float UCustomMovementComponent::GetMaxSpeed() const
{
	if (IsClimbing())
	{
		return MaxClimbSpeed;
	}
	else
	{
		return Super::GetMaxSpeed();
	}
}
float UCustomMovementComponent::GetMaxAcceleration() const
{
	if (IsClimbing())
	{
		return MaxClimbAcceleration;
	}
	else
	{
		return Super::GetMaxAcceleration();
	}
}
FVector UCustomMovementComponent::ConstrainAnimRootMotionVelocity(const FVector& RootMotionVelocity, const FVector& CurrentVelocity) const
{
	const bool bIsPlayingMontage = IsFalling() && OwningPlayerAnimInstance &&
		OwningPlayerAnimInstance->IsAnyMontagePlaying();
	if (bIsPlayingMontage)
	{
		return RootMotionVelocity;
	}
	else return Super::ConstrainAnimRootMotionVelocity(RootMotionVelocity, CurrentVelocity);
}

void UCustomMovementComponent::HandleWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta)
{
	Super::HandleWalkingOffLedge(PreviousFloorImpactNormal, PreviousFloorContactNormal, PreviousLocation, TimeDelta);

	const FVector EndPoint = CharacterOwner->GetActorLocation() + PreviousFloorImpactNormal * -400.f;
	if (!DoLineTraceByObject(CharacterOwner->GetActorLocation(), EndPoint).bBlockingHit)
	{
		const FVector Start = CharacterOwner->GetActorLocation() + (PreviousFloorImpactNormal) * (-LedgeCheckDistance);
		const FVector End = Start + (Velocity.GetSafeNormal() * -LedgeCheckDistance);
		FHitResult HitResult = DoLineTraceByObject(Start, End);
		if (HitResult.bBlockingHit)
		{

			bOrientRotationToMovement = false;
			FRotator TargetRotation = FRotationMatrix::MakeFromX(HitResult.ImpactNormal).Rotator();
			CharacterOwner->SetActorRotation(TargetRotation);
			CharacterOwner->SetActorLocation(CharacterOwner->GetActorLocation() - LedgeClimbDownLocation * HitResult.ImpactNormal);
			PlayClimbMontage(ClimbDownLedge);
		}
	}
}


TArray<FHitResult> UCustomMovementComponent::DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool ShowDebugShape, bool bDrawPersistentShapes )
{
	TArray<FHitResult> OutCapsuleHitResults;
	EDrawDebugTrace::Type DebugTraceType = EDrawDebugTrace::None;
	if (ShowDebugShape)
	{
		DebugTraceType = EDrawDebugTrace::ForOneFrame;
		if (bDrawPersistentShapes)
		{
			DebugTraceType = EDrawDebugTrace::Persistent;
		}
	}
	UKismetSystemLibrary::CapsuleTraceMultiForObjects(this,
		Start,
		End,
		CapsuleTraceRadius,
		CapsuleHalfHeight,
		ClimbabaleSurfaceTraceObjects,
		false,
		TArray<AActor*>(),
		DebugTraceType,
		OutCapsuleHitResults,
		false);

	return OutCapsuleHitResults;
}

FHitResult UCustomMovementComponent::DoLineTraceByObject(const FVector& Start, const FVector& End, bool ShowDebugShape, bool bDrawPersistentShapes )
{
	FHitResult OutHit;
	EDrawDebugTrace::Type DebugTraceType = EDrawDebugTrace::None;
	if (ShowDebugShape)
	{
		DebugTraceType = EDrawDebugTrace::ForOneFrame;
		if (bDrawPersistentShapes)
		{	
			DebugTraceType = EDrawDebugTrace::Persistent;
		}
	}
	UKismetSystemLibrary::LineTraceSingleForObjects
	(   this,
		Start,
		End,
		ClimbabaleSurfaceTraceObjects ,
		false ,
		TArray<AActor*>() ,
		DebugTraceType ,
		OutHit ,
		false   );
	return OutHit;
}

#pragma endregion


#pragma region ClimbCore


void UCustomMovementComponent::ToggleClimbing(bool bEnableClimb)
{
	if (bEnableClimb)
	{
		if (CanStartClimbing())
		{
			PlayClimbMontage(IdleToClimbMontage);
		}
		else
		{
			TryStartVaulting();
		}
	}
	if(!bEnableClimb)
	{
		StopClimbing();
	}
}
void UCustomMovementComponent::RequestHopping()
{
	const FVector UnrotatedLastInputVector = 
	UKismetMathLibrary::Quat_UnrotateVector(UpdatedComponent->GetComponentQuat(), GetLastInputVector());
	if (UnrotatedLastInputVector.Z > 0.9f)
	{
		HandleHopUp();
	}
	else if (UnrotatedLastInputVector.Z < -0.9f)
	{
		HandleHopDown();
	}
	else if (UnrotatedLastInputVector.Y < -0.9f)
	{
		HandleHopLeft();
	}
	else if (UnrotatedLastInputVector.Y > 0.9f)
	{
		HandleHopRight();
	}
	else return;
}
bool UCustomMovementComponent::CanStartClimbing()
{
	//if (IsFalling()) return false;
	if (!TraceClimbableObjects()) return false; 
	if (!TraceFromEyeHeight(100.0f).bBlockingHit) return false;

	return true;
}
void UCustomMovementComponent::StartClimbing()
{
	SetMovementMode(MOVE_Custom, ECustomMovementMode::MOVE_Climb);
}
void UCustomMovementComponent::StopClimbing()
{
	SetMovementMode(MOVE_Falling);
}
void UCustomMovementComponent::PhysClimb(float deltaTime, int32 Iterations)
{
	if (deltaTime < MIN_TICK_TIME)
	{
		return;
	}
	//Process all climbable surface data
	if (IsClimbing())
	{
		TraceClimbableObjects();
	}
	ProcessClimbableSurfaceInfo();
	if (TraceForLedge())
	{
		PlayClimbMontage(ClimbToTopMontage);
	}
	//Check if we should stop climbing
	if (CheckShouldStopClimbing() || CheckHasReachedFloor() )
	{

		StopClimbing();
	}

	RestorePreAdditiveRootMotionVelocity();

	if (!HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
	{
		//Define Max climb speed and acceleration
		CalcVelocity(deltaTime, 0.0f, true, MaxBreakClimbDeccerleration);
	}

	ApplyRootMotionToVelocity(deltaTime);

	FVector OldLocation = UpdatedComponent->GetComponentLocation();
	const FVector Adjusted = Velocity * deltaTime;
	FHitResult Hit(1.f);
	//Handle climb rotation
	SafeMoveUpdatedComponent(Adjusted, GetClimbRotation(deltaTime), true, Hit);

	if (Hit.Time < 1.f)
	{
		HandleImpact(Hit, deltaTime, Adjusted);
		SlideAlongSurface(Adjusted, (1.f - Hit.Time), Hit.Normal, Hit, true);
	}

	if (!HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
	{
		Velocity = (UpdatedComponent->GetComponentLocation() - OldLocation) / deltaTime;
	}
	//Snap movement to climbable surfaces
	SnapMovementToClimbableSurfaces(deltaTime);

}
void UCustomMovementComponent::ProcessClimbableSurfaceInfo()
{
	CurrentClimbabaleSurfaceNormal = FVector::ZeroVector;
	CurrentClimbableSurfaceLocation = FVector::ZeroVector;
	if (ClimbableSurfacesTracedResults.IsEmpty()) return;
	for (const FHitResult TracedHitResult : ClimbableSurfacesTracedResults)
	{
		CurrentClimbableSurfaceLocation += TracedHitResult.ImpactPoint;
		CurrentClimbabaleSurfaceNormal += TracedHitResult.ImpactNormal;
	}
	CurrentClimbableSurfaceLocation /= ClimbableSurfacesTracedResults.Num();
	CurrentClimbabaleSurfaceNormal = CurrentClimbabaleSurfaceNormal.GetSafeNormal();
}
bool UCustomMovementComponent::CheckShouldStopClimbing()
{
	if (ClimbableSurfacesTracedResults.IsEmpty())
	{
		return true;
	}
	return false;
}
bool UCustomMovementComponent::CheckHasReachedFloor()
{
	const FVector DownVector = -(UpdatedComponent->GetUpVector());
	const FVector StartOffset = DownVector * 50.0f;
	const FVector Start = UpdatedComponent->GetComponentLocation() + StartOffset;
	const FVector End = Start + DownVector;
	TArray<FHitResult> PossibleFloorHits = DoCapsuleTraceMultiByObject(Start, End);

	if (PossibleFloorHits.IsEmpty()) return false;

	for (const FHitResult& PossibleFloorHit : PossibleFloorHits)
	{
		const bool bFloorReached =FVector::Parallel(-PossibleFloorHit.ImpactNormal,
			CharacterOwner->GetActorUpVector()) && GetUnrotatedClimbVelocity().Z < -10.f;
		if (bFloorReached)
		{
			return true;
		}
	}
	return false;
}
FQuat UCustomMovementComponent::GetClimbRotation(float DeltaTime)
{
	const FQuat CurrentQuat = UpdatedComponent->GetComponentQuat();
	if (HasAnimRootMotion() || CurrentRootMotion.HasOverrideVelocity())
	{
		return CurrentQuat;
	}
	const FQuat TargetQuat = FRotationMatrix::MakeFromX(-CurrentClimbabaleSurfaceNormal).ToQuat();
	
	return  FMath::QInterpTo(CurrentQuat, TargetQuat, DeltaTime, 5.0f);
}
void UCustomMovementComponent::SnapMovementToClimbableSurfaces(float DeltaTime)
{
	const FVector ComponentForward = UpdatedComponent->GetForwardVector();
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	const FVector ProjectedCharacterToSurface =
		(CurrentClimbableSurfaceLocation - ComponentLocation).ProjectOnTo(ComponentForward);
	const FVector SnapVector = -CurrentClimbabaleSurfaceNormal * ProjectedCharacterToSurface.Length();
	UpdatedComponent->MoveComponent(SnapVector * DeltaTime * MaxClimbSpeed, UpdatedComponent->GetComponentQuat(),true);
}
void UCustomMovementComponent::TryStartVaulting()
{ 
	FVector VaultStartPosition;
	FVector VaultLandPosition;
	if (CanStartValulting(VaultStartPosition, VaultLandPosition))
	{
		//StartVaulting
		FName VaultStartPointName("VaultStartPoint");
		FName VaultEndPointName("VaultLandPoint");
		SetMotionWarpTarget(VaultStartPointName, VaultStartPosition);
		SetMotionWarpTarget(VaultEndPointName, VaultLandPosition);
		IsVaulting = true;
		StartClimbing();
		PlayClimbMontage(VaultMontage);
	}
}
bool UCustomMovementComponent::CanStartValulting(FVector& OutVaultStartPosition, FVector& OutVaultLandPosition)
{
	OutVaultStartPosition = FVector::ZeroVector;
	OutVaultLandPosition = FVector::ZeroVector;
	if(IsFalling()) return false;
	const FVector EyeStart =  CharacterOwner->GetActorLocation() + 
		UpdatedComponent->GetUpVector() *CharacterOwner->BaseEyeHeight;
	const FVector ForwardEndPoint = EyeStart + UpdatedComponent->GetForwardVector() * 200.0f;
	if(DoLineTraceByObject(EyeStart, ForwardEndPoint).bBlockingHit) return false;
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	const FVector ForwardVector = UpdatedComponent->GetForwardVector();
	const FVector UpVector = UpdatedComponent->GetUpVector();
	const FVector DownVector = -UpdatedComponent->GetUpVector();
	for (int32 i = 0; i < 5; i++)
	{
		const FVector Start = ComponentLocation + ForwardVector * 100.0f * (i + 1) + UpVector * 100.0f;
		const FVector End = Start + DownVector * 100 * (i + 1);
		FHitResult VaultTraceHit = DoLineTraceByObject(Start, End);
		if (i == 0 && !VaultTraceHit.bBlockingHit)
		{
			return false;
		}
		if (i == 0 && VaultTraceHit.bBlockingHit)
		{
			OutVaultStartPosition = VaultTraceHit.ImpactPoint;
		}
		if (i == 4 && VaultTraceHit.bBlockingHit)
		{
			OutVaultLandPosition = VaultTraceHit.ImpactPoint;
			if (OutVaultLandPosition != FVector::ZeroVector && OutVaultStartPosition != FVector::ZeroVector)
			{
				return true;
			}
		}
		if (VaultTraceHit.bBlockingHit && i != 0)
		{
			if (VaultTraceHit.ImpactPoint.Z <  OutVaultStartPosition.Z )
			{
				OutVaultLandPosition = VaultTraceHit.ImpactPoint;
				if (OutVaultLandPosition != FVector::ZeroVector && OutVaultStartPosition != FVector::ZeroVector)
				{
					return true;
				}
			}
		}
	}
	return false;

}
bool UCustomMovementComponent::CheckCanHop(FVector& HopTraceStartPoint)
{
	const FVector TargetPoint = HopTraceStartPoint + UpdatedComponent->GetForwardVector() * 200.0f;
	return DoLineTraceByObject(HopTraceStartPoint, TargetPoint).bBlockingHit;
}
void UCustomMovementComponent::HandleHopUp()
{
	FVector TargetLocation = CharacterOwner->GetActorLocation() + UpdatedComponent->GetUpVector() * HopDistance;
	if (!CheckCanHop(TargetLocation)) return;
	if (HopUpMontage)
	{
		FName TargetName("HopUpLocation");
		SetMotionWarpTarget(TargetName, TargetLocation);
		PlayClimbMontage(HopUpMontage);
	}
	return;
}
void UCustomMovementComponent::HandleHopDown()
{
	FVector TargetLocation = CharacterOwner->GetActorLocation() - UpdatedComponent->GetUpVector() * HopDistance;
	if (!CheckCanHop(TargetLocation)) return;
	if (HopDownMontage)
	{
		FName TargetName("HopDownLocation");
		SetMotionWarpTarget(TargetName, TargetLocation);
		PlayClimbMontage(HopDownMontage);
	}
	return;
}
void UCustomMovementComponent::HandleHopRight()
{
	FVector TargetLocation = CharacterOwner->GetActorLocation() + UpdatedComponent->GetRightVector() * HopDistance;
	if (!CheckCanHop(TargetLocation)) return;
	if (HopRightMontage)
	{
		FName TargetName("HopRightLocation");
		SetMotionWarpTarget(TargetName, TargetLocation);
		PlayClimbMontage(HopRightMontage);
	}
	return;
}
void UCustomMovementComponent::HandleHopLeft()
{
	FVector TargetLocation = CharacterOwner->GetActorLocation() - UpdatedComponent->GetRightVector() * HopDistance;
	if (!CheckCanHop(TargetLocation)) return;
	if (HopLeftMontage)
	{
		FName TargetName("HopLeftLocation");
		SetMotionWarpTarget(TargetName, TargetLocation);
		PlayClimbMontage(HopLeftMontage);
	}
	return;
}
void UCustomMovementComponent::PlayClimbMontage(UAnimMontage* MontageToPlay)
{
	if (!MontageToPlay) return;
	if (!OwningPlayerAnimInstance) return;
	if (OwningPlayerAnimInstance->IsAnyMontagePlaying()) return;
	OwningPlayerAnimInstance->Montage_Play(MontageToPlay);
}
void UCustomMovementComponent::SetMotionWarpTarget(FName& InWarpTargetName, FVector& InTargetLocation)
{
	if (!OwningPlayerCharacter) return;
	OwningPlayerCharacter->GetMotionWarpingComponent()->AddOrUpdateWarpTargetFromLocation(InWarpTargetName,
		InTargetLocation);
}
void UCustomMovementComponent::OnClimbMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if(Montage == ClimbToTopMontage || Montage == VaultMontage)
	{
		SetMovementMode(MOVE_Walking);
	}
}
void UCustomMovementComponent::OnClimbMontageBlendOut(UAnimMontage* Montage, bool bInterrupted)
{
	if (Montage == ClimbToTopMontage )
	{
		SetMovementMode(MOVE_Walking);
	}
	if (Montage == VaultMontage)
	{
		IsVaulting = false;
		SetMovementMode(MOVE_Walking);
	}
	if (Montage == IdleToClimbMontage)
	{
		StartClimbing();
		StopMovementImmediately();
	}
	if (Montage == ClimbDownLedge)
	{
		StopMovementImmediately(); StartClimbing();
	}
	if (Montage == VaultMontage)
	{
		bOrientRotationToMovement = true;
		SetMovementMode(MOVE_Walking);
	}
}
bool UCustomMovementComponent::IsClimbing() const
{
	return MovementMode == MOVE_Custom && CustomMovementMode == ECustomMovementMode::MOVE_Climb;
}

// trace for climbable surfaces , returns true if there is a surface
bool UCustomMovementComponent::TraceClimbableObjects()
{
	const FVector StartOffset = UpdatedComponent->GetForwardVector() * 30.0f;
	const FVector Start = UpdatedComponent->GetComponentLocation() + StartOffset;
	const FVector End = Start + UpdatedComponent->GetForwardVector() * 90.f + UpdatedComponent->GetUpVector() * 40.f;
	ClimbableSurfacesTracedResults =DoCapsuleTraceMultiByObject(Start, End);
	return !ClimbableSurfacesTracedResults.IsEmpty() ;
}
FHitResult UCustomMovementComponent::TraceFromEyeHeight(float TraceDistance, float TraceStartOffset)
{
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	const FVector EyeHeightOffset = UpdatedComponent->GetUpVector() * (CharacterOwner->BaseEyeHeight + TraceStartOffset);
	const FVector Start = ComponentLocation + EyeHeightOffset;
	const FVector End = Start + UpdatedComponent->GetForwardVector() * TraceDistance;
	return DoLineTraceByObject(Start, End);
}

bool UCustomMovementComponent::TraceForLedge()
{
	const FVector Start = CharacterOwner->GetActorLocation() +
		CharacterOwner->GetActorUpVector() *(CharacterOwner->BaseEyeHeight + LedgeTraceOffsetZ);
	const FVector End = Start + CharacterOwner->GetActorForwardVector() * LedgeTraceOffsetX;
	FHitResult Hit = DoLineTraceByObject(Start,End);
	if (Hit.bBlockingHit)
	{
		float DotValue = FVector::DotProduct(-Hit.ImpactNormal, CharacterOwner->GetActorForwardVector());
		if ( DotValue != 0)
		{
			return false;
		}
	}
	const FVector Start1 = UpdatedComponent->GetForwardVector() * LedgeClimbStandDistance +
		FVector::UpVector * 200 + CharacterOwner->GetActorLocation();
	const FVector End1 = Start1 + (-FVector::UpVector * 210.0f);
	Hit = DoLineTraceByObject(Start1, End1);
	float value = FVector::DotProduct(Hit.ImpactNormal, FVector::UpVector);
	float angle = FMath::RadiansToDegrees(FMath::Acos(value));
	if(GetUnrotatedClimbVelocity().Z > 10.0f && Hit.bBlockingHit && angle > -7 && angle < 7) return true;
	return false;
}

#pragma endregion

FVector UCustomMovementComponent::GetUnrotatedClimbVelocity() const
{
	return UKismetMathLibrary::Quat_UnrotateVector(UpdatedComponent->GetComponentQuat(), Velocity);
}