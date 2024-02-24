#include "Helicoptero_IA.h"

Helicoptero_IA::Helicoptero_IA(string _nombre, string _tipoArma, int _velocidad, double _resistencia, int _municion, string _IACohete)
	: Helicoptero(_nombre,_tipoArma,_velocidad,_resistencia,_municion)
{
	this->IACohete = _IACohete;
}

string Helicoptero_IA::getIACohete()
{
	return IACohete;
}

void Helicoptero_IA::setIACohete(string _IACohete)
{
	IACohete = _IACohete;
}

Helicoptero_IA::~Helicoptero_IA()
{
	IACohete = "";
}

double Helicoptero_IA::Atacar()
{
	// metodo para que la IA ataque
	double conversionTemp = 0;
	double conversionConBase = 0;
	double factorVelocidad = 0;
	double TotalVelocidad = 0;
	factorVelocidad = this->getVelocidad() / 100.0;
	TotalVelocidad = 1.0 + factorVelocidad;
	double total = 0;
	if (IACohete == "Principiante")
	{
		conversionTemp = 10 * 2;
		conversionConBase = conversionTemp + 5;
		total = conversionConBase * TotalVelocidad;
		return total;
	}
	else if (IACohete == "Intermedio") {
		conversionTemp = 15 * 2;
		conversionConBase = conversionTemp + 5;
		total = conversionConBase * TotalVelocidad;
		return total;
	}
	else if (IACohete == "Avanzado") {
		conversionTemp = 20 * 2;
		conversionConBase = conversionTemp + 5;
		total = conversionConBase * TotalVelocidad;
		return total;
	}
}

void Helicoptero_IA::toString()
{
	Helicoptero::toString();
	cout << "Inteligencia de Cohete: " << this->IACohete << endl;
}
