// Fill out your copyright notice in the Description page of Project Settings.


#include "GDPlayerController.h"

#include "GDPlayerState.h"

void AGDPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	AGDPlayerState * PlayerState = GetPlayerState<AGDPlayerState>();
	if(PlayerState)
	{
		PlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(PlayerState, InPawn);
	}
}

void AGDPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}
