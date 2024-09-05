#include "ContenedorL.h"

ContenedorL::ContenedorL()
{
	this->ppio = nullptr;
}

ContenedorL::~ContenedorL()
{
}

int ContenedorL::cuentaPersonas() const
{
	int cont = 0;
	Node* pExt = ppio;
	while (pExt != nullptr) {
		cont++;
		pExt = pExt->getNext(); //moverse al siguiente nodo
	}
	return cont;
}

bool ContenedorL::existeCedula(string cedula) const
{
	Node* pExt = ppio;
	while (pExt != nullptr) {
		if (pExt->getPersona()->getCedula() == cedula)
			return true;
		pExt = pExt->getNext();
	}
	return false;
}

int ContenedorL::lugarConCedula(string cedula) const
{
	return 0;
}

bool ContenedorL::ingresarPersonaAlInicio(Persona& per)
{
	return false;
}

bool ContenedorL::ingresarPersonaAlFinal(Persona& per)
{
	return false;
}

bool ContenedorL::ingresarPersonaOrdnxCedula(Persona& per)
{
	return false;
}

bool ContenedorL::eliminarPersonaXCedula(string cedula)
{
	return false;
}

bool ContenedorL::eliminarPersonaXLug(int posicion)
{
	return false;
}

bool ContenedorL::eliminarTodo()
{
	return false;
}

double ContenedorL::promedioEdad() const
{
	double edad = 0;
	Node* pExt = ppio;
	while (pExt != nullptr) {
		edad += pExt->getPersona()->getEdad();
		pExt = pExt->getNext();
	}
	if (cuentaPersonas() != 0) //cont !=0
		return edad / this->cuentaPersonas();
	else
		cerr << "No hay personas" << endl;

}
Persona& ContenedorL::retPersDeMayorEdad() const
{

	return *new Persona;
}

string ContenedorL::toString() const
{
	stringstream s;

	return s.str();
}

void ContenedorL::ordenAscXCedula()
{
}
