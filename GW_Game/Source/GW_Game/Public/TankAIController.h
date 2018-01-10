// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "AIController.h"
#include "CoreMinimal.h"
#include "TankAIController.generated.h"

class AAssault;

/**
 * 
 */
UCLASS()
class GW_GAME_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	AAssault* GetControlledTank() const;
	AAssault* GetPlayerTank() const;
	virtual void Tick (float DeltaTime) override;
	virtual void BeginPlay() override;
};
