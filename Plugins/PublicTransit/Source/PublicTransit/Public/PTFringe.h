// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"

#include "Queue"


#include "PTFringe.generated.h"

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
class UPriorityQueue : public UActorComponent
{
public:
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TArray<FPriorityQueueNode> Array;

    UPriorityQueue()
    {
        Array.Heapify();
    }

    // Always check if IsEmpty() before Pop-ing!
    UFUNCTION(BlueprintCallable)
    FNodeRecord Pop()
    {
        FPriorityQueueNode Node;
        Array.HeapPop(Node);
        return Node.Element;
    }

    UFUNCTION(BlueprintCallable)
    FPriorityQueueNode PopNode()
    {
        FPriorityQueueNode Node;
        Array.HeapPop(Node);
        return Node;
    }

    UFUNCTION(BlueprintCallable)
    void Push(FNodeRecord Element, float Priority)
    {
        Array.HeapPush(FPriorityQueueNode(Element, Priority));
    }

    UFUNCTION(BlueprintCallable)
    bool IsEmpty() const
    {
        return Array.Num() == 0;
    }


};



