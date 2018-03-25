// Fill out your copyright notice in the Description page of Project Settings.
//#include "GW_Game.h"
#include "AssaultPlayerController.h"
#include "TankAimingComponent.h"
void AAssaultPlayerController::BeginPlay()
{
	Super::BeginPlay();
}
void AAssaultPlayerController::PawnSpawned()
{
	if (!ensure(GetPawn())) { return; }
	AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();
	FoundAimingComponent(AimingComponent);
}

void AAssaultPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!AimingComponent) { return; }
	AimTowardsCrosshair();
}

void AAssaultPlayerController::AimTowardsCrosshair()
{
	FVector HitLocation; // Out parameter
	if (GetSightRayHitLocation(HitLocation))
	{
		AimingComponent->AimAt(HitLocation);
	}
}

bool AAssaultPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
	// Find the crosshair position
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrossHairXLocation, ViewportSizeY * CrossHairYLocation);
		// Deproject the screen position of the crosshair to a world direction
	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		// Line trace along the direction and see what we are hitting
		return GetLookVectorHitLocation(LookDirection, HitLocation);
	}
	return false;
}

bool AAssaultPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
	if (GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECollisionChannel::ECC_Visibility))
	{
		HitLocation = HitResult.Location;
		return true;
	}
	return false;
}

bool AAssaultPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	FVector CameraWorldLocation;
	return DeprojectScreenPositionToWorld(
		ScreenLocation.X,
		ScreenLocation.Y,
		CameraWorldLocation,
		LookDirection
	);
}