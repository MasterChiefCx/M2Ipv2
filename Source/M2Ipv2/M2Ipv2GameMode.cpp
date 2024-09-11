// Copyright Epic Games, Inc. All Rights Reserved.

#include "M2Ipv2GameMode.h"
#include "M2Ipv2Character.h"
#include "UObject/ConstructorHelpers.h"

AM2Ipv2GameMode::AM2Ipv2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
