// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehavioralPatterns/Visitor/IVisitor.h"
#include "UObject/Object.h"
#include "Trap.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORALPATTERNS_API UTrap : public UObject, public IIVisitor
{
	GENERATED_BODY()

public:

	virtual void VisitElf(AElf* Elf) override;

	virtual void VisitMonster(AMonster* Monster) override;

	virtual void VisitWizard(AWizard* Wizard) override;
};
