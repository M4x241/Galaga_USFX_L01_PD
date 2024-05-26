// Fill out your copyright notice in the Description page of Project Settings.
#include "FacadeDisparos.h"
#include "BombaC.h"
#include "Foton.h"
#include "Laser.h"
#include "BMunicionLevel.h"
#include "FacadeAdRecargar.h"

// Sets default values
AFacadeDisparos::AFacadeDisparos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	dificultad = "Facil";
	municionLevel = nullptr;
}

// Called when the game starts or when spawned
void AFacadeDisparos::BeginPlay()
{
	Super::BeginPlay();
	recargar = GetWorld()->SpawnActor<AFacadeAdRecargar>(AFacadeAdRecargar::StaticClass());
}

/*void AFacadeDisparos::MejoraBomba(ABombaC* _bom)
{
	if (dificultad=="Facil") {
		
	}
	else if (dificultad == "Medio") {
		
	}
	else if (dificultad == "Dificil") {
		_bom->ActDetonador();
	}
}*/

void AFacadeDisparos::Recargar()
{
	int municionAleatoria=0;
	for (int i = 0; i < 15; i++)
	{//se almacena en el array de manera aleatoria los 3 tipos de municion
		if (i % 4 == 0 || i == 0) {
			municionAleatoria = rand() % 3;
		}
		if (municionAleatoria == 0) {
			municion.Add("Bomba");
		}
		else if (municionAleatoria == 1) {
			municion.Add("Laser");
		}
		else if (municionAleatoria == 2) {
			municion.Add("Foton");
			municion.Add("Foton");
		}
	}
}

void AFacadeDisparos::Launch(FVector posicionNave)
{

	if (municion.Num() > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando"));

		if (municion[0].Equals("Laser"))
		{
			laser=GetWorld()->SpawnActor<ALaser>(ALaser::StaticClass(), posicionNave + FVector(-300, 0, 0), FRotator::ZeroRotator);
			municionLevel= Cast<IBMunicionLevel>(laser);
		}
		else if (municion[0].Equals("Bomba"))
		{
			bomba = GetWorld()->SpawnActor<ABombaC>(ABombaC::StaticClass(), posicionNave + FVector(-500, 0, 0), FRotator::ZeroRotator);
			municionLevel = Cast<IBMunicionLevel>(bomba);
			

		}
		else if (municion[0].Equals("Foton"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Foton"));
			foton = GetWorld()->SpawnActor<AFoton>(AFoton::StaticClass(), posicionNave + FVector(-300, -200, 0), FRotator::ZeroRotator);
			foton->SetLevelMunicion(dificultad);
			if (municion.Num() > 1) {
				municion.RemoveAt(0);
				foton= GetWorld()->SpawnActor<AFoton>(AFoton::StaticClass(), posicionNave + FVector(-300, 200, 0), FRotator::ZeroRotator);
				foton->SetLevelMunicion(dificultad);
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MunicionInvalida"));
		}
		if (municionLevel) {
			municionLevel->SetLevelMunicion(dificultad);
		}

		municion.RemoveAt(0);
	}
	else {//si esta vacio el array, pide una recarga al otro facade
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay municion"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Recargando"));
		//municion = recargar->recargarmuicion();

		Recargar();
	}
}

// Called every frame
void AFacadeDisparos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

