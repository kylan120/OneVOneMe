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