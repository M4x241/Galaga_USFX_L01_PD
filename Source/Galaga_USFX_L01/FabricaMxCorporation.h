// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FabricaMxCorporation.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFabricaMxCorporation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaMxCorporation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual ANaveEnemiga* EnsambladoNave(FString naveOrdenada) PURE_VIRTUAL(AFabricaMxCorporation::EnsambladoNave, return nullptr;);
	ANaveEnemiga* naveVendida;
	//FstringCagegory??????????????

};
