// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCrystal.h"

#include "BehavioralPatterns/Visitor/Characters/Elf.h"
#include "BehavioralPatterns/Visitor/Characters/Monster.h"
#include "BehavioralPatterns/Visitor/Characters/Wizard.h"

void UMagicCrystal::VisitElf(AElf* Elf)
{
	Elf->Say(FString(TEXT("Использую для усиления способностей")));
}

void UMagicCrystal::VisitMonster(AMonster* Monster)
{
	Monster->Say(FString(TEXT("Краду")));
}

void UMagicCrystal::VisitWizard(AWizard* Wizard)
{
	Wizard->Say(FString(TEXT("Активирую")));
}
