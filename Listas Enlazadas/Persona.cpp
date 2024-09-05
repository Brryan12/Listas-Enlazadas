#include "Persona.h"

Persona::Persona()
{
	this->cedula = "";
	this->nombre = "";
	this->edad = 0;
}

Persona::Persona(string cedula, string nombre, int edad) : cedula(""), nombre(""), edad(0)
{
	this->cedula = cedula;
	this->nombre = nombre;
	this->edad = edad;
}

Persona::~Persona()
{
}

void Persona::setCedula(string cedula)
{
	cedula = cedula;
}

void Persona::setEdad(int edad)
{
	edad = edad;
}

void Persona::setNombre(string nombre)
{
	nombre = nombre;
}

int Persona::getEdad() const
{
	return edad;
}

string Persona::getCedula() const
{
	return cedula;
}

string Persona::getNombre() const
{
	return nombre;
}

string Persona::toString() const
{
	stringstream s;

	s << "---Persona---" << endl << "Nombre: " << nombre << endl << "Cedula: " << cedula << endl << "Edad: " << edad << endl;

	return s.str();
}
