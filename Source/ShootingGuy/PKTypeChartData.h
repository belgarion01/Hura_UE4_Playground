// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/DataTable.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct SHOOTINGGUY_API FPKTypeChartData : public FTableRowBase
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int NORMAL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FIGHTING;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FLYING;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int POISON;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int GROUND;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ROCK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int BUG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int GHOST;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int STEEL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FIRE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int WATER;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int GRASS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ELECTRIC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int PSYCHIC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ICE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int DRAGON;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int DARK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FAIRY;
};
