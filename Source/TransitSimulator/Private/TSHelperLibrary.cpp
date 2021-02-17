// Fill out your copyright notice in the Description page of Project Settings.


#include "TSHelperLibrary.h"

void UTSHelperLibrary::DebugPrintLog(FString i_string, bool bIsError)
{
	if (bIsError)
	{
		UE_LOG(LogTemp, Error, TEXT("%s"), *i_string);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *i_string);
	}
}