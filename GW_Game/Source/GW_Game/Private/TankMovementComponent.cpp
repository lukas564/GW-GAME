// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.

#include "TankMovementComponent.h"
#include "MovementPoint.h"

/// References to points to apply force on
void UTankMovementComponent::Initialise(UMovementPoint* LeftPointToSet, UMovementPoint* RightPointToSet)
{
	LeftPoint = LeftPointToSet;
	RightPoint = RightPointToSet;
}

void UTankMovementComponent::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed)
{
	auto TankForward = GetOwner()->GetActorForwardVector().GetSafeNormal();
	auto AIForwardIntention = MoveVelocity.GetSafeNormal();

	auto ForwardThrow = FVector::DotProduct(TankForward, AIForwardIntention);
	auto RightThrow = FVector::CrossProduct(TankForward, AIForwardIntention).Z;

	IntendMoveForward(ForwardThrow);
	IntendTurnRight(RightThrow);
}

/// Takes the amount of force from the blueprint to apply on movement points
void UTankMovementComponent::IntendMoveForward(float Throw)
{
	if (!ensure(LeftPoint && RightPoint)) { return; }
	LeftPoint->SetThrottle(Throw);
	RightPoint->SetThrottle(Throw);
}

/// Takes the amount of force from the blueprint to apply on movement points
void UTankMovementComponent::IntendTurnRight(float Throw)
{
	if (!ensure(LeftPoint && RightPoint)) { return; }
	LeftPoint->SetThrottle(Throw);
	RightPoint->SetThrottle(-Throw);
}