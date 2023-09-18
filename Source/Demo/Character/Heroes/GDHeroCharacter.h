// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../GDCharacterBase.h"
#include "GDHeroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API AGDHeroCharacter : public AGDCharacterBase
{
	GENERATED_BODY()

protected:
	// Server Only
	virtual void PossessedBy(AController* NewController) override;

	// Client Only
	virtual void OnRep_PlayerState() override;
};
