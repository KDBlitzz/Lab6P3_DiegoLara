#pragma once
#include "Helicoptero.h"
#include <vector>
class CampoDeBatalla
{
private:
	vector <Helicoptero*> listaHelicopteros;
public:
	CampoDeBatalla(vector <Helicoptero*> _listaHelicopteros);
	vector<Helicoptero*> getlistaHelicopteros();
	void setlistaHelicopteros(vector <Helicoptero*> _listaHelicopteros);
	~CampoDeBatalla();
	void AgregarHelicoptero(Helicoptero*);
	void MostrarInformacion();
	void SimularBatalla(Helicoptero*, Helicoptero*);

};

