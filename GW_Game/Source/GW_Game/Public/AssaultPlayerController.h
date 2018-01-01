// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Assault.h"
#include "Heavy.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AssaultPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GW_GAME_API AAssaultPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AAssault* GetControlledTank() const;
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void AimTowardsCrosshair();

private:
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY (EditAnywhere)
	float CrossHairXLocation = 0.5;

	UPROPERTY (EditAnywhere)
	float CrossHairYLocation = 0.33333;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
