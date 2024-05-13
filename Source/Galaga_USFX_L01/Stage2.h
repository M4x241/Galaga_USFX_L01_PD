// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BConstructorEscenario.h"
#include "Escenario.h"
#include "Muro.h"
#include "Torreta.h"
#include "Portal.h"
#include "mucionV2.h"
#include "Puas.h"
#include "Bomba.h"
#include "Stage2.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AStage2 : public AActor, public IBConstructorEscenario
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStage2();
private:
	class AEscenario* Escenario; //variable de la clase
	//elementos posibles del escenario
	TArray<FVector> Ubicaciones;
	AMuro* muro;
	ATorreta* torreta;
	APortal* portal;
	AmucionV2* municion;
	APuas* puas;
	ABomba* bomba;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	FORCEINLINE void getBomba();
	FORCEINLINE AMuro* getMuro();
	FORCEINLINE AMuro* getMunicion();
	FORCEINLINE APortal* getPortal();
	FORCEINLINE ATorreta* getTorreta();
	FORCEINLINE APuas* getPuas();


	virtual void BuildEscenario1() override;
	virtual void BuildEscenario2() override;
	virtual void BuildEscenario3() override;
	virtual void BuildEscenario4() override;

};
