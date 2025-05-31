// Copyright Epic Games, Inc. All Rights Reserved.

#include "Wizard_JourneyGameMode.h"
#include "Wizard_JourneyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWizard_JourneyGameMode::AWizard_JourneyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
