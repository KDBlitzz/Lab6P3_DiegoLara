#pragma once
#include "Helicoptero.h"
class Helicoptero_IA : public Helicoptero
{
private:
	string IACohete;
public:
	Helicoptero_IA(string _nombre, string _tipoArma, int _velocidad, double _resistencia, int _municion, string _IACohete);
	string getIACohete();
	void setIACohete(string _IACohete);
	~Helicoptero_IA();
	double Atacar();
	void toString();
};

