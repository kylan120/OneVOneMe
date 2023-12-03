/*
Name: Kylan, Jeffery, Jordan
Date: 12/03/2023
Descripiton: This implements to the cpp class that is for the main game
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OneVOneMeGameMode.generated.h"

UCLASS(minimalapi)
class AOneVOneMeGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AOneVOneMeGameMode();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    FVector SpawnLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    FRotator SpawnRotation;

protected:
    // Declare BeginPlay function
    virtual void BeginPlay() override;
};