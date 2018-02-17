// Fill out your copyright notice in the Description page of Project Settings.
#include "TankMovementComponent.h"
#include "MovementPoint.h"

void UTankMovementComponent::Initialise(UMovementPoint* LeftPointToSet, UMovementPoint* RightPointToSet)
{
	LeftPoint = LeftPointToSet;
	RightPoint = RightPointToSet;
}

void UTankMovementComponent::IntendMoveForward(float Throw)
{
	if (!LeftPoint || !RightPoint) { return; }
	LeftPoint->SetThrottle(Throw);
	RightPoint->SetThrottle(Throw);
}

void UTankMovementComponent::IntendTurnRight(float Throw)
{
	if (!LeftPoint || !RightPoint) { return; }
	LeftPoint->SetThrottle(Throw);
	RightPoint->SetThrottle(-Throw);
}