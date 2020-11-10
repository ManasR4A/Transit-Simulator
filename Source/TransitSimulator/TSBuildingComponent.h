// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TSHelperLibrary.h"

#include "Components/ActorComponent.h"
#include "TSBuildingComponent.generated.h"


class UTSGridTileComponent;
class UTSRoadComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRANSITSIMULATOR_API UTSBuildingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTSBuildingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UTSRoadComponent* ParentRoad;

	UTSGridTileComponent* ParentTile;

	UPROPERTY(EditAnywhere)
		uint32 SimCapacity;

	UPROPERTY(EditAnywhere)
		TEnumAsByte<EBuildingType> BuildingType;

		
};
