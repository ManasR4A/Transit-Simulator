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

#pragma region Public Data Members

#pragma region Global Time
	UPROPERTY(EditAnywhere, Category = "Initialization|Timer", meta = (DisplayName = "Simulation Speed"))
		int32 m_SimulationSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime|Timer", meta = (DisplayName = "Simulation Time"))
		int64 m_SimTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime|Timer|Time", meta = (DisplayName = "SimulationTime (Hour)"))
		int32 m_Hour;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Runtime|Timer|Time", meta = (DisplayName = "SimulationTime (Min)"))
		int32 m_Min;
#pragma endregion

#pragma region Simulation Parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization|Simulation Params", meta = (DisplayName = "Consider Weather"))
		bool m_considerWeather;

	/* Total Walk Distance bool. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization|Simulation Params", meta = (DisplayName = "Consider TotalWalkDistance"))
		bool m_considerTWD;

	/* Total Walk Distance Max Value. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization|Simulation Params", meta = (DisplayName = "Maximum TotalWalkDistance", EditCondition = m_considerTWD))
		float m_maxTWD;
#pragma endregion

#pragma endregion


#pragma region Delegates

#pragma region Global Time Manager
	FTimerHandle TimeManager;
	FTimerDynamicDelegate TimerUpdateDelegate;
#pragma endregion

#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void TimerUpdate();


};