// Fill out your copyright notice in the Description page of Project Settings.

#include "Torreta.h"
#include "Galaga_USFX_L01Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "NaveEnemiga.h"

// Sets default values
ATorreta::ATorreta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//crear el mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Propios/cannon/a26903cb5d2a_crea_un_canon_tecno.a26903cb5d2a_crea_un_canon_tecno'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Propios/cannon/a26903cb5d2a_crea_un_canon_tecno.a26903cb5d2a_crea_un_canon_tecno'"));
	Mesh->SetStaticMesh(ShipMesh.Object);
	Mesh->SetupAttachment(RootComponent);
	RootComponent = Mesh;

}

void ATorreta::disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("¡Disparo!"));

}

void ATorreta::FireShot()
{
	// If it's ok to fire again
	FVector FireDirection = FVector(-1.f, 0.f, 0.f);
	if (FireDirection.SizeSquared() > 0.0f)
	{
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("¡cuidado!"));
			World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation + FVector(-1000,50,100), FireRotation);
		}

		FTimerHandle  TimerHandle_ShotTimerExpired;
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ATorreta::FireShot, 3.0f);
	}
		
		
}

// Called when the game starts or when spawned
void ATorreta::BeginPlay()
{
	Super::BeginPlay();
	FireShot();
	
}

// Called every frame
void ATorreta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

