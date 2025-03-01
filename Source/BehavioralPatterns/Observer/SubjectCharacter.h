// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subject.h"
#include "BehavioralPatterns/BehavioralPatternsCharacter.h"
#include "SubjectCharacter.generated.h"

UCLASS()
class BEHAVIORALPATTERNS_API ASubjectCharacter : public ABehavioralPatternsCharacter, public ISubject
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASubjectCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Subscribe_Implementation(const TScriptInterface<IObserver>& Observer) override;

	virtual void Unsubscribe_Implementation(const TScriptInterface<IObserver>& Observer) override;

	virtual void Notify_Implementation(const FString& Message) override;

private:
	TArray<TScriptInterface<IObserver>> Subscribers;
};
