// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TSHelperLibrary.h"

#include "Components/ActorComponent.h"
#include "TSRoadComponent.generated.h"


class UTSGridTileComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRANSITSIMULATOR_API UTSRoadComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTSRoadComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


#pragma region Public Vars

	TArray<UTSGridTileComponent*> SpawnTiles;

	UTSGridTileComponent* ParentTile;

	TEnumAsByte<EBuildingType> BuildingType;

#pragma endregion


		
};
