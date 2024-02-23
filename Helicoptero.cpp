#include "Helicoptero.h"

Helicoptero::Helicoptero(string _nombre, string _tipoArma, int _velocidad, double _resistencia, int _municion)
{
	this->Nombre = _nombre;
	this->TipoArma = _tipoArma;
	this->Velocidad = _velocidad;
	this->Resistencia = _resistencia;
	this->Municion = _municion;
}

double Helicoptero::Atacar()
{
	return 0.0;
}

void Helicoptero::toString()
{
	cout << "Nombre: " << this->Nombre << endl;
	cout << "Tipo de Arma: " << this->TipoArma << endl;
	cout << "Velocidad: " << this->Velocidad << " km/h" << endl;
	cout << "Resistencia: " << this->Resistencia << "%" << endl;
	cout << "Municion: " << this->Municion << endl;
}

string Helicoptero::getNombre()
{
	return Nombre;
}

string Helicoptero::getTipoArma()
{
	return TipoArma;
}

int Helicoptero::getVelocidad()
{
	return Velocidad;
}

double Helicoptero::getResistencia()
{
	return Resistencia;
}

int Helicoptero::getMunicion()
{
	return Municion;
}

void Helicoptero::setNombre(string _nombre)
{
	Nombre = _nombre;
}

void Helicoptero::setTipoArma(string _tipoArma)
{
	TipoArma = _tipoArma;
}

void Helicoptero::setVelocidad(int _velocidad)
{
	Velocidad = _velocidad;
}

void Helicoptero::setResistencia(double _resistencia)
{
	Resistencia = _resistencia;
}

void Helicoptero::setMunicion(int _municion)
{
	Municion = _municion;
}

Helicoptero::~Helicoptero()
{
	Nombre = "";
	TipoArma = "";
	Velocidad = 0;
	Resistencia = 0;
	Municion = 0;
}
