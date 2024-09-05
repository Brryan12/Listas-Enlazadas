#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Persona
{
private:
	string cedula;
	string nombre;
	int edad;
public:
	Persona();
	Persona(string cedula, string nombre, int edad);
	virtual ~Persona();
	void setCedula(string cedula);
	void setEdad(int edad);
	void setNombre(string nombre);
	int getEdad() const;
	string getCedula() const;
	string getNombre() const;
	string toString() const;

};

