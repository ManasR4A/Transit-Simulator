// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTTransitManager.generated.h"

class APTRoad;

UCLASS()
class PUBLICTRANSIT_API APTTransitManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APTTransitManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transit Manager|Road", meta = (DisplayName = "All Roads"))
		TArray<APTRoad*> m_roads;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
