// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IElement.generated.h"

class IIVisitor;
// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UIElement : public UInterface
{
	GENERATED_BODY()
};

/**
 * defines the interface of the character visited by the object for interaction
 */
class BEHAVIORALPATTERNS_API IIElement
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Accept(const TScriptInterface<IIVisitor>& visitor);

	/*
	 * imitates class methods for interaction
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void Say(const FString& message);
};
