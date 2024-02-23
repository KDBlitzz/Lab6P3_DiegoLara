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
	for (int i = 0; i < listaHelicopteros.size(); i++)
	{
		delete this->listaHelicopteros[i];
	}
	this->listaHelicopteros.clear();
}

void CampoDeBatalla::AgregarHelicoptero(Helicoptero* helicoptero)
{
	this->listaHelicopteros.push_back(helicoptero);
}

void CampoDeBatalla::MostrarInformacion()
{
	if (this->listaHelicopteros.empty())
	{
		cout << "No hay ningun helicoptero agregado" << endl;
	}
	else {
		int contador = 1;
		for (int i = 0; i < this->listaHelicopteros.size(); i++) {
			cout << "Helicoptero: " << contador << endl;
			this->listaHelicopteros[i]->toString();
			cout << endl;
			contador++;
		}
	}
}

void CampoDeBatalla::SimularBatalla(Helicoptero* player1, Helicoptero* player2)
{
	int turno = 0;
	if (turno % 2 == 0)
	{
		turno++;
	}
	else {
		turno++;
	}
}


