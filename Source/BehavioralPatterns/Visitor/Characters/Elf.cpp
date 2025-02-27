// Fill out your copyright notice in the Description page of Project Settings.


#include "Elf.h"

#include "BehavioralPatterns/Visitor/IVisitor.h"


// Sets default values
AElf::AElf()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AElf::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElf::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AElf::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AElf::Accept_Implementation(const TScriptInterface<IIVisitor>& visitor)
{
	visitor->VisitElf(this);
}

