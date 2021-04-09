// Fill out your copyright notice in the Description page of Project Settings.


#include "PTRoadNode.h"

// Sets default values
APTRoadNode::APTRoadNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APTRoadNode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APTRoadNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

