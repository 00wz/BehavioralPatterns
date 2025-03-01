// Fill out your copyright notice in the Description page of Project Settings.


#include "SubjectCharacter.h"


// Sets default values
ASubjectCharacter::ASubjectCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASubjectCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASubjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ASubjectCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ASubjectCharacter::Subscribe_Implementation(const TScriptInterface<IObserver>& Observer)
{
	Subscribers.AddUnique(Observer);
}

void ASubjectCharacter::Unsubscribe_Implementation(const TScriptInterface<IObserver>& Observer)
{
	Subscribers.Remove(Observer);
}

void ASubjectCharacter::Notify_Implementation(const FString& Message)
{
	for (auto Sub : Subscribers)
	{
		Sub->Execute_Update(Sub.GetObject(), Message);
	}
}

