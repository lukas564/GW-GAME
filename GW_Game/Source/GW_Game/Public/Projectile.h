// Copyright 2017-2018 Jan Kubala & Lukáš Palièka. All Rights Reserved.
#pragma once

#include "GameFramework/ProjectileMovementComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class GW_GAME_API AProjectile : public AActor
{
	GENERATED_BODY()

public:
	AProjectile();

	UPROPERTY(BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* CollisionMesh = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Components")
		UParticleSystemComponent* LaunchBlast = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Components")
		UParticleSystemComponent* ImpactBlast = nullptr;

	virtual void BeginPlay() override;
	void LaunchProjectile(float Speed);

	UProjectileMovementComponent* ProjectileMovement = nullptr;

private:
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(VisibleAnywhere, Category = "Components")
		URadialForceComponent* ExplosionForce = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float DestroyDelay = 10.f;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float ProjectileDamage = 50.f;

	void OnTimerExpire();
};