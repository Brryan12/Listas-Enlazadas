#pragma once
#include "Node.h"
#include <sstream>
class ContenedorL
{
private:
	Node* ppio;
public:
	ContenedorL();
	//ContenedorL(ContenedorL&); //avanzado
	virtual ~ContenedorL();
	int cuentaPersonas() const;
	bool existeCedula(string cedula) const;
	//EL metodo solo sirve si existe la persona
	int lugarConCedula(string cedula)const;
	bool ingresarPersonaAlInicio(Persona& per);
	bool ingresarPersonaAlFinal(Persona& per);
	bool ingresarPersonaOrdnxCedula(Persona& per);

	bool eliminarPersonaXCedula(string cedula);
	bool eliminarPersonaXLug(int posicion);
	bool eliminarTodo();

	double promedioEdad() const;
	Persona& retPersDeMayorEdad() const;
	string toString() const;

	void ordenAscXCedula();
};

