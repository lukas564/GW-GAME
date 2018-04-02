// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.

#include "MovementPoint.h"

UMovementPoint::UMovementPoint()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UMovementPoint::BeginPlay()
{
	OnComponentHit.AddDynamic(this, &UMovementPoint::OnHit);
}

/// Called on hit to prevent flying
void UMovementPoint::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	DrivePoint();
	ApplySidewaysForce();
	CurrentThrottle = 0;
}

/// Applies force to prevent drifting
void UMovementPoint::ApplySidewaysForce()
{
	auto SlippageSpeed = FVector::DotProduct(GetRightVector(), GetComponentVelocity());
	auto DeltaTime = GetWorld()->GetDeltaSeconds();
	auto CorrectionAcceleration = -SlippageSpeed / DeltaTime * GetRightVector();
	auto TankRoot = Cast<UStaticMeshComponent>(GetOwner()->GetRootComponent());
	auto CorrectionForce = (TankRoot->GetMass() * CorrectionAcceleration) / 2;
	TankRoot->AddForce(CorrectionForce);
}

/// Sets throttle from blueprint
void UMovementPoint::SetThrottle(float Throttle)
{
	CurrentThrottle = FMath::Clamp<float>(CurrentThrottle + Throttle, -1, 1);
}

/// Applies force on points
void UMovementPoint::DrivePoint()
{
	auto ForceApplied = GetForwardVector() * CurrentThrottle * MovementPointMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}