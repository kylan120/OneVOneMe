// Copyright Epic Games, Inc. All Rights Reserved.

#include "OneVOneMeGameMode.h"
#include "OneVOneMeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOneVOneMeGameMode::AOneVOneMeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
