// Fill out your copyright notice in the Description page of Project Settings.
//#include "GW_Game.h"
#include "Assault.h"


// Sets default values
AAssault::AAssault()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

