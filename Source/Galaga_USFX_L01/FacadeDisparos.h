// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeDisparos.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFacadeDisparos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeDisparos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	TArray<FString> municion;
	class ABombaC* bomba;
	class ALaser* laser;
	class AFoton* foton;
	class AFacadeAdRecargar* recargar;
	class IBMunicionLevel* municionLevel;
	FString dificultad;
	void Recargar();
public:
	void Launch(FVector posicionNave);
	void SetDificultad(FString dif) { dificultad = dif; }
private:
	void modificarMunicion();
	void Facil();
	void Medio();
	void Dificil();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
