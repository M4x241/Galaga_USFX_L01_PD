// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GeneradorNaves.h"
#include "Galaga_USFX_L01GameMode.generated.h"


//============INPOORTAMOS la nave enemiga
class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;
class ANaveEnemigaCazaAlfa;
class ANaveEnemigaCazaDelta;
class ANaveEnemigaTransporteLigero;
class ANaveEnemigaTransportePesado;
class ANaveEnemigaEspiaScout;
class ANaveEnemigaEspiaCentral;
class ANaveEnemigaReabastecimientoBombs;
class ANaveEnemigaReabastecimientoFuel;
class ANaveEnemigaNodrizaMadre;
class ANaveEnemigaNodrizaWar;
class ALogros;
class AProyectilEnemigo;
class UGeneradorNaves;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();
	
	UGeneradorNaves* GeneradorNaves01;
	UPROPERTY(EditAnywhere)
	int escudo=2;

public:
	TArray<ANaveEnemigaCaza*> TANaveEnemigaCaza;
	TArray<ANaveEnemigaCazaAlfa*> TANaveEnemigaCazaAlfa;
	TArray<ANaveEnemigaCazaDelta*> TANaveEnemigaCazaDelta;
	TArray<ANaveEnemigaTransporte*> TANaveEnemigaTransporte;

	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ALogros* logro1;  
	AProyectilEnemigo* proyectil;
	UPROPERTY(VisibleAnywhere, Category = "Game mode") 
	class AGalaga_USFX_L01Pawn* naveJugador;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ABallDemoledora* ballDemoledora;

public:
	virtual void Tick(float DeltaTime) override;
	
protected:
	virtual void BeginPlay() override;
private:
	int TiempoTranscurrido; 
};




