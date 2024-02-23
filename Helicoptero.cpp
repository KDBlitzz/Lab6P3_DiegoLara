#include "Helicoptero.h"

Helicoptero::Helicoptero(string _nombre, string _tipoArma, int _velocidad, double _resistencia, int _municion)
{
	this->Nombre = _nombre;
	this->TipoArma = _tipoArma;
	this->Velocidad = _velocidad;
	this->Resistencia = _resistencia;
	this->Municion = _municion;
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
}
