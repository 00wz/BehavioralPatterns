// Fill out your copyright notice in the Description page of Project Settings.


#include "Trap.h"

#include "BehavioralPatterns/Visitor/Characters/Elf.h"
#include "BehavioralPatterns/Visitor/Characters/Monster.h"
#include "BehavioralPatterns/Visitor/Characters/Wizard.h"

void UTrap::VisitElf(AElf* Elf)
{
	Elf->Say(FString(TEXT("Могу перепрыгнуть")));
}

void UTrap::VisitMonster(AMonster* Monster)
{
	Monster->Say(FString(TEXT("Ломаю")));
}

void UTrap::VisitWizard(AWizard* Wizard)
{
	Wizard->Say(FString(TEXT("Попадаюсь")));
}
