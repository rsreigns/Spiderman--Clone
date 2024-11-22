// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CustomMovementComponent.generated.h"
DECLARE_DELEGATE(FOnEnterClimbState)
DECLARE_DELEGATE(FOnExitClimbState)

class UAnimMontage;
class UAnimInstance;
class AClimbingGameCharacter;
UENUM(BlueprintType)
namespace ECustomMovementMode
{
	enum Type
	{
		MOVE_Climb UMETA(DisplayName="ClimbMode"),
		Move_WallRun UMETA(DisplayName = "WallRunMode")
	};
}
/**
 * 
 */
UCLASS()
class CLIMBINGGAME_API UCustomMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public :
	FOnEnterClimbState OnEnterClimbStateDelegate;
	FOnExitClimbState OnExitClimbStateDelegate;

protected:
#pragma region OverridenFunctions
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode) override;
	virtual void PhysCustom(float deltaTime, int32 Iterations) override;
	virtual float GetMaxSpeed() const override;
	virtual float GetMaxAcceleration() const override;

	virtual FVector ConstrainAnimRootMotionVelocity
	(const FVector& RootMotionVelocity, const FVector& CurrentVelocity) const override;

	virtual void HandleWalkingOffLedge(const FVector& PreviousFloorImpactNormal,
		const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation,
		float TimeDelta) override;

#pragma endregion
private:
#pragma region ClimbTraces

	TArray<FHitResult> DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool ShowDebugShape = false, bool bDrawPersistentShapes = false);
	FHitResult DoLineTraceByObject(const FVector& Start, const FVector& End, bool ShowDebugShape = false, bool bDrawPersistentShapes = false);
#pragma endregion

#pragma region ClimbCore

	bool TraceClimbableObjects();
	FHitResult TraceFromEyeHeight(float TraceDistance, float TraceStartOffset=0.0f);
	bool TraceForLedge();
	bool CanStartClimbing();

	void StartClimbing();
	void StopClimbing();
	void PhysClimb(float deltaTime, int32 Iterations);
	void ProcessClimbableSurfaceInfo();
	bool CheckShouldStopClimbing();
	bool CheckHasReachedFloor();
	FQuat GetClimbRotation(float DeltaTime);
	void SnapMovementToClimbableSurfaces(float DeltaTime);
	//        Vaulting
	void TryStartVaulting();
	bool CanStartValulting(FVector& OutVaultStartPosition, FVector& OutVaultLandPosition);
	//        Hopping
	bool CheckCanHop(FVector& HopTraceStartPoint);
	void HandleHopUp();
	void HandleHopDown();
	void HandleHopRight();
	void HandleHopLeft();
	//       Montages
	void PlayClimbMontage(UAnimMontage* MontageToPlay);
	void SetMotionWarpTarget(FName& InWarpTargetName, FVector& InTargetLocation);
	UFUNCTION()
	void OnClimbMontageEnded(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	void OnClimbMontageBlendOut(UAnimMontage* Montage, bool bInterrupted);
#pragma endregion

#pragma region ClimbCoreVariables

	TArray<FHitResult> ClimbableSurfacesTracedResults;
	FVector CurrentClimbableSurfaceLocation;
	FVector CurrentClimbabaleSurfaceNormal;
	UPROPERTY()
	UAnimInstance* OwningPlayerAnimInstance;

	UPROPERTY()
	AClimbingGameCharacter* OwningPlayerCharacter;
#pragma endregion

#pragma region ClimbBPVariables

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	TArray<TEnumAsByte<EObjectTypeQuery> > ClimbabaleSurfaceTraceObjects;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "CharacterMovement: Climbing", meta =(AllowPrivateAccess="true"))
	float CapsuleTraceRadius = 50.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float CapsuleHalfHeight = 72.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float MaxBreakClimbDeccerleration = 400.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float MaxClimbSpeed=100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float MaxClimbAcceleration = 300.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float LedgeCheckDistance = 150.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float ClimbLocation = 30.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float LedgeClimbDownLocation = 20.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float LedgeClimbAngleThreshold = 60.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float ShouldClimbDownLedge = 200.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float HopDistance = 200.0f;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* IdleToClimbMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ClimbToTopMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ClimbDownLedge;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* VaultMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HopUpMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HopDownMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HopLeftMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HopRightMontage;

	UPROPERTY(BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LastPlayedClimbMontage;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float LedgeTraceOffsetZ =100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float LedgeTraceOffsetX = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterMovement: Climbing", meta = (AllowPrivateAccess = "true"))
	float LedgeClimbStandDistance = 70.0f;
#pragma endregion
public :
	bool IsVaulting = false;
	bool bSprinting = false;
	void ToggleClimbing(bool bEnableClimb);
	void RequestHopping();
	bool IsClimbing() const;
	FORCEINLINE FVector GetClimbableSurfaceNormal() const { return CurrentClimbabaleSurfaceNormal; }
	FVector GetUnrotatedClimbVelocity() const;
};
