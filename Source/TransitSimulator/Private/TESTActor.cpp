// Fill out your copyright notice in the Description page of Project Settings.


#include "TESTActor.h"

// Sets default values
ATESTActor::ATESTActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATESTActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATESTActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

