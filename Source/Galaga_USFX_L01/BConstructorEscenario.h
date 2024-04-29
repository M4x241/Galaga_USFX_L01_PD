// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BConstructorEscenario.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBConstructorEscenario : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IBConstructorEscenario
{
	GENERATED_BODY()
	 
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildMuro() = 0;
	virtual void BuildBombaTrampa() = 0;
	virtual void BuildMurosMovedizos() = 0;
	virtual void BuildMuroPuas() = 0;
	virtual void BuildPortales() = 0;
	virtual void BuildItem() = 0;
	virtual void TipoEscenario(UStaticMesh) = 0;
	virtual void BuildSuelo() = 0;
};
