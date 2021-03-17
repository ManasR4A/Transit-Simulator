// Fill out your copyright notice in the Description page of Project Settings.

#include "PTSimulationManager.h"
#include "TimerManager.h"

// Sets default values
APTSimulationManager::APTSimulationManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SimulationSpeed = 60;
	SimTime = 0;
	Hour = 0;
	m_Min = 0;
}

// Called when the game starts or when spawned
void APTSimulationManager::BeginPlay()
{
	Super::BeginPlay();
	TimerUpdateDelegate.BindUFunction(this, FName("TimerUpdate"));
	GetWorldTimerManager().SetTimer(TimeManager, TimerUpdateDelegate, 1.0f, true, 0.0f);
	GetWorldTimerManager().UnPauseTimer(TimeManager);
	UE_LOG(LogTemp, Warning, TEXT("PT| GlobalTimer Initialized!"));
}

// Called every frame
void APTSimulationManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APTSimulationManager::TimerUpdate()
{
	SimTime += SimulationSpeed;
	Hour = SimTime / 60;
	m_Min = SimTime % 60;
	UE_LOG(LogTemp, Warning, TEXT("PT| GlobalTimer Updated"));

}

