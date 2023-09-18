// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GDPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API AGDPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	// Server Only
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnRep_PlayerState() override;
	//--
};
