#include "CampoDeBatalla.h"

CampoDeBatalla::CampoDeBatalla(vector<Helicoptero*> _listaHelicopteros)
{
	this->listaHelicopteros = _listaHelicopteros;
}

vector<Helicoptero*> CampoDeBatalla::getlistaHelicopteros()
{
	return listaHelicopteros;
}

void CampoDeBatalla::setlistaHelicopteros(vector<Helicoptero*> _listaHelicopteros)
{
	listaHelicopteros = _listaHelicopteros;
}

CampoDeBatalla::~CampoDeBatalla()
{
	for (Helicoptero* heli : listaHelicopteros) {
		delete heli;
	}
}


