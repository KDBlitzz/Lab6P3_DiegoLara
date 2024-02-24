#include <iostream>
#include "Helicoptero.h"
#include "Helicoptero_H.h"
#include "Helicoptero_IA.h"
#include "CampoDeBatalla.h"
#include <locale>
void ejercicio_1() {
	vector <Helicoptero*> listaDeHelicopteros;
	CampoDeBatalla* administracion = new CampoDeBatalla(listaDeHelicopteros);
	Helicoptero_H* nuevoHelicoptero;
	Helicoptero_IA* nuevoHelicopteroIA;
	bool ejercicio_1 = true;
	int opcion = 0;
	while (ejercicio_1) {
		bool victoria = true;
		string nombre = "";
		int velocidad = 0;
		int municion = 0;
		double resistencia = 0;
		int select = 0;
		int selectMisile = 0;
		int selectDifficulty = 0;
		int player1 = 0;
		int player2 = 0;
		cout << "**Simulaci�n de Batalla de Helic�pteros**" << endl << endl;
		cout << "1. Agregar Helic�pteros" << endl;
		cout << "2. Mostrar Informaci�n de Helic�pteros" << endl;
		cout << "3. Simular Batalla" << endl;
		cout << "4. Salir" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "\n**Creaci�n de Helic�ptero**" << endl << endl;
			cout << "1. H" << endl;
			cout << "2. IA" << endl << endl;
			cout << "Seleccione el tipo de helic�ptero: "; cin >> select;
			cout << endl;
			switch (select) {
			case 1:
				cout << "\n**Ingrese los datos del Helic�ptero H:**" << endl << endl;
				cout << "Nombre: "; cin >> nombre; cout << endl;
				cout << "Velocidad(km/h): "; cin >> velocidad; cout << endl;
				while (velocidad < 100 || velocidad >= 401) {
					cout << "Ingrese una velocidad entre 100 y 400: " << endl;
					cin >> velocidad;
				}

				cout << "Munici�n: "; cin >> municion; cout << endl;
				while (municion < 5 || municion >= 31) {
					cout << "Ingrese una municion entre 5 y 30: " << endl;
					cin >> municion;
				}
				cout << "Resistencia: "; cin >> resistencia; cout << endl;
				while (resistencia < 100 || resistencia >= 201) {
					cout << "Ingrese una resistencia entre 100 y 200" << endl;
					cin >> resistencia;
				}
				cout << "\n**Seleccione el tipo de misil:**" << endl << endl;
				cout << "1. Anti-bombas" << endl;
				cout << "2. Fulminante" << endl;
				cout << "3. Reforzado" << endl;
				cin >> selectMisile;
				switch (selectMisile) {
				case 1:
					nuevoHelicoptero = new Helicoptero_H(nombre, "Misil", velocidad, resistencia, municion, "Anti-Bombas");
					cout << "**Helic�ptero Creado**" << endl << endl;
					administracion->AgregarHelicoptero(nuevoHelicoptero);
					administracion->MostrarInformacion();
					break;
				case 2:
					nuevoHelicoptero = new Helicoptero_H(nombre, "Misil", velocidad, resistencia, municion, "Fulminante");
					cout << "**Helic�ptero Creado**" << endl << endl;
					administracion->AgregarHelicoptero(nuevoHelicoptero);
					administracion->MostrarInformacion();
					break;
				case 3:
					nuevoHelicoptero = new Helicoptero_H(nombre, "Misil", velocidad, resistencia, municion, "Reforzado");
					cout << "**Helic�ptero Creado**" << endl << endl;
					administracion->AgregarHelicoptero(nuevoHelicoptero);
					administracion->MostrarInformacion();
					break;
				default:
					cout << "Opci�n Invalida" << endl;
				}
				break;
			case 2:
				cout << "\n**Ingrese los datos del Helic�ptero IA:**" << endl << endl;
				cout << "Nombre: "; cin >> nombre; cout << endl;
				cout << "Velocidad(km/h): "; cin >> velocidad; cout << endl;
				while (velocidad < 100 || velocidad >= 401) {
					cout << "Ingrese una velocidad entre 100 y 400: " << endl;
					cin >> velocidad;
				}
				cout << "Munici�n: "; cin >> municion; cout << endl;
				while (municion < 5 || municion >= 31) {
					cout << "Ingrese una municion entre 5 y 30: " << endl;
					cin >> municion;
				}
				cout << "Resistencia: "; cin >> resistencia; cout << endl;
				while (resistencia < 100 || resistencia >= 201) {
					cout << "Ingrese una resistencia entre 100 y 200" << endl;
					cin >> resistencia;
				}
				cout << "\n**Seleccione la inteligencia de cohete:**" << endl << endl;
				cout << "1. Principiante" << endl;
				cout << "2. Intermedio" << endl;
				cout << "3. Avanzado" << endl;
				cin >> selectDifficulty;
				switch (selectDifficulty) {
				case 1:
					nuevoHelicopteroIA = new Helicoptero_IA(nombre, "Cohete", velocidad, resistencia, municion, "Principiante");
					cout << "**Helic�ptero Creado**" << endl << endl;
					administracion->AgregarHelicoptero(nuevoHelicopteroIA);
					administracion->MostrarInformacion();
					break;
				case 2:
					nuevoHelicopteroIA = new Helicoptero_IA(nombre, "Cohete", velocidad, resistencia, municion, "Intermedio");
					cout << "**Helic�ptero Creado**" << endl << endl;
					administracion->AgregarHelicoptero(nuevoHelicopteroIA);
					administracion->MostrarInformacion();
					break;
				case 3:
					nuevoHelicopteroIA = new Helicoptero_IA(nombre, "Cohete", velocidad, resistencia, municion, "Avanzado");
					cout << "**Helic�ptero Creado**" << endl << endl;
					administracion->AgregarHelicoptero(nuevoHelicopteroIA);
					administracion->MostrarInformacion();
					break;
				default:
					cout << "Opci�n Invalida" << endl;
				}
				break;
			default:
				cout << "Opci�n Invalida" << endl;
			}

			break;
		case 2:
			cout << "---Lista de Helicopteros---" << endl;
			administracion->MostrarInformacion();
			break;
		case 3:
			if (administracion->getlistaHelicopteros().size() < 2)
			{
				cout << "No hay mas de 2 helic�pteros para la simulaci�n" << endl;
			}
			else {
				administracion->MostrarInformacion();
				cout << "**Seleccione el primer Helic�ptero para la batalla (posici�n en la lista): "; cin >> player1; cout << endl << endl;
				cout << "**Seleccione el segundo Helic�ptero para la batalla (posici�n en la lista): "; cin >> player2; cout << endl << endl;
				cout << "**Simulaci�n de Batalla**" << endl << endl;
				player1 = player1 - 1;
				player2 = player2 - 1;
				administracion->SimularBatalla(administracion->getlistaHelicopteros()[player1], administracion->getlistaHelicopteros()[player2]);
			}

			break;
		case 4:
			ejercicio_1 = false;
			break;
		default:
			cout << "Opci�n Invalida" << endl;
		}

		if (!ejercicio_1)
		{
			for (int i = 0; i < listaDeHelicopteros.size(); i++)
			{
				delete listaDeHelicopteros[i];
			}
			listaDeHelicopteros.clear();
			delete administracion;
			delete nuevoHelicoptero;
			delete nuevoHelicopteroIA;
		}
	}
}
void menu() {
	int option = 0;
	bool menu = true;
	while (menu) {
		cout << "Ejercicio Pr�ctico 1 � El final m�s hermoso " << endl;
		cout << "2. Salir" << endl;
		cin >> option;
		switch (option) {
		case 1:
			ejercicio_1();
			break;
		case 2:
			menu = false;
			break;
		default:
			cout << "Opci�n Invalida" << endl;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "spanish");
	menu();
}