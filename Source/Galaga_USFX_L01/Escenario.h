// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.h"
#include "Torreta.h"
#include "Portal.h"
#include "mucionV2.h"
#include "Puas.h"
#include "Bomba.h"
#include "Escenario.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEscenario : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AEscenario();
private:
	TArray<AActor*> Elementos;
	//ya no sera neceario estos otros atributos
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE void BorrarElementos() { Elementos.Empty(); }
	FORCEINLINE void AgregarElemento(AActor *elemento) { Elementos.Add(elemento); }
};
