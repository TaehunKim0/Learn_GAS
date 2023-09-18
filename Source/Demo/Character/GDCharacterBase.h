// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "GDCharacterBase.generated.h"

UCLASS()
class DEMO_API AGDCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AGDCharacterBase();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	UPROPERTY()
	TWeakObjectPtr<class UGDAbilitySystemComponent> AbilitySystemComponent;
};