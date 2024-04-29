// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BConstructorEscenario.h"
#include "Stage1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AStage1 : public AActor, public IBConstructorEscenario
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStage1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BuildMuro() override;
	virtual void BuildBombaTrampa() override;
	virtual void BuildMurosMovedizos() override;
	virtual void BuildMuroPuas() override;
	virtual void BuildPortales() override;
	virtual void BuildItem() override;
	virtual void TipoEscenario(UStaticMesh) override;
	virtual void BuildSuelo() override;
};
