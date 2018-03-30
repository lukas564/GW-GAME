// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.

#include "AssaultPlayerController.h"
#include "Assault.h"
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
	FVector HitLocation;
	if (GetSightRayHitLocation(HitLocation))
	{
		AimingComponent->AimAt(HitLocation);
	}
}

bool AAssaultPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrossHairXLocation, ViewportSizeY * CrossHairYLocation);
	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
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
		ECollisionChannel::ECC_Camera))
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

void AAssaultPlayerController::OnPossessedTankDeath()
{
	StartSpectatingOnly();
}