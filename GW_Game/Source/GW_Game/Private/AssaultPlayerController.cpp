// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.

#include "AssaultPlayerController.h"
#include "Assault.h"
#include "TankAimingComponent.h"

///Function to prevent pawn related fucntions running before the pawn is spawned
void AAssaultPlayerController::BeginPlay()
{
	Super::BeginPlay();
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
	FVector HitLocation;
	if (GetSightRayHitLocation(HitLocation))
	{
		AimingComponent->AimAt(HitLocation);
	}
}

/// Get the 2D coordinates of the aiming dot on the screen
bool AAssaultPlayerController::GetSightRayHitLocation(FVector& OutHitLocation) const
{
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrossHairXLocation, ViewportSizeY * CrossHairYLocation);
	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		return GetLookVectorHitLocation(LookDirection, OutHitLocation);
	}
	return false;
}

/// Get the direction in which the player is looking
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

/// Linetrace along LookDierction and return where it hits
bool AAssaultPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
	if (GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECollisionChannel::ECC_Camera))
	{
		HitLocation = HitResult.Location;
		return true;
	}
	return false;
}

/// Set pawn for the multicast delegate
void AAssaultPlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		auto PossessedTank = Cast<AAssault>(InPawn);
		if (!ensure(PossessedTank)) { return; }
		PossessedTank->OnDeath.AddUniqueDynamic(this, &AAssaultPlayerController::OnPossessedTankDeath);

	}
}

/// Start spectating when the player is reported dead
void AAssaultPlayerController::OnPossessedTankDeath()
{
	StartSpectatingOnly();
}