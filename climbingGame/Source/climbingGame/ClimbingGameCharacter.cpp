// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClimbingGameCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Components/CustomMovementComponent.h"
#include "Components/BoxComponent.h"
#include "MotionWarpingComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AClimbingGameCharacter

AClimbingGameCharacter::AClimbingGameCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCustomMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	CustomMovementComponent = Cast<UCustomMovementComponent>(GetCharacterMovement());
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComp"));


}

void AClimbingGameCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	if (CustomMovementComponent)
	{
		CustomMovementComponent->OnEnterClimbStateDelegate.BindUObject(this, &ThisClass::OnPlayerEnterClimbState);
		CustomMovementComponent->OnExitClimbStateDelegate.BindUObject(this, &ThisClass::OnPlayerExitClimbState);
	}
	AddMappingContext(DefaultMappingContext, 0);

}

///////                                         Input

void AClimbingGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context

	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AClimbingGameCharacter::HandleGroundMovementInput);

		EnhancedInputComponent->BindAction(ClimbMoveAction, ETriggerEvent::Triggered, this, &AClimbingGameCharacter::HandleClimbMovementInput);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AClimbingGameCharacter::Look);

		//Climbing
		EnhancedInputComponent->BindAction(ClimbAction, ETriggerEvent::Started, this, &AClimbingGameCharacter::OnClimbActionStarted);

		EnhancedInputComponent->BindAction(ClimbHopAction, ETriggerEvent::Started, this, &AClimbingGameCharacter::ClimbHop);

		//Wallrunning
		EnhancedInputComponent->BindAction(ClimbAction, ETriggerEvent::Started, this, &AClimbingGameCharacter::OnSprintStarted);
		EnhancedInputComponent->BindAction(ClimbAction, ETriggerEvent::Completed, this, &AClimbingGameCharacter::OnSprintEnded);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AClimbingGameCharacter::AddMappingContext(UInputMappingContext* ContextToAdd, int32 Priority)
{
	if (!ContextToAdd) return;
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(ContextToAdd, Priority);
		}
	}
}

void AClimbingGameCharacter::RemoveMappingContext(UInputMappingContext* ContextToRemove)
{
	if (!ContextToRemove) return;
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->RemoveMappingContext(ContextToRemove);
		}
	}
}



void AClimbingGameCharacter::HandleGroundMovementInput(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AClimbingGameCharacter::HandleClimbMovementInput(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D MovementVector = Value.Get<FVector2D>();
	const FVector ForwardDirection =
		FVector::CrossProduct(-CustomMovementComponent->GetClimbableSurfaceNormal(), GetActorRightVector());
	const FVector RightDirection =
		FVector::CrossProduct(-CustomMovementComponent->GetClimbableSurfaceNormal(), -GetActorUpVector());
	//Movement Input while climbing
	AddMovementInput(ForwardDirection, MovementVector.Y);
	AddMovementInput(RightDirection, MovementVector.X);
}

void AClimbingGameCharacter::OnPlayerEnterClimbState()
{
	AddMappingContext(ClimbMappingContext, 1);
}

void AClimbingGameCharacter::OnPlayerExitClimbState()
{
	RemoveMappingContext(ClimbMappingContext);
}

void AClimbingGameCharacter::ClimbHop()
{
	CustomMovementComponent->RequestHopping();
}

void AClimbingGameCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AClimbingGameCharacter::OnClimbActionStarted(const FInputActionValue& Value)
{
	if (!CustomMovementComponent) { return; }
	if (CustomMovementComponent->IsClimbing())
	{
		CustomMovementComponent->ToggleClimbing(false);
	}
	else
	{ 
		CustomMovementComponent->ToggleClimbing(true);
	}
}

void AClimbingGameCharacter::OnSprintStarted(const FInputActionValue& Value)
{
	CustomMovementComponent->MaxWalkSpeed = 600.f;
	CustomMovementComponent->bSprinting = true;
}
void AClimbingGameCharacter::OnSprintEnded(const FInputActionValue& Value)
{
	CustomMovementComponent->MaxWalkSpeed = 300.f;
	CustomMovementComponent->bSprinting = true;
}
