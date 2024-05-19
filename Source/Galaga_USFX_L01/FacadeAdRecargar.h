// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeAdRecargar.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFacadeAdRecargar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeAdRecargar();
private:
	TArray<AActor*> municiones;
	int municionAleatoria;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE TArray<AActor*> recargarmuicion();
};
