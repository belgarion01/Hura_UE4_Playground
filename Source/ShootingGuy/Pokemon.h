// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "PokemonData.h"

/**
 * 
 */
class SHOOTINGGUY_API Pokemon
{
public:
	Pokemon(UPokemonData* PokemonData);
	~Pokemon();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UPokemonData* PokemonData;
};
