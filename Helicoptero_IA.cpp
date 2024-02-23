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
}

double Helicoptero_IA::Atacar(string _IACohete, double _municion, double _velocidad)
{
	return 0.0;
}
