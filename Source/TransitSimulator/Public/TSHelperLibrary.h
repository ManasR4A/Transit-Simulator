// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TSHelperLibrary.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum EBuildingType
{
	LowRes, HighRes,
	LowComm, HighComm,
	Industry, Office, NoBuild
};

UENUM(BlueprintType)
enum EGridTileType
{
	Road, Intersection,
	Spawnable, NoType
};

UCLASS()
class TRANSITSIMULATOR_API UTSHelperLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static void DebugPrintLog(FString i_string, bool bIsError = false);


};
