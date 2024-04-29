// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BombaTrampa.h"
#include "Muro.h"
#include "BEstructuraEscenario.generated.h"

// This class does not need to be modified.////  AQUI SOLO SE OBTIENE LOS NOMBRES
UINTERFACE(MinimalAPI)
class UBEstructuraEscenario : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IBEstructuraEscenario
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void CrearMuro() = 0;
	virtual void CrearBombaTrampa() = 0;
};
