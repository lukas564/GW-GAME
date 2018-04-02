// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UMovementPoint;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GW_GAME_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Setup")
		void Initialise(UMovementPoint* LeftPointToSet, UMovementPoint* RightPointToSet);

	UFUNCTION(BlueprintCallable, Category = "Input")
		void IntendMoveForward(float Throw);

	UFUNCTION(BlueprintCallable, Category = "Input")
		void IntendTurnRight(float Throw);

private:
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;

	UMovementPoint* LeftPoint = nullptr;
	UMovementPoint* RightPoint = nullptr;
};