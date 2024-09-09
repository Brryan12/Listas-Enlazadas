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
	Node* pExt = ppio;
	int lugar = 1;
	while (pExt != nullptr) {
		if (pExt->getPersona()->getCedula() == cedula) {
			return lugar;
		}
		lugar++;
		pExt = pExt->getNext();
	}
	return 0;
}

bool ContenedorL::ingresarPersonaAlInicio(Persona& per)
{
	if (!existeCedula(per.getCedula())) {
		ppio = new Node(per, ppio);
		return true;
	}
	else
		return false;

}

bool ContenedorL::ingresarPersonaAlFinal(Persona& per)
{
	Node* pExt = ppio;
	return false;
}

bool ContenedorL::ingresarPersonaOrdnxCedula(Persona& per)
{
	return false;
}

/// <summary>
/// Primero: Ver si en la lista hay nodos validos
/// Segundo: Saber si el primero tiene  la cedula que se busca
/// Tercero: Si no es el primero que buscamos, entonces recorremos la lista en busca de esa cedula
/// Cuarto: Si La encontramos la borramos
/// QUinto: Sino, si llegamos al final, nada se puede hacer retornamos false
/// </summary>
/// <param name="cedula"></param>
/// <returns></returns>
bool ContenedorL::eliminarPersonaXCedula(string cedula)
{
	Node* pExt = ppio;
	Node* ptrTemp = NULL;
	if (pExt != NULL) { //revisar que haya al menos un nodo
		if (pExt->getPersona()->getCedula() == cedula) {
			ppio = pExt->getNext();
			delete pExt;
			return true;
		}
		else {
			while (pExt->getNext() != nullptr && pExt->getPersona()->getCedula()!=cedula) {
				pExt = pExt->getNext();
			}
			if (pExt->getNext() != NULL) {
				//Cedula encontrada
				ptrTemp = pExt->getNext();
				pExt->setNext(ptrTemp->getNext());
				delete ptrTemp;
				return true;
			}
			else {
				return false;
			}
		}
	}
	else{
		return false;
	}
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
	Node* pExt = ppio;
	s << "---Lista de Personas---" << endl;
	while (pExt != NULL) {
		s<<pExt->getPersona()->toString()<<endl;
		
		pExt = pExt->getNext();
	}
	return s.str();
}

void ContenedorL::ordenAscXCedula()
{
}
