// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Propios/ceea0a44df21_e2b5692f52f8_CREA_UNA_NAVE_NODRI_fbx/e2b5692f52f8_CREA_UNA_NAVE_NODRI.e2b5692f52f8_CREA_UNA_NAVE_NODRI'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaReabastecimiento::Mover(float DeltaTime)
{
	/*speed = 1;
	SetActorLocation(FVector(GetActorLocation().X - speed, GetActorLocation().Y, GetActorLocation().Z));*/
}

void ANaveEnemigaReabastecimiento::Disparar()
{
}

void ANaveEnemigaReabastecimiento::Destruirse()
{
}

void ANaveEnemigaReabastecimiento::Escapar()
{
}
