// Copyright Epic Games, Inc. All Rights Reserved.

#include "Trials_of_ErrorGameMode.h"
#include "Trials_of_ErrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrials_of_ErrorGameMode::ATrials_of_ErrorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
