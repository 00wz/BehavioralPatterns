// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehavioralPatterns/BehavioralPatternsCharacter.h"
#include "BehavioralPatterns/Visitor/IElement.h"
#include "Elf.generated.h"

UCLASS(Abstract)
class BEHAVIORALPATTERNS_API AElf : public ABehavioralPatternsCharacter, public IIElement
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AElf();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Accept_Implementation(const TScriptInterface<IIVisitor>& visitor) override;
};
