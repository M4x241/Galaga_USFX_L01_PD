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
