// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario.h"
#include "Muro.h"
#include "mucionV2.h"
#include "Engine/EngineTypes.h"
#include "Bomba.h"

// Sets default values
AEscenario::AEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




