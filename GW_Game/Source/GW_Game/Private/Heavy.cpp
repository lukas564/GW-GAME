// Fill out your copyright notice in the Description page of Project Settings.

#include "Heavy.h"


// Sets default values
AHeavy::AHeavy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHeavy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeavy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHeavy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AHeavy::AimAt(FVector HitLocation)
{
	auto OurTankName = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s aiming at: %s"), *OurTankName, *HitLocation.ToString())
}