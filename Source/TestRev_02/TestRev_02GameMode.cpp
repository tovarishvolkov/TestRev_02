// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestRev_02GameMode.h"
#include "TestRev_02Character.h"
#include "UObject/ConstructorHelpers.h"

ATestRev_02GameMode::ATestRev_02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
