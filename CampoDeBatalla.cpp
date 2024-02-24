#include "CampoDeBatalla.h"

CampoDeBatalla::CampoDeBatalla(vector<Helicoptero*> _listaHelicopteros)
{
	this->listaHelicopteros = _listaHelicopteros;
}

vector<Helicoptero*> CampoDeBatalla::getlistaHelicopteros()
{
	return listaHelicopteros;
}

void CampoDeBatalla::setlistaHelicopteros(vector<Helicoptero*> _listaHelicopteros)
{
	listaHelicopteros = _listaHelicopteros;
}

CampoDeBatalla::~CampoDeBatalla()
{
	for (int i = 0; i < listaHelicopteros.size(); i++)
	{
		delete this->listaHelicopteros[i];
	}
	this->listaHelicopteros.clear();
}

void CampoDeBatalla::AgregarHelicoptero(Helicoptero* helicoptero)
{
	this->listaHelicopteros.push_back(helicoptero);
}

void CampoDeBatalla::MostrarInformacion()
{
	if (this->listaHelicopteros.empty())
	{
		cout << "No hay ningun helicoptero agregado" << endl;
	}
	else {
		int contador = 1;
		for (int i = 0; i < this->listaHelicopteros.size(); i++) {
			cout << "Helicoptero: " << contador << endl;
			this->listaHelicopteros[i]->toString();
			cout << endl;
			contador++;
		}
	}
}

void CampoDeBatalla::SimularBatalla(Helicoptero* humano, Helicoptero* IA)
{
	bool victoria = true;
	int turno = 0;
	while (victoria) {
		if (turno % 2 == 0)
		{
			cout << "\n**Turno " << turno + 1 << ":**" << endl << endl;
			IA->setResistencia(IA->getResistencia() - humano->Atacar());
			humano->setMunicion(humano->getMunicion() - 5);
			humano->setVelocidad(humano->getVelocidad() - 10);
			cout << humano->getNombre() << " ataca a " << IA->getNombre() << " con misiles" << endl;
			cout << "Daño Infligido: " << humano->Atacar() << "%" << endl;
			cout << "Resistencia de " << IA->getNombre() << ": " << IA->getResistencia() << "%";
			turno++;
		}
		else {
			cout << "\n**Turno " << turno + 1 << ":**" << endl << endl;
			humano->setResistencia(humano->getResistencia() - IA->Atacar());
			IA->setMunicion(IA->getMunicion() - 2);
			IA->setVelocidad(IA->getVelocidad() - 8);
			cout << IA->getNombre() << " ataca a " << humano->getNombre() << " con cohetes" << endl;
			cout << "Daño Infligido: " << IA->Atacar() << "%" << endl;
			cout << "Resistencia de " << humano->getNombre() << ": " << humano->getResistencia() << "%";
			turno++;
		}
		if (humano->getResistencia() < 0 || humano->getMunicion() < 0)
		{
			cout << "\n**¡Victoria!**" << endl << endl;
			cout << "* Helicóptero ganador: " << IA->getNombre() << endl;
			victoria = false;
		}
		else if(IA->getResistencia() < 0 || IA->getMunicion() < 0){
			cout << "\n**¡Victoria!**" << endl << endl;
			cout << "* Helicóptero ganador: " << humano->getNombre() << endl;
			victoria = false;
		}
	}
}


