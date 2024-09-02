#pragma once
#include "Persona.h"
class Node
{
private:
	Persona* per;
	Node* next;
public:
	Node();
	Node(Persona& per, Node* next);
	virtual ~Node();	
	Persona* getPersona();
	Node* getNext();
	void setPersona(Persona &per); //Cambiar el obj del nodo
	void setNode(Node* next); //cambia a lo que ve

};

