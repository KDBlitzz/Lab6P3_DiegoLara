#pragma once
#include <string>
using namespace std;
class Helicoptero
{
private:
	string Nombre;
	string TipoArma;
	int Velocidad;
	double Resistencia;
	int Municion;
public:
	Helicoptero(string _nombre, string _tipoArma, int _velocidad, double _resistencia, int _municion);
	virtual double Atacar();
	string getNombre();
	string getTipoArma();
	int getVelocidad();
	double getResistencia();
	int getMunicion();
	void setNombre(string _nombre);
	void setTipoArma(string _tipoArma);
	void setVelocidad(int _velocidad);
	void setResistencia(double _resistencia);
	void setMunicion(int _municion);
	~Helicoptero();
};

