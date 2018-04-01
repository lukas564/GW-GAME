// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.

#include "Assault.h"
#include "TankBarrel.h"
#include "Projectile.h"

AAssault::AAssault()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AAssault::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = StartingHealth;
}

float AAssault::GetHealthPercent() const
{
	return (float)CurrentHealth / (float)StartingHealth;
}

/// Unreal's function to apply damage, modified to apply right amount of damage and signal death
float AAssault::TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser)
{
	int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmount);
	int32 DamageToApply = FMath::Clamp(DamagePoints, 0, CurrentHealth);
	CurrentHealth -= DamageToApply;
	if (CurrentHealth <= 0)
	{
		OnDeath.Broadcast();
		TankOutOfAction();
	}
	return DamageToApply;
}