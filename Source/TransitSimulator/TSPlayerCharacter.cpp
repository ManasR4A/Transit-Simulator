// Fill out your copyright notice in the Description page of Project Settings.


#include "TSPlayerCharacter.h"

// Sets default values
ATSPlayerCharacter::ATSPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATSPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATSPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATSPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

