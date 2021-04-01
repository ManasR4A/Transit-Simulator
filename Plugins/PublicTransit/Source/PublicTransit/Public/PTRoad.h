// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTRoad.generated.h"

class USplineComponent;
class UArrowComponent;


USTRUCT()
struct FConnectorData
{
	GENERATED_USTRUCT_BODY()
	APTRoad* connectedRoad;
	int32 targetIndex;
};

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road", meta = (DisplayName = "Left Lane"))
		USplineComponent* m_leftLaneSpline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road", meta = (DisplayName = "Left Lane"))
		USplineComponent* m_rightLaneSpline;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Road", meta = (DisplayName = " Connectors"))
		TArray<UArrowComponent*> m_connectors;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Road", meta = (DisplayName = " Connectors' Data"))
	//	TMap<int32, FConnectorData> m_connectionData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road", meta = (DisplayName = " Update Connections"))
		bool m_bUpdateConnections;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool GetNextPoint(int32 i_direction, int32 i_currentIndex, FTransform &o_nextTransform);

#if WITH_EDITOR

	void PostEditChangeProperty(FPropertyChangedEvent& i_PropertyChanged) override;

#endif

	



};
