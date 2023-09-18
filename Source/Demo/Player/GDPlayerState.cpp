// Fill out your copyright notice in the Description page of Project Settings.


#include "GDPlayerState.h"

AGDPlayerState::AGDPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
}

UAbilitySystemComponent* AGDPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
