// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidPorjectGameMode.h"
#include "AndroidPorjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidPorjectGameMode::AAndroidPorjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
