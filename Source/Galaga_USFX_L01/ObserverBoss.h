// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "INavesGuardianas.h"
#include "NaveEnemigaNodriza.h"
#include "ObserverBoss.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AObserverBoss : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObserverBoss();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	TArray<IINavesGuardianas*> Guardianes;
	ANaveEnemigaNodriza* NodrizaObservada;
public:
	virtual void AddGuardian(IINavesGuardianas* guardian);
	virtual void RemoveGuardian(IINavesGuardianas* guardian); 
	virtual void NotifyGuardians();
	virtual void ObservarANodriza(ANaveEnemigaNodriza* _NodrizaObservada);

};
