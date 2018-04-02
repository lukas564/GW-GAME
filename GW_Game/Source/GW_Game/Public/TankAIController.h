// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.

#pragma once

#include "AIController.h"
#include "CoreMinimal.h"
#include "TankAIController.generated.h"

class ATank;

UCLASS()
class GW_GAME_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	UFUNCTION()
		void OnPossessedTankDeath();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void SetPawn(APawn* InPawn) override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float AcceptanceRadius = 3000;
};