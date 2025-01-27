// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseState.generated.h"

/**
 * 
 */
UCLASS()
class AIBEHAVIOR_API UBaseState : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "State")
	virtual void Update(AAIEnemy* character, const float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "State")
	virtual void OnEnter(AAIEnemy* character);

	UFUNCTION(BlueprintCallable, Category = "State")
	virtual void OnExit(AAIEnemy* character);
};
