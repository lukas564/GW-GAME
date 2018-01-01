// Fill out your copyright notice in the Description page of Project Settings.
//#include "GW_Game.h"
#include "AssaultPlayerController.h"

void AAssaultPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing: %s"), *(ControlledTank->GetName()))
	}
}

void AAssaultPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
		AimTowardsCrosshair();

}

AAssault* AAssaultPlayerController::GetControlledTank() const
{
	return Cast<AAssault>(GetPawn());
}

void AAssaultPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	// GetWorld location if linetrace through crosshair
	// If it hits the landscape
		// Tell controlled tank to aim at this point
}
