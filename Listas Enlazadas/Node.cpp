#include "Node.h"

Node::Node()
{
	per = nullptr;
	next = nullptr;
}

Node::Node(Persona& Rper, Node* next)
{
	this->per = (Persona*) &Rper;//per no deja
	this->next = next;
}

Node::~Node()
{
	if (per != nullptr)
		delete per;
}

Persona* Node::getPersona()
{
	return per;
}

Node* Node::getNext()
{
	return next;
}

void Node::setPersona(Persona& Rper) //per
{
	if (per != nullptr)
		delete per;
	per = (Persona*)&Rper; //per
}

void Node::setNode(Node* next)
{
	next = next;
}

