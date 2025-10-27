// Copyright Caleex Games

#pragma once

#include "CoreMinimal.h"
#include "Character/GASCharacterBase.h"
#include "Player/GASPlayerState.h"
#include "GASCharacter.generated.h"


UCLASS()
class RPGPROTOTYPE_API AGASCharacter : public AGASCharacterBase
{
	GENERATED_BODY()

public:
	AGASCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();
	
};

inline void AGASCharacter::InitAbilityActorInfo()
{
	AGASPlayerState* GASPlayerState = GetPlayerState<AGASPlayerState>();
	check(GASPlayerState);
	GASPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(GASPlayerState,this);
	AbilitySystemComponent = GASPlayerState->GetAbilitySystemComponent();
	AttributeSet = GASPlayerState->GetAttributeSet();
}
