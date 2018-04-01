// Copyright 2017-2018 Jan Kubala & Luk� Pali�ka. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Assault.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTankDelegate);

UCLASS()
class GW_GAME_API AAssault : public APawn
{
	GENERATED_BODY()
		AAssault();

public:
	UFUNCTION(BlueprintPure, Category = "Health")
		float GetHealthPercent() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Health")
		void TankOutOfAction();

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;
	FTankDelegate OnDeath;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		int32 StartingHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = "Health")
		int32 CurrentHealth;

	virtual void BeginPlay() override;
};