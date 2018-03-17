// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Assault.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AssaultPlayerController.generated.h"
class UTankAimingComponent;
/**
 * 
 */
UCLASS()
class GW_GAME_API AAssaultPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
		void FoundAimingComponent(UTankAimingComponent* AimRef);

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void AimTowardsCrosshair();

private:
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY (EditDefaultsOnly)
	float CrossHairXLocation = 0.5;

	UPROPERTY (EditDefaultsOnly)
	float CrossHairYLocation = 0.33333;

	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
