// Fill out your copyright notice in the Description page of Project Settings.


#include "PTRoadManager.h"
#include "PTRoadNode.h"

// Sets default values
APTRoadManager::APTRoadManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void APTRoadManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APTRoadManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TSet<int, int> asd;
}

void APTRoadManager::UpdateConnectors()
{
	GetRoadNodes.Broadcast();
}

void APTRoadManager::FinalizeConnections()
{
	FinalizeConnection.Broadcast();
}


