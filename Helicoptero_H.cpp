#include "Helicoptero_H.h"
Helicoptero_H::Helicoptero_H(string _nombre, string _tipoArma, int _velocidad, double _resistencia, int _municion, string _tipoMisil) 
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
	tipoMisil = "";
}

double Helicoptero_H::Atacar()
{
	double factorVelocidad = 0;
	factorVelocidad = 1.0 + (this->getVelocidad() / 100.0);
	double total = 0;
	if (tipoMisil == "Anti-Bombas")
	{
		total = (10 + (20 * 5)) * factorVelocidad;
		return total;
	}
	else if (tipoMisil == "Fulminante") {
		total = (10 + (30 * 5)) * factorVelocidad;
		return total;
	}
	else if(tipoMisil == "Reforzado"){
		total = (10 + (30 * 5)) * factorVelocidad;
		return total;
	}
	
}

void Helicoptero_H::toString()
{
	Helicoptero::toString();
	cout << "Tipo de Misil: " << this->tipoMisil << endl;
}
