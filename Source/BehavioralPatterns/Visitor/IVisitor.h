// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IVisitor.generated.h"

class AMonster;
class AElf;
class AWizard;
// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UIVisitor : public UInterface
{
	GENERATED_BODY()
};

/**
 * defines the interface of an object for interacting with different characters
 */
class BEHAVIORALPATTERNS_API IIVisitor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void VisitWizard(AWizard* Wizard);

	virtual void VisitElf(AElf* Elf);

	virtual void VisitMonster(AMonster* Monster);
};
