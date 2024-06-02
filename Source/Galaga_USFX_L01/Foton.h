// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BMunicionLevel.h"
#include "Foton.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFoton : public AActor, public IBMunicionLevel
{
	GENERATED_BODY()
	UStaticMeshComponent* fotonmalla;
	
public:	
	// Sets default values for this actor's properties
	AFoton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void TipoFoton();
	void Rotar(float Deltatime);
	void zigzag(float DeltaTime);
	int GetVelocidad(){return velocidad;}
	void setVelocidad(int vel){velocidad = vel;}
	void zigzagVertical(float DeltaTime);
	virtual void SetLevelMunicion(FString dif) override;
	//getters
	bool getZigActivo(){return ZigActivo;}
	bool getZigActivoVertical(){return ZigActivoVertical;}
	float getDamage(){return damage;}
	//setters
	void setZigActivo(bool zig){ZigActivo = zig;}
	void setZigActivoVertical(bool zig){ZigActivoVertical = zig;}
	void setDamage(float dam){damage = dam;}

private:
	int velocidad = 800;
	float damage = 20;
	bool ZigActivo;
	bool ZigActivoVertical = false;
	int ID = 1;
	FVector posIn;
};
