// Fill out your copyright notice in the Description page of Project Settings.

#include "Assault.h"


// Sets default values
AAssault::AAssault()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TankAimingComponent = CreateDefaultSubobject<UTankAimingComponent>(FName("Aiming Component"));
}

// Called when the game starts or when spawned
void AAssault::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAssault::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAssault::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAssault::AimAt(FVector HitLocation)
{
	TankAimingComponent->AimAt(HitLocation);
}

void AAssault::SetBarrelReference(UStaticMeshComponent* BarrelToSet)
{
	TankAimingComponent->SetBarrelReference(BarrelToSet);
}