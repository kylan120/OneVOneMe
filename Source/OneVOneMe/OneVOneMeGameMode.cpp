// Implementation in .cpp file

#include "OneVOneMeGameMode.h"
#include "OneVOneMeCharacter.h"
#include "Enemy.h" // Include the Enemy header
#include "UObject/ConstructorHelpers.h"

AOneVOneMeGameMode::AOneVOneMeGameMode()
    : Super()
{
    // Set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
    DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void AOneVOneMeGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Spawn the enemy using class members
    AEnemy* NewEnemy = GetWorld()->SpawnActor<AEnemy>(AEnemy::StaticClass(), SpawnLocation, SpawnRotation);

    // You can perform additional setup for the enemy here if needed
}