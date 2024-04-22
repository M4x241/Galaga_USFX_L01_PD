// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaMadre.h"
#include <time.h>
#include "Kismet/GameplayStatics.h"
using namespace std;

void ANaveEnemigaNodrizaMadre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Destruirse();
}

ANaveEnemigaNodrizaMadre::ANaveEnemigaNodrizaMadre()
{
	//
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Propios/5f83094e5998_c0105e583351_CREA_UNA_NAVE_NODRI_fbx/c0105e583351_CREA_UNA_NAVE_NODRI.c0105e583351_CREA_UNA_NAVE_NODRI'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaNodrizaMadre::Mover(float DeltaTime)
{
	/*ANaveEnemigaNodriza::Mover(DeltaTime);
	if (ban) {
		posicionale= rand() % 1600;
		ban = false;
	}
	
	else {
		if (posicionale>GetActorLocation().X) {
			SetActorLocation(FVector(GetActorLocation().X+1, GetActorLocation().Y, GetActorLocation().Z)); 
		}
		else if(posicionale < GetActorLocation().X){
			SetActorLocation(FVector(GetActorLocation().X-1, GetActorLocation().Y, GetActorLocation().Z));
		}
		else {
			ban = true;
		}
	}*/
}

void ANaveEnemigaNodrizaMadre::Disparar()
{
}

void ANaveEnemigaNodrizaMadre::Destruirse()
{
	/*if (GetActorLocation().X-NaveAliada->GetPosicionNave().X<10) {
		Destroy();
	}*/
}
