// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeAdRecargar.h"
#include "BombaC.h"
#include "Laser.h"
#include "Foton.h"

// Sets default values
AFacadeAdRecargar::AFacadeAdRecargar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeAdRecargar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacadeAdRecargar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<FString> AFacadeAdRecargar::recargarmuicion()
{
	for (int i = 0; i < 15; i++)
	{//se almacena en el array de manera aleatoria los 3 tipos de municion
		if (i % 4 == 0 || i == 0) {
			municionAleatoria = rand() % 1;
		}
		if (municionAleatoria==0) {
			municiones.Add("Bomba");
		}
		else if(municionAleatoria == 1){
			municiones.Add("Laser");
		}
		else if (municionAleatoria == 2) {
			municiones.Add("Foton"); 
			municiones.Add("Foton");
		}
	}
	return municiones; 
}

