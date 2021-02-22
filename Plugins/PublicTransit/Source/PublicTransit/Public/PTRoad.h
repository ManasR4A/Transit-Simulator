// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTRoad.generated.h"

class USplineComponent;

UCLASS()
class PUBLICTRANSIT_API APTRoad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APTRoad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Road", meta = (DisplayName = " Mesh"))
		class USceneComponent* root;

	UPROPERTY(EditAnywhere, Category = "Road", meta = (DisplayName = " Left lane"))
		USplineComponent* m_RoadSpline;

	UPROPERTY(EditAnywhere, Category = "Road", meta = (DisplayName = " Right lane"))
		USplineComponent* m_RoadSpline2;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	



};
