// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "PTRequest.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum EPTBuildingType
{
	Residencial UMETA(DisplayName = "Residencial"), 
	Commercial UMETA(DisplayName = "Commercial"),
	Industrial UMETA(DisplayName = "Industrial"),
	Office UMETA(DisplayName = "Office")
};

USTRUCT(BlueprintType)
struct FPTRequest
{
	GENERATED_USTRUCT_BODY()
	
	FPTRequest()
	{

	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EPTBuildingType> SourceBuildingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EPTBuildingType> DestinationBuildingType;

};

USTRUCT(BlueprintType)
struct FPTRepeatingRequest
{
	GENERATED_USTRUCT_BODY()

	FPTRepeatingRequest()
	{

	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FPTRequest Request;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 StartHour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 StartMinute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 RepeatEveryXHour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 RepeatEveryYMinute;
	
};
