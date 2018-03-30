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
	virtual void Tick (float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void SetPawn(APawn* InPawn) override;
	UFUNCTION()
	void OnPossessedTankDeath();
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 8000;
};
