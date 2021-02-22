// Fill out your copyright notice in the Description page of Project Settings.

#include "PTRoad.h"

#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ActorComponent.h"

// Sets default values
APTRoad::APTRoad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	m_RoadSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Left Lane"));
	m_RoadSpline2 = CreateDefaultSubobject<USplineComponent>(TEXT("Right lane"));
	RootComponent = root;

}

// Called when the game starts or when spawned
void APTRoad::BeginPlay()
{
	Super::BeginPlay();

	auto s = m_RoadSpline->GetSplineLength();
	FString as = FString::FromInt(s);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(as));

	s = m_RoadSpline2->GetSplineLength();
	as = FString::FromInt(s);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(as));
	
}

// Called every frame
void APTRoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

