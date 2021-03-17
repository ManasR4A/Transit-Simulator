// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"
#include "PTSimulationManager.generated.h"

UCLASS()
class PUBLICTRANSIT_API APTSimulationManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APTSimulationManager();

	UPROPERTY(EditAnywhere, Category = "Initialization|Timer")
		int32 SimulationSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime|Timer")
		int64 SimTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime|Timer|Time")
		int32 Hour;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime|Timer|Time")
		int32 m_Min;

	// Global Time Manager
	FTimerHandle TimeManager;
	FTimerDynamicDelegate TimerUpdateDelegate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void TimerUpdate();


};
