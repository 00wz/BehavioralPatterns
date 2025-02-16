// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IRunningState.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UIRunningState : public UInterface
{
	GENERATED_BODY()
};

class ARunningContextCharacter;

/**
 * defines the state interface
 */
class BEHAVIORALPATTERNS_API IIRunningState
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:	
	virtual void OnEnterState(ARunningContextCharacter* context);

	virtual void OnTick(float DeltaTime);

	virtual void OnAccelerationStart();

	virtual void OnAccelerationEnd();

protected:
	ARunningContextCharacter* m_context;
};
