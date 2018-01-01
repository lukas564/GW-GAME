// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Assault.h"
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
	
	void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void AimTowardsCrosshair();
};
