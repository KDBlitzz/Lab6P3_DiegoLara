#pragma once
#include "Helicoptero.h"
class Helicoptero_H : public Helicoptero
{
private:
	string tipoMisil;
public:
	Helicoptero_H(string _nombre, string _tipoArma, int _velocidad, int _resistencia, int _municion, string _tipoMisil);
	string gettipoMisil();
	void settipoMisil(string _tipoMisil);
	~Helicoptero_H();
	double Atacar();
	void Informacion();
};

