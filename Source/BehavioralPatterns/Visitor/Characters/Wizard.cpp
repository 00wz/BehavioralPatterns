// Fill out your copyright notice in the Description page of Project Settings.


#include "Wizard.h"

#include "BehavioralPatterns/Visitor/IVisitor.h"


// Sets default values
AWizard::AWizard()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWizard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWizard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AWizard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AWizard::Accept_Implementation(const TScriptInterface<IIVisitor>& visitor)
{
	visitor->VisitWizard(this);
}

