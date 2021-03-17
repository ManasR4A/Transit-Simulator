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
	RootComponent = root;

}

// Called when the game starts or when spawned
void APTRoad::BeginPlay()
{
	Super::BeginPlay();

	float s = m_RoadSpline->GetSplineLength();
	FString as = FString::FromInt(s);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *as);
	
}

// Called every frame
void APTRoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool APTRoad::GetNextPoint(int32 i_direction, int32 i_currentIndex, FTransform& o_nextTransform)
{
	int32 nextIndex = i_currentIndex;
	nextIndex = i_direction >= 0 ? nextIndex++ : nextIndex--;
	
	if (nextIndex >= this->m_RoadSpline->GetNumberOfSplinePoints() || nextIndex < 0)
		return false;

	o_nextTransform = this->m_RoadSpline->GetTransformAtSplinePoint(nextIndex, ESplineCoordinateSpace::World);
	return true;
}

//void APTRoad::PostEditChangeProperty(FPropertyChangedEvent& i_PropertyChanged)
//{
//	FString name = i_PropertyChanged.Property->GetFName().ToString();
//	UE_LOG(LogTemp, Warning, TEXT("%s"), *name);
//
//	Super::PostEditChangeProperty(i_PropertyChanged);
//}

