// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaC.h"

// Sets default values
ABombaC::ABombaC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombaC::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABombaC::TipoBomba()
{
}

void ABombaC::RadioExplosion()
{
}

void ABombaC::Movimiento()
{
}

// Called every frame
void ABombaC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

