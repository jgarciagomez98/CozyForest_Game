// Copyright Epic Games, Inc. All Rights Reserved.

#include "CozyForestGameMode.h"
#include "CozyForestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACozyForestGameMode::ACozyForestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
