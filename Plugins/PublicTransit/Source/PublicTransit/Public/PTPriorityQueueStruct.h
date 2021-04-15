// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "PTPriorityQueueStruct.generated.h"

/**
 * 
 */

class APTRoadNode;

USTRUCT(BlueprintType)
struct FNodeRecord
{
	GENERATED_USTRUCT_BODY()

		FNodeRecord()
	{

	}

	void Init(APTRoadNode* i_currentNode, float i_costSoFar, float i_estimatedTotalCost, APTRoadNode* i_parentNode = nullptr)
	{
		currentNode = i_currentNode;
		parentNode = i_parentNode;
		costSoFar = i_costSoFar;
		estimatedTotalCost = i_estimatedTotalCost;
	}

	UPROPERTY(BlueprintReadWrite)
		APTRoadNode* currentNode;
	UPROPERTY(BlueprintReadWrite)
		APTRoadNode* parentNode;
	UPROPERTY(BlueprintReadWrite)
		float costSoFar;
	UPROPERTY(BlueprintReadWrite)
		float estimatedTotalCost;

};

USTRUCT(BlueprintType)
struct FPriorityQueueNode
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		FNodeRecord Element;
	UPROPERTY(BlueprintReadWrite)
		float Priority;

	FPriorityQueueNode()
	{
	}

	FPriorityQueueNode(FNodeRecord InElement, float InPriority)
	{
		Element = InElement;
		Priority = InPriority;
	}

	bool operator<(const FPriorityQueueNode& Other) const
	{
		return Priority < Other.Priority;
	}
};

UCLASS()
class PUBLICTRANSIT_API UPTPriorityQueueStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
};
