// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/CharacterAnimInstance.h"
#include "climbingGame/ClimbingGameCharacter.h"
#include "Components/CustomMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	ClimbingGameCharacter = Cast<AClimbingGameCharacter>(TryGetPawnOwner());
	if (ClimbingGameCharacter)
	{
		CustomMovementComponent = ClimbingGameCharacter->GetCustomMovementComponent();
	}
}

void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (!ClimbingGameCharacter || !CustomMovementComponent) return;
	GetGroundSpeed();
	GetAirSpeed();
	GetShouldMove();
	GetIsFalling();
	GetIsClimbing();
	GetClimbVelocity();
}

void UCharacterAnimInstance::GetGroundSpeed()
{
	GroundSpeed = UKismetMathLibrary::VSizeXY(ClimbingGameCharacter->GetVelocity());
}

void UCharacterAnimInstance::GetAirSpeed()
{
	AirSpeed = ClimbingGameCharacter->GetVelocity().Z;
}

void UCharacterAnimInstance::GetShouldMove()
{
	bShouldMove = CustomMovementComponent->GetCurrentAcceleration().Size() > 0.0f && GroundSpeed > 5.0f && !bIsFalling ;
}

void UCharacterAnimInstance::GetIsFalling()
{
	bIsFalling = CustomMovementComponent->IsFalling();
}

void UCharacterAnimInstance::GetIsClimbing()
{
	bIsClimbing = CustomMovementComponent->IsClimbing();
}

void UCharacterAnimInstance::GetClimbVelocity()
{
	ClimbVelocity = CustomMovementComponent->GetUnrotatedClimbVelocity();
}
