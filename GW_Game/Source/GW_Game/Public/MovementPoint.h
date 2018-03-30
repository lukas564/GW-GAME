// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MovementPoint.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GW_GAME_API UMovementPoint : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Input)
		void SetThrottle(float Throttle);

	UPROPERTY(EditDefaultsOnly)
		float MovementPointMaxDrivingForce = 400000;

private:
	UMovementPoint();

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	virtual void BeginPlay() override;
	void ApplySidewaysForce();
	float CurrentThrottle = 0;
	void DrivePoint();
};
