// Fill out your copyright notice in the Description page of Project Settings.

#include "LiderEscuadron.h"
#include "IEstrategiasScuadras.h"

// Sets default values
ALiderEscuadron::ALiderEscuadron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALiderEscuadron::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALiderEscuadron::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALiderEscuadron::setFormacion(AActor* nuevaEstrategia)
{
	estrategia = Cast<IIEstrategiasScuadras>(nuevaEstrategia);
	if(!estrategia){
		UE_LOG(LogTemp, Warning, TEXT("No se pudo castear la estrategia"));
	}

}

void ALiderEscuadron::FormarEscuadron(TArray<ANaveEnemiga*> escuadra)
{
	if(estrategia){
		estrategia->AplicarFormacion(escuadra);
	}
	else{
		UE_LOG(LogTemp, Warning, TEXT("No se ha asignado una estrategia"));
	}
}

