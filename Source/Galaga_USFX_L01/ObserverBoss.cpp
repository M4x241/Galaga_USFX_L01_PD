// Fill out your copyright notice in the Description page of Project Settings.


#include "ObserverBoss.h"

// Sets default values
AObserverBoss::AObserverBoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObserverBoss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObserverBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (NodrizaObservada)
	{
		if (NodrizaObservada->GetEnergia() <= 30) {
			NotifyGuardians();
		}
	}
}

void AObserverBoss::AddGuardian(IINavesGuardianas* guardian)
{
	Guardianes.Add(guardian);
}

void AObserverBoss::RemoveGuardian(IINavesGuardianas* guardian)
{
	Guardianes.Remove(guardian);
}

void AObserverBoss::NotifyGuardians()
{
	for (IINavesGuardianas* guardian : Guardianes)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Notificando a guardianes"));
		//guardian->EscoltarBoss();
	}
}

void AObserverBoss::ObservarANodriza(ANaveEnemigaNodriza* _NodrizaObservada)
{
	NodrizaObservada = _NodrizaObservada;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Nodriza observada"));

}

