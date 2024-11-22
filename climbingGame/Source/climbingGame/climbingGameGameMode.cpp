// Copyright Epic Games, Inc. All Rights Reserved.

#include "climbingGameGameMode.h"
#include "climbingGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AclimbingGameGameMode::AclimbingGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
