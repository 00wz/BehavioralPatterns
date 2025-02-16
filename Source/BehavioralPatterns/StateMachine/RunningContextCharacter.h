// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRunningState.h"
#include "BehavioralPatterns/ThirdPersonCharacter.h"
#include "RunningContextCharacter.generated.h"

/*
 * a character that takes on different states depending on fatigue
 */
UCLASS()
class BEHAVIORALPATTERNS_API ARunningContextCharacter : public AThirdPersonCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARunningContextCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY()
	TScriptInterface<IIRunningState> CurrentState;

	UPROPERTY(BlueprintReadOnly)
	float MaxEnergy = 5.f;
	UPROPERTY(BlueprintReadOnly)
	float Energy = MaxEnergy;

private:
	void StartAcceleration();

	void StopAcceleration();
};
