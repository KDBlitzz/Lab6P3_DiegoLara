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
