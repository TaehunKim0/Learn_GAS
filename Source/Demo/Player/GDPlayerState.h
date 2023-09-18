// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/PlayerState.h"
#include "GDPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API AGDPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AGDPlayerState();

public:
	UAbilitySystemComponent * GetAbilitySystemComponent() const;

private:
	UPROPERTY()
	UAbilitySystemComponent * AbilitySystemComponent;
};
