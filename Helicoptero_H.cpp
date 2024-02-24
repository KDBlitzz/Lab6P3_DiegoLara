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
	// metodo para que el humano ataque
	double conversionTemp = 0;
	double conversionConBase = 0;
	double factorVelocidad = 0;
	factorVelocidad = this->getVelocidad() / 100.0;
	double TotalVelocidad = 1.0 + factorVelocidad;
	double total = 0;
	if (tipoMisil == "Anti-Bombas")
	{
		conversionTemp = 20 * 5;
		conversionConBase = conversionTemp + 10;
		total = conversionConBase / TotalVelocidad;
		return total;
	}
	else if (tipoMisil == "Fulminante") {
		conversionTemp = 30 * 5;
		conversionConBase = conversionTemp + 10;
		total = conversionConBase / TotalVelocidad;
		return total;
	}
	else if(tipoMisil == "Reforzado"){
		conversionTemp = 40 * 5;
		conversionConBase = conversionTemp + 10;
		total = conversionConBase / TotalVelocidad;
		return total;
	}
	
}

void Helicoptero_H::toString()
{
	Helicoptero::toString();
	cout << "Tipo de Misil: " << this->tipoMisil << endl;
}
