// Fill out your copyright notice in the Description page of Project Settings.

#include "PTSimulationManager.h"
#include "TimerManager.h"

// Sets default values
APTSimulationManager::APTSimulationManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_SimulationSpeed = 60;
	m_SimTime = 0;
	m_Hour = 0;
	m_Min = 0;
	m_considerWeather = false;
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
	m_SimTime += m_SimulationSpeed;
	m_Hour = m_SimTime / 60;
	m_Min = m_SimTime % 60;
	UE_LOG(LogTemp, Warning, TEXT("PT| GlobalTimer Updated"));

	OnTimeUpdate.Broadcast();
}

void APTSimulationManager::RecieveBroadcast(FPTRepeatingRequest i_repReq)
{
	handleRepeatingRequests.Broadcast(i_repReq);
}

void APTSimulationManager::InitializeRepeatingInput(int32 repeatingTime)
{
}

