// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APuas : public AActor
{
	GENERATED_BODY()
	UStaticMeshComponent* Mesh;
	
public:	
	// Sets default values for this actor's properties
	APuas();
private:
	FVector inicio= FVector (0,0,0);
	int Right = 1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
