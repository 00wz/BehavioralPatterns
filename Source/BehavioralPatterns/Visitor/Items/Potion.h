// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehavioralPatterns/Visitor/IVisitor.h"
#include "UObject/Object.h"
#include "Potion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BEHAVIORALPATTERNS_API UPotion : public UObject, public IIVisitor
{
	GENERATED_BODY()

public:
	virtual void VisitElf(AElf* Elf) override;

	virtual void VisitMonster(AMonster* Monster) override;

	virtual void VisitWizard(AWizard* Wizard) override;
};
