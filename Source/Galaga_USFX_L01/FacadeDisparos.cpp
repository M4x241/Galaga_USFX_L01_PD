// Fill out your copyright notice in the Description page of Project Settings.
#include "FacadeDisparos.h"
#include "BombaC.h"
#include "Foton.h"
#include "Laser.h"
#include "FacadeAdRecargar.h"

// Sets default values
AFacadeDisparos::AFacadeDisparos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeDisparos::BeginPlay()
{
	Super::BeginPlay();
	recargar = GetWorld()->SpawnActor<AFacadeAdRecargar>(AFacadeAdRecargar::StaticClass());
	/*FTimerHandle timeDisparo;
	GetWorldTimerManager().SetTimer(timeDisparo, this, &AFacadeDisparos::Launch, 2.0f, true, 0.0f);*/
}

void AFacadeDisparos::Launch()
{
	if (municion.Num() > 0)
	{
		municion[0]->SetActorLocation(FVector(0, 0, 200));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando"));

		/*if (municion[0]->IsA(ABombaC::StaticClass()))
		{
			bomba = Cast<ABombaC>(municion[0]);
		}
		else if (municion[0]->IsA(ALaser::StaticClass()))
		{
			laser = Cast<ALaser>(municion[0]);
		}
		else if (municion[0]->IsA(AFoton::StaticClass()))
		{
			foton = Cast<AFoton>(municion[0]);
		}*/
		municion.RemoveAt(0);
	}
	else {//si esta vacio el array, pide una recarga al otro facade
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay municion"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Recargando"));
		municion = recargar->recargarmuicion();
	}
}

// Called every frame
void AFacadeDisparos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

