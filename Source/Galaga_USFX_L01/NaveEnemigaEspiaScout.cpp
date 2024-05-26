// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaScout.h"


void ANaveEnemigaEspiaScout::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	if (energia <= 0)
	{
		ObserverBoss->RemoveGuardian(this);
		Destroy();
	}
	moverseANodriza(DeltaTime);
}



void ANaveEnemigaEspiaScout::Mover(float DeltaTime)
{
	/*ANaveEnemigaEspia::Mover(DeltaTime);
	SetActorLocation(FVector(GetActorLocation().X + GetSpeed()+1, GetActorLocation().Y- GetSpeed(), GetActorLocation().Z));*/
}

void ANaveEnemigaEspiaScout::Escapar()
{
}

void ANaveEnemigaEspiaScout::UpdateAction()
{
	//llamar a la funcion de mover al boss
}

void ANaveEnemigaEspiaScout::setPublicador(AObserverBoss* _ObserverBoss)
{
	ObserverBoss = _ObserverBoss;
	ObserverBoss->AddGuardian(this);
}

void ANaveEnemigaEspiaScout::protegerNodriza(FVector _posicionNodriza)
{
	muevete = true;
	posicionNodriza = _posicionNodriza;
}

void ANaveEnemigaEspiaScout::moverseANodriza(float DeltaTime)
{
	if (muevete==true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Moviendose a Defender"));
		FVector direccion = posicionNodriza - GetActorLocation();
		direccion.Normalize();
		SetActorLocation(GetActorLocation() + direccion *800 * DeltaTime);
	}
}
