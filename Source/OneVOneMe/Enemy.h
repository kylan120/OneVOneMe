/*
Name: Kylan, Jeffery, Jordan
Date: 12/03/2023
Description: This is the enemy header that implements to the enemy cpp
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class ONEVONEME_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy")
	float CurrentHealth;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Function to apply damage to the enemy
	UFUNCTION(BlueprintCallable, Category = "Enemy")
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	// Function to handle enemy death
	UFUNCTION(BlueprintCallable, Category = "Enemy")
	virtual void Die();

	// Function to respawn the enemy
	UFUNCTION(BlueprintCallable, Category = "Enemy")
	virtual void Respawn();
};
