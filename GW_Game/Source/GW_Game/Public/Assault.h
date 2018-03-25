#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Assault.generated.h"
UCLASS()
class GW_GAME_API AAssault : public APawn
{
	GENERATED_BODY()
	AAssault();

	public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;
private:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int32 StartingHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = "Health")
	int32 CurrentHealth = StartingHealth;

};