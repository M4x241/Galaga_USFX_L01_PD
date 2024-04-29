// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaMxCorporation.h"
#include "FabricaEnemiga.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AFabricaEnemiga : public AFabricaMxCorporation
{
	GENERATED_BODY()
public:
	virtual ANaveEnemiga* EnsambladoNave(int naveOrdenada)override; 
};
