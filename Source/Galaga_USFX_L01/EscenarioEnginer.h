// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BConstructorEscenario.h"
#include "EscenarioEnginer.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEscenarioEnginer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenarioEnginer();
private:
	IBConstructorEscenario* ConstructorEscenario;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void setConstructorEscenario(AActor* _constructor);
	void construirEscenario();
	void Escenario1();
	void Escenario2();
	void Escenario3();
};
