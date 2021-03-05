// Fill out your copyright notice in the Description page of Project Settings.


#include "PTVehicle.h"

// Sets default values
APTVehicle::APTVehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APTVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APTVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APTVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool APTVehicle::MoveToLocation(FVector i_DestLoc, bool i_bStop)
{
	return true;
}

