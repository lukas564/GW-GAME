// Copyright 2017-2018 Jan Kubala & Luk� Pali�ka. All Rights Reserved.

#include "TankMovementComponent.h"
#include "MovementPoint.h"

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

void UTankMovementComponent::IntendMoveForward(float Throw)
{
	if (!ensure(LeftPoint && RightPoint)) { return; }
	LeftPoint->SetThrottle(Throw);
	RightPoint->SetThrottle(Throw);
}

void UTankMovementComponent::IntendTurnRight(float Throw)
{
	if (!ensure(LeftPoint && RightPoint)) { return; }
	LeftPoint->SetThrottle(Throw);
	RightPoint->SetThrottle(-Throw);
}