// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

UENUM()
enum class EFiringState : uint8
{
	Reloading,
	Aiming,
	Locked,
	OutOfAmmo
};

class UTankBarrel;
class UTankTurret;
class AProjectile;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GW_GAME_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Setup")
		void Initialise(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet);

	UFUNCTION(BlueprintCallable, Category = "Firing")
		void Fire();

	UFUNCTION(BlueprintCallable, Category = "Firing")
		int32 GetRoundsLeft() const;

	virtual void BeginPlay() override;
	void AimAt(FVector HitLocation);
	EFiringState GetFiringState();

private:
	UTankAimingComponent();

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		TSubclassOf<AProjectile> ProjectileBlueprint;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
		float ReloadTimeInSeconds = 3;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
		int32 RoundsLeft = 10;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
		float LaunchSpeed = 4000;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	bool IsBarrelMoving();

	void MoveBarrelAndTurretTowards(FVector AimDirection);
	UTankBarrel * Barrel = nullptr;
	UTankTurret* Turret = nullptr;

	double LastFireTime = 0;

	FVector AimDirection;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "State")
		EFiringState FiringState = EFiringState::Reloading;
};