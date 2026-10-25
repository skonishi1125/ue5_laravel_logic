// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaLogClientGameMode.h"
#include "LaLogClientCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaLogClientGameMode::ALaLogClientGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
