// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GW_GAME_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float RelativeSpeed);
private:

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxDegreesPerSecond = 5;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxElevationDegrees = 30;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MinElevationDegrees = -15;
};