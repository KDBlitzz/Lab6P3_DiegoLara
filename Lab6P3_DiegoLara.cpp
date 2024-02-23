#include <iostream>
#include "Helicoptero.h"
#include "CampoDeBatalla.h"
#include <locale>
void ejercicio_1() {
	vector <Helicoptero*> listaDeHelicopteros;
	CampoDeBatalla* administracion = new CampoDeBatalla(listaDeHelicopteros);
	bool ejercicio_1 = true;
	int opcion = 0;
	while (ejercicio_1) {
		string nombre = "";
		int velocidad = 0;
		int municion = 0;
		double resistencia = 0;
		int select = 0;
		cout << "**Simulaci�n de Batalla de Helic�pteros**" << endl << endl;
		cout << "1. Agregar Helic�pteros" << endl;
		cout << "2. Mostrar Informaci�n de Helic�pteros" << endl;
		cout << "3. Simular Batalla" << endl;
		cout << "4. Salir" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "**Creaci�n de Helic�ptero**" << endl << endl;
			cout << "1. H" << endl;
			cout << "2. IA" << endl << endl;
			cout << "Seleccione el tipo de helic�ptero: "; cin >> select;
			cout << endl;
			switch (select) {
			case 1:
				cout << "**Ingrese los datos del Helic�ptero H:**" << endl << endl;
				cout << "Nombre: "; cin >> nombre; cout << endl;
				cout << "Velocidad(km/h): "; cin >> velocidad; cout << endl;
				while (velocidad < 100 && velocidad >= 401) {
					cout << "Ingrese una velocidad entre 100 y 400: " << endl;
					cin >> velocidad;
				}
				cout << "Munici�n: "; cin >> municion; cout << endl;

				cout << "Resistencia: "; cin >> resistencia; cout << endl;

				break;
			case 2:
				break;
			default:
				cout << "Opcion Invalida" << endl;
			}
			
			break;
		case 2:
			administracion->MostrarInformacion();
			break;
		case 3:
			break;
		case 4:
			ejercicio_1 = false;
			break;
		default:
			cout << "Opci�n Invalida" << endl;
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