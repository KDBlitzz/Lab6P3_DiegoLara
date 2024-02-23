#include "Helicoptero_H.h"
Helicoptero_H::Helicoptero_H(string _nombre, string _tipoArma, int _velocidad, int _resistencia, int _municion, string _tipoMisil) 
	: Helicoptero(_nombre, _tipoArma, _velocidad, _resistencia, _municion)
{
	this->tipoMisil = _tipoMisil;
}

string Helicoptero_H::gettipoMisil()
{
	return tipoMisil;
}

void Helicoptero_H::settipoMisil(string _tipoMisil)
{
	tipoMisil = _tipoMisil;
}

Helicoptero_H::~Helicoptero_H()
{
}

double Helicoptero_H::Atacar(string tipoMisil, double _municion, double _velocidad)
{
	
	return 0.0;
}
