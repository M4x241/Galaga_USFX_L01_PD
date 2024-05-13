// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Propios/portal/8e8db920834b_crea_un_portal__3d_.8e8db920834b_crea_un_portal__3d_'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Propios/portal/8e8db920834b_crea_un_portal__3d_.8e8db920834b_crea_un_portal__3d_'"));
	Mesh->SetStaticMesh(ShipMesh.Object);
	Mesh->SetupAttachment(RootComponent);
	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

