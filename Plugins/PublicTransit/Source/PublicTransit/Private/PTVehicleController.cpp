// Fill out your copyright notice in the Description page of Project Settings.

#include "PTVehicleController.h"
#include "BehaviorTree/BehaviorTree.h"


void APTVehicleController::BeginPlay()
{
	this->RunBehaviorTree(m_behaviorTree);
}


