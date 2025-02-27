// Fill out your copyright notice in the Description page of Project Settings.


#include "Trap.h"

#include "BehavioralPatterns/Visitor/Characters/Elf.h"
#include "BehavioralPatterns/Visitor/Characters/Monster.h"
#include "BehavioralPatterns/Visitor/Characters/Wizard.h"

void UTrap::VisitElf(AElf* Elf)
{
	Elf->Execute_Say(Elf, FString(TEXT("Могу перепрыгнуть")));
}

void UTrap::VisitMonster(AMonster* Monster)
{
	Monster->Execute_Say(Monster, FString(TEXT("Ломаю")));
}

void UTrap::VisitWizard(AWizard* Wizard)
{
	Wizard->Execute_Say(Wizard, FString(TEXT("Попадаюсь")));
}
