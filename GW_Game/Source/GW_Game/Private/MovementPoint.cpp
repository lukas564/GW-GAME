// Fill out your copyright notice in the Description page of Project Settings.

#include "MovementPoint.h"

void UMovementPoint::SetThrottle(float Throttle)
{
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s throttle: %f"), *Name, Throttle)

	auto ForceApplied = GetForwardVector() * Throttle * MovementPointMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}

