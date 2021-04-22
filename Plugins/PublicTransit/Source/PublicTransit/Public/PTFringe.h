// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTPriorityQueueStruct.h"

#include "Queue"


#include "PTFringe.generated.h"

/**
 * 
 */

UCLASS()
class PUBLICTRANSIT_API APriorityQueue : public AActor
{
    GENERATED_BODY()

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;


public:


    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TArray<FPriorityQueueNode> Array;

    APriorityQueue()
    {
        PrimaryActorTick.bCanEverTick = true;
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



