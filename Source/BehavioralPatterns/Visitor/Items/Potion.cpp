// Fill out your copyright notice in the Description page of Project Settings.


#include "Potion.h"

#include "BehavioralPatterns/Visitor/Characters/Elf.h"
#include "BehavioralPatterns/Visitor/Characters/Monster.h"
#include "BehavioralPatterns/Visitor/Characters/Wizard.h"

void UPotion::VisitElf(AElf* Elf)
{
	Elf->Execute_Say(Elf,FString(TEXT("Собираю")));
}

void UPotion::VisitMonster(AMonster* Monster)
{
	Monster->Execute_Say(Monster,FString(TEXT("Не знаю, что с этим делать")));
}

void UPotion::VisitWizard(AWizard* Wizard)
{
	Wizard->Execute_Say(Wizard, FString(TEXT("Готовлю зелье")));
}
