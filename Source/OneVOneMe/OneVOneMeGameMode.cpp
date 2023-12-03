/*
Name: Kylan, Jeffery, Jordan
Date: 12/03/2023
Description: This is implemented from the header that sets the game
*/

#include "OneVOneMeGameMode.h"
#include "OneVOneMeCharacter.h"
#include "Enemy.h" 
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

  
}