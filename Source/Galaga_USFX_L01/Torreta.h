// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Torreta.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ATorreta : public AActor
{
	GENERATED_BODY()
	UStaticMeshComponent* Mesh;
private:
	FVector GunOffset;
public:	
	// Sets default values for this actor's properties
	ATorreta();
	void disparar();
	void FireShot();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
