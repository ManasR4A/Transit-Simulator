// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UserController.generated.h"

class UCameraComponent;
class UFloatingPawnMovement;
class UStaticMeshComponent;
class USpringArmComponent;

UCLASS()
class TRANSITSIMULATOR_API AUserController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUserController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
		UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, Category = "Components")
		UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Components")
		USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "Components")
		UFloatingPawnMovement* MovementController;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
