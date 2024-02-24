#pragma once
#include "Helicoptero.h"
#include <vector>
using namespace std;
#include <iostream>
class CampoDeBatalla
{
private:
	vector <Helicoptero*> listaHelicopteros;
public:
	CampoDeBatalla(vector <Helicoptero*> _listaHelicopteros);
	vector<Helicoptero*> getlistaHelicopteros();
	void setlistaHelicopteros(vector <Helicoptero*> _listaHelicopteros);
	~CampoDeBatalla();
	void AgregarHelicoptero(Helicoptero* helicoptero);
	void MostrarInformacion();
	void SimularBatalla(Helicoptero* humano, Helicoptero* IA);

};

