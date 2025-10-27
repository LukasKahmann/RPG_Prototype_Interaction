// Copyright Caleex Games


#include "Character/GASCharacter.h"

#include "Player/GASPlayerState.h"

AGASCharacter::AGASCharacter()
{
}

void AGASCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Init Ability Actor Info for the Server
	InitAbilityActorInfo();
}

void AGASCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//Init Ability Actor Info for the Client
	InitAbilityActorInfo();
}
