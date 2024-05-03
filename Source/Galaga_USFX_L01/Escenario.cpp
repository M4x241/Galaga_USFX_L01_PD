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

	FVector posicion = FVector(-750, 1250, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(-750, -1250, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(-2000, 0, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(200, 600, 120);
	PosicionesMuros.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesMuros.Add(posicion);
	posicion = FVector(100, 0, 110);
	PosicionesMuros.Add(posicion);

	//escalas de los muros
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
void AEscenario::SetMuro()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildMuro1"));
	UWorld* World = GetWorld();
	if (World) {
		if (PosicionesMuros.Num() > 1 && scaleMuros.Num()>1) {
			FVector posicion = PosicionesMuros[0];
			FVector scale = scaleMuros[0];
			AMuro* Muro = World->SpawnActor<AMuro>(posicion, FRotator(0, 0, 0));
			Muro->SetActorRelativeScale3D(scale);
			PosicionesMuros.RemoveAt(0);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay posiciones de muros"));
		}
	}
}

void AEscenario::SetBombaTrampa()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildBombaTrampaescenario1"));
	//llamarse otra vez luego de 5 segundos, para spawenear otra bomba
	UWorld* World = GetWorld();
	if (World) {
		float x = rand() % 1500 - 1500;
		float y = rand() % 1100 - 550;
		FVector posicion = FVector(x, y, 300);
		ABomba* bomba = World->SpawnActor<ABomba>(posicion, FRotator(0, 0, 0));
		FTimerHandle  TimerHandle_ShotTimerExpired;
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEscenario::SetBombaTrampa, 3);
	}
}

void AEscenario::SetMurosMovedizos()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildMurosMovedizosescenario1"));
	UWorld* World = GetWorld();
	if (World) {
		if (PosicionesMurosMovedizos.Num() > 1) {
			FVector posicion = PosicionesMuros[0];
			FVector scale = scaleMuros[0];
			AMuro* Muro = World->SpawnActor<AMuro>(posicion, FRotator(0, 0, 0));
			Muro->SetActorRelativeScale3D(scale);
			PosicionesMuros.RemoveAt(0);
			Muro->moverarriba();
			Muro->colisionActiva(1);
		}
	}
}

void AEscenario::SetMuroPuas()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildMuroPuasescenario1"));
	UWorld* World = GetWorld();
	if (World) {
		if (PosicionesMurosMovedizos.Num() > 1) {
			FVector posicion = PosicionesMuros[0];
			FVector scale = scaleMuros[0];
			AMuro* Muro = World->SpawnActor<AMuro>(posicion, FRotator(0, 0, 0));
			Muro->SetActorRelativeScale3D(scale);
			PosicionesMuros.RemoveAt(0);
			Muro->moverarriba();
		}
	}
}

void AEscenario::SetPortales()//crear una variable para cambiar diferentes acciones entre las colisiones
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildPortalesescenario1"));
	UWorld* World = GetWorld();
	if (World) {
		if (PosicionesMurosMovedizos.Num() > 1) {
			FVector posicion = PosicionesMuros[0];
			FVector scale = scaleMuros[0];
			AMuro* Muro = World->SpawnActor<AMuro>(posicion, FRotator(0, 0, 0));
			Muro->SetActorScale3D(FVector(20, 20, 30));
			PosicionesMuros.RemoveAt(0);
			Muro->colisionActiva(2);
		}
	}
}

void AEscenario::SetItem()// usar el Abstract Factory para crear diferentes items
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildItemescenario1"));
}

void AEscenario::SetEscenario(UStaticMesh)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("TipoEscenarioescenario1"));
}

void AEscenario::SetSuelo()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BuildSueloescenario1"));
	UWorld* World = GetWorld();
	if (World) {
		FVector posicion = FVector(0,0,0);
		FVector scale = scaleMuros[0];
		AMuro* Muro = World->SpawnActor<AMuro>(posicion, FRotator(0, 0, 0));
		Muro->SetActorScale3D(FVector(1800,1800,10));
	}
	
}

void AEscenario::SetEscenario1()
{
	SetSuelo(); 
}

void AEscenario::SetEscenario2()
{
	SetMuro();
	SetMuro();
	SetItem();
}

void AEscenario::SetEscenario3()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escenario3"));
	SetMurosMovedizos();
	
	SetSuelo();
	//SetMuroPuas();
}

void AEscenario::SetEscenario4()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escenario4"));
	SetBombaTrampa();
	SetPortales();
}



