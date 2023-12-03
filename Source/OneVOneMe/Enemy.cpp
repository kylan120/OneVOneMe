#include "Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
	// Set this character to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	// Set default values for health
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// Function to apply damage to the enemy
float AEnemy::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	CurrentHealth -= DamageAmount;

	if (CurrentHealth <= 0.0f)
	{
		Die();
	}

	return DamageAmount;
}

// Function to handle enemy death
void AEnemy::Die()
{
	// Implement logic for enemy death here
	// For example, play death animation, reset health, and respawn
	Respawn();
}

// Function to respawn the enemy
void AEnemy::Respawn()
{
	// Implement logic to respawn the enemy
	// For example, reset health and reposition the enemy
	CurrentHealth = MaxHealth;
	SetActorLocation(FVector(0.0f, 0.0f, 0.0f)); // Set respawn location
}
