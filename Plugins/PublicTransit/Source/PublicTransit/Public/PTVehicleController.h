// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PTVehicleController.generated.h"

/**
 * 
 */
UCLASS()
class PUBLICTRANSIT_API APTVehicleController : public AAIController
{
	GENERATED_BODY()

public:
	
	void BeginPlay() override;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Vehicle", meta = (AllowPrivateAccess = true))
		class UBehaviorTree* m_behaviorTree;
	
};
