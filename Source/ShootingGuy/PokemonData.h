// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PokemonData.generated.h"

/**
 * 
 */

UCLASS()
class SHOOTINGGUY_API UPokemonData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	int ID;
	FText Name;
	FText Description;
	// Type
	// Sprite
	// 3D Model
};
