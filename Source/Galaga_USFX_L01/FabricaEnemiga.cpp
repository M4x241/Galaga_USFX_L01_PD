// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCazaAlfa.h"
#include "NaveEnemigaCazaDelta.h"
#include "NaveEnemigaTransporteLigero.h"
#include "NaveEnemigaTransportePesado.h"
#include "NaveEnemigaEspiaScout.h"
#include "NaveEnemigaEspiaCentral.h"
#include "NaveEnemigaReabastecimientoBombs.h"
#include "NaveEnemigaReabastecimientoFuel.h"  
#include "NaveEnemigaNodrizaMadre.h"
#include "NaveEnemigaNodrizaWar.h"

ANaveEnemiga* AFabricaEnemiga::EnsambladoNave(int naveOrdenada)
{
	if (naveOrdenada == 0) {
		return GetWorld()->SpawnActor<ANaveEnemigaCazaAlfa>(ANaveEnemigaCazaAlfa::StaticClass());
	}
	else if (naveOrdenada==1) {
		return GetWorld()->SpawnActor<ANaveEnemigaCazaDelta>(ANaveEnemigaCazaDelta::StaticClass()); 

	}
	else {
		return nullptr;
	}
	return nullptr;
}
