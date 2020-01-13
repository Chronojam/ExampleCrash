// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Test_AnimGameMode.h"
#include "Test_AnimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_AnimGameMode::ATest_AnimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
