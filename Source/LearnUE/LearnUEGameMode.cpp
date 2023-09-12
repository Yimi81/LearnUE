// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnUEGameMode.h"
#include "LearnUECharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearnUEGameMode::ALearnUEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
