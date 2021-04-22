// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "PTRoadManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FConnectionDelegate);

UCLASS()
class PUBLICTRANSIT_API APTRoadManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APTRoadManager();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintAssignable)
		FConnectionDelegate GetRoadNodes;

	UPROPERTY(BlueprintAssignable)
		FConnectionDelegate FinalizeConnection;



	UFUNCTION(BlueprintCallable)
	void UpdateConnectors();

	UFUNCTION(BlueprintCallable)
	void FinalizeConnections();



};
