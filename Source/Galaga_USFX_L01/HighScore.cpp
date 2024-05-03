// Fill out your copyright notice in the Description page of Project Settings.


#include "HighScore.h"

// Sets default values
AHighScore::AHighScore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//posiciones de los muros
	FVector posicion = FVector(-750, 1250, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(-750, -1250, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(-2000, 0, 120);
	PosicionesMuros.Add(posicion);
	posicion = FVector(-2000, 0, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesMuros.Add(posicion);
	//444444444444444444444444444444444444
	posicion = FVector(200, 100, 20);
	scaleMuros.Add(posicion);
	posicion = FVector(200, 200, 20);
	scaleMuros.Add(posicion);
	posicion = FVector(200, 200, 20);
	scaleMuros.Add(posicion);
	posicion = FVector(100, 200, 110);
	scaleMuros.Add(posicion);
	posicion = FVector(100, 200, 110);
	scaleMuros.Add(posicion);
	posicion = FVector(100, 200, 110);
	scaleMuros.Add(posicion);

	//PosicionesMurosMovedizos = PosicionesMuros;
	posicion = FVector(100, 1700, 110);
	PosicionesMurosMovedizos.Add(posicion);
	posicion = FVector(200, -1700, 110);
	PosicionesMurosMovedizos.Add(posicion);
	posicion = FVector(200, 0, 110);
	PosicionesMurosMovedizos.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesMurosMovedizos.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesMurosMovedizos.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesMurosMovedizos.Add(posicion);

	//posiciones de las bombas trampa
	posicion = FVector(0, 0, 110);
	PosicionesBombasTrampas.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesBombasTrampas.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesBombasTrampas.Add(posicion);

}

// Called when the game starts or when spawned
void AHighScore::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHighScore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

