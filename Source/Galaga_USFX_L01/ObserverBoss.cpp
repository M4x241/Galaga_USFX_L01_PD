// Fill out your copyright notice in the Description page of Project Settings.


#include "ObserverBoss.h"
#include "NaveEnemigaEspiaScout.h"

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
		if (NodrizaObservada->GetEnergia() <= 30 && OneNotifit) {
			NotifyGuardians();
			OneNotifit = false;
		}
		else if(NodrizaObservada->GetEnergia() > 30){
			OneNotifit = true;
		}
	}
}

void AObserverBoss::AddGuardian(IINavesGuardianas* guardian)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Guardian agregado"));
	Guardianes.Add(guardian);
}

void AObserverBoss::RemoveGuardian(IINavesGuardianas* guardian)
{
	Guardianes.Remove(guardian);
}

void AObserverBoss::NotifyGuardians()
{
	int count = -500;
	for (IINavesGuardianas* guardian : Guardianes)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Notificando a guardianes"));
		AActor *Nodriza = Cast<AActor>(NodrizaObservada); 
		FVector posNodriza = Nodriza->GetActorLocation();
		//mostrar la posNodriza en mensaje en pantalla
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, posNodriza.ToString());
		posNodriza.Y += count;
		posNodriza.X -= 400;
		count += 200;
		guardian->protegerNodriza(posNodriza);
	}
}

void AObserverBoss::ObservarANodriza(ANaveEnemigaNodriza* _NodrizaObservada)
{
	NodrizaObservada = _NodrizaObservada;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Nodriza observada"));

}