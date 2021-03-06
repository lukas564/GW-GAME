// // Copyright 2017-2018 Jan Kubala & Lukáš Palička. All Rights Reserved.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

UCLASS()
class GW_GAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	void AimTowardsCrosshair();
	UTankAimingComponent* AimingComponent;
private:
	UPROPERTY(EditDefaultsOnly)
		float CrossHairXLocation = 0.5;

	virtual void SetPawn(APawn* InPawn) override;
	UFUNCTION()
		void OnPossessedTankDeath();

	UPROPERTY(EditDefaultsOnly)
		float CrossHairYLocation = 0.33333;

	UPROPERTY(EditDefaultsOnly)
		float LineTraceRange = 1000000;

	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
	bool CharacterNotSelected = true;

protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
		void FoundAimingComponent(UTankAimingComponent* AimRef);
	
};
