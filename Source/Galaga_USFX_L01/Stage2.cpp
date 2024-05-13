// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage2.h"

// Sets default values
AStage2::AStage2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStage2::BeginPlay()
{
	Super::BeginPlay();
	Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass());
	Escenario->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

	FVector posicion = FVector(0, 0, 0);

	posicion = FVector(-1400, -1500, 210);
	Ubicaciones.Add(posicion);
	posicion = FVector(-1400, 1450, 210);
	Ubicaciones.Add(posicion);
	posicion = FVector(450, 50, 210);
	Ubicaciones.Add(posicion);
	//inicia elementos level2
	posicion = FVector(-1700, 50, 210);//torreta
	Ubicaciones.Add(posicion);
	posicion = FVector(-250, -4300, 210);//torreta
	Ubicaciones.Add(posicion);
	posicion = FVector(1300, -4300, 210);//muro
	Ubicaciones.Add(posicion);
	posicion = FVector(5800, -6400, 210);//cannon
	Ubicaciones.Add(posicion);
	posicion = FVector(2650, -2650, 210);//portal
	Ubicaciones.Add(posicion);
	posicion = FVector(5800, -2700, 210);
	Ubicaciones.Add(posicion);
	posicion = FVector(5700, 3000, 210);//cannon
	Ubicaciones.Add(posicion);
	posicion = FVector(5700, 5500, 210);//cannon
	Ubicaciones.Add(posicion);
	posicion = FVector(-250, 4300, 210);//cannon
	Ubicaciones.Add(posicion);
	posicion = FVector(5800, -4450, 210);//muro
	Ubicaciones.Add(posicion);
	posicion = FVector(200, 4350, 210);
	Ubicaciones.Add(posicion);
	posicion = FVector(2000, 4300, 210);
	Ubicaciones.Add(posicion);
	posicion = FVector(0, 0, 0);
	Ubicaciones.Add(posicion);

	
}

// Called every frame
void AStage2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AStage2::getBomba()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Bomba"));
	float x = rand() % 1500 - 1500;
	float y = rand() % 1100 - 550;
	FVector posicion = FVector(x, y, 300);
	bomba = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), posicion, FRotator(0, 0, 0));
	bomba->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	FTimerHandle  TimerHandle_ShotTimerExpired;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AStage2::getBomba, 3, false);

}

AMuro* AStage2::getMuro()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Muro"));
	muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), Ubicaciones[0], FRotator(0, 0, 0));
	muro->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	muro->SetActorScale3D(FVector(80, 80, 30));
	Ubicaciones.RemoveAt(0);
	return muro;
}

AMuro* AStage2::getMunicion()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Municion"));
	muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass());
	muro->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Ubicaciones.RemoveAt(0);
	return muro;
	//aun no se ha creado la clase municion
	/*municion = GetWorld()->SpawnActor<AmunicionV2>(AmunicionV2::StaticClass());
	municion->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	return municion;*/
}

APortal* AStage2::getPortal()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Portal"));
	portal = GetWorld()->SpawnActor<APortal>(APortal::StaticClass(), Ubicaciones[0], FRotator(0, 0, 0));
	portal->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	portal->SetActorRotation(FRotator(0, 90, 0));
	portal->SetActorRelativeScale3D(FVector(10, 10, 10));
	Ubicaciones.RemoveAt(0);
	return portal;
}

APuas* AStage2::getPuas()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Puas"));
	puas = GetWorld()->SpawnActor<APuas>(APuas::StaticClass(), Ubicaciones[0], FRotator(0, 0, 0));
	puas->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	puas->SetActorRelativeScale3D(FVector(10, 10, 10));
	Ubicaciones.RemoveAt(0);
	return puas;
}

ATorreta* AStage2::getTorreta()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Torreta"));
	torreta = GetWorld()->SpawnActor<ATorreta>(ATorreta::StaticClass(), Ubicaciones[0], FRotator(0, 0, 0));
	torreta->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	torreta->SetActorRelativeScale3D(FVector(5, 5, 5));
	torreta->SetActorRotation(FRotator(0, -90, 0));
	Ubicaciones.RemoveAt(0);
	return torreta;
}

void AStage2::BuildEscenario1()
{//basico
	Escenario->AgregarElemento(getMuro());
	Escenario->AgregarElemento(getMuro());
	Escenario->AgregarElemento(getPuas());
	getBomba();
}

void AStage2::BuildEscenario2()
{//medio
	Escenario->AgregarElemento(getPortal());
	Escenario->AgregarElemento(getPuas());//muro
	Escenario->AgregarElemento(getMuro());
	Escenario->AgregarElemento(getTorreta());
	Escenario->AgregarElemento(getMunicion());
	Escenario->AgregarElemento(getTorreta());//torreta
}

void AStage2::BuildEscenario3()
{//dificil
}

void AStage2::BuildEscenario4()
{//complejo
}


