// Fill out your copyright notice in the Description page of Project Settings.

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

float AAssault::TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser)
{
	int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmount);
	int32 DamageToApply = FMath::Clamp(DamagePoints, 0, CurrentHealth);
	CurrentHealth -= DamageToApply;
	if (CurrentHealth <= 0)
	{
		OnDeath.Broadcast();
	}
	return DamageToApply;
}