#include <iostream>
#include "Node.h"
#include "ContenedorL.h"
using namespace std;

int main() {
	cout << "crear contenedor lista" << endl<<endl;
	ContenedorL* COL = new ContenedorL;
	Persona* per1 = new Persona("1111", "Ana", 1);
	Persona* per2 = new Persona("2222", "Juan", 54);
	Persona* per3 = new Persona("3333", "Moe", 32);
	Persona* per4 = new Persona("4444", "Randy", 4);
	Persona* per5 = new Persona("1111", "Carlos", 23);
	//Ingresar a las personas 
	if (COL->ingresarPersonaAlInicio(*per1))
		cout << "Ingresado" << endl;
	if (COL->ingresarPersonaAlInicio(*per2))
		cout << "Ingresado" << endl;
	if (COL->ingresarPersonaAlInicio(*per3))
		cout << "Ingresado" << endl;
	if (COL->ingresarPersonaAlInicio(*per4))
		cout << "Ingresado" << endl;
	if (COL->ingresarPersonaAlInicio(*per5))
		cout << "Ingresado" << endl;
	else
		cout << "No ingresado" << endl;
	cout << endl;
	cout << "El promedio de las edades es: " << COL->promedioEdad() << endl;
	cout << endl;
	cout << "Digite la cedula para verificar su existencia"<<endl;
	string cedula;
	cin >> cedula;
	if (COL->existeCedula(cedula)) {
		cout << "Si existe la cedula: "<<cedula << endl;
	}
	else
		cout << "No existe la cedula: " << cedula<<endl;
	cout << "ELiminar persona ingrese cedula: ";
	cin >> cedula;
	bool borrado = COL->eliminarPersonaXCedula(cedula);
	if (COL->eliminarPersonaXCedula(cedula))
		cout << "Se elimino" << endl;
	else
		cout << "No se elimino" << endl;

	cout << COL->toString();
	return 0;
}
