// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PTVehicle.generated.h"

UCLASS()
class PUBLICTRANSIT_API APTVehicle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APTVehicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool MoveToLocation(FVector i_DestLoc, bool i_bStop = true);

};
