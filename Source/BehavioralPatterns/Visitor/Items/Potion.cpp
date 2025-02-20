// Fill out your copyright notice in the Description page of Project Settings.


#include "Potion.h"

#include "BehavioralPatterns/Visitor/Characters/Elf.h"
#include "BehavioralPatterns/Visitor/Characters/Monster.h"
#include "BehavioralPatterns/Visitor/Characters/Wizard.h"

void UPotion::VisitElf(AElf* Elf)
{
	Elf->Say(FString(TEXT("Собираю")));
}

void UPotion::VisitMonster(AMonster* Monster)
{
	Monster->Say(FString(TEXT("Не знаю, что с этим делать")));
}

void UPotion::VisitWizard(AWizard* Wizard)
{
	Wizard->Say(FString(TEXT("Готовлю зелье")));
}
