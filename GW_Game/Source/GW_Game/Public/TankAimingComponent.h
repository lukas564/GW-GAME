// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GW_GAME_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
	
	void AimAt(FVector HitLocation, float LaunchSpeed);

	void SetBarrelReference(UStaticMeshComponent* BarrelToSet);

	void SetTurretReference(UStaticMeshComponent* TurretToSet);

private:
	UStaticMeshComponent* Barrel = nullptr;

	UStaticMeshComponent* Turret = nullptr;
		
	void MoveBarrelTowards(FVector AimDirection);

	void MoveTurretTowards(FVector AimDirection);
};
