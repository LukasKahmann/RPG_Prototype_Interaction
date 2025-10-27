// Copyright Caleex Games

#pragma once

#include "CoreMinimal.h"
#include "Character/GASCharacterBase.h"
#include "GASEnemy.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROTOTYPE_API AGASEnemy : public AGASCharacterBase
{
	GENERATED_BODY()

public:
	AGASEnemy();

protected:
	virtual void BeginPlay() override;
};
