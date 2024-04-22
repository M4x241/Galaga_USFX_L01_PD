// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaCentral.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaCentral : public ANaveEnemigaEspia
{
	GENERATED_BODY()
public:
	int bandera = 1;
	FVector coordenadasNave;
public:
	FORCEINLINE FVector GetEncontrado() const { return coordenadasNave; }

	FORCEINLINE void SetEncontrado(FVector _coordenadasNave) { coordenadasNave = _coordenadasNave; }
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void Mover(float DeltaTime) override ;
	virtual void Escapar();
};
