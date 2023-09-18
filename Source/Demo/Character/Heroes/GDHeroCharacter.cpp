// Fill out your copyright notice in the Description page of Project Settings.


#include "GDHeroCharacter.h"

#include "Demo/Character/Abilities/GDAbilitySystemComponent.h"
#include "Demo/Player/GDPlayerState.h"

void AGDHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	
}

void AGDHeroCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AGDPlayerState * PlayerState = GetPlayerState<AGDPlayerState>();
	if(PlayerState)
	{
		AbilitySystemComponent = Cast<UGDAbilitySystemComponent>(PlayerState->GetAbilitySystemComponent());
		AbilitySystemComponent->InitAbilityActorInfo(PlayerState, this);
	}
}
