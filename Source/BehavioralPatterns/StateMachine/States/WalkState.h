// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehavioralPatterns/StateMachine/IRunningState.h"
#include "UObject/Object.h"
#include "WalkState.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORALPATTERNS_API UWalkState : public UObject, public IIRunningState
{
	GENERATED_BODY()
public:
	virtual void OnEnterState(ARunningContextCharacter* context) override;

	virtual void OnTick(float DeltaTime) override;
};
