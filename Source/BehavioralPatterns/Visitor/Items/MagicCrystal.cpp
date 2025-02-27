// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCrystal.h"

#include "BehavioralPatterns/Visitor/Characters/Elf.h"
#include "BehavioralPatterns/Visitor/Characters/Monster.h"
#include "BehavioralPatterns/Visitor/Characters/Wizard.h"

void UMagicCrystal::VisitElf(AElf* Elf)
{
	Elf->Execute_Say(Elf,FString(TEXT("Использую для усиления способностей")));;
}

void UMagicCrystal::VisitMonster(AMonster* Monster)
{
	Monster->Execute_Say(Monster, FString(TEXT("Краду")));
}

void UMagicCrystal::VisitWizard(AWizard* Wizard)
{
	Wizard->Execute_Say(Wizard, FString(TEXT("Активирую")));
}
