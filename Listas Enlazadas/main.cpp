#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
    Node* ppio = nullptr; //ve al inicio de la lista
    Node* pExt = nullptr; //nos ayuda a recorer la lista
    Persona* per1 = new Persona("1111", "Ana", 1);
    Persona* per2 = new Persona("2222", "Juan", 54);
    Persona* per3 = new Persona("3333", "Moe", 32);
    Persona* per4 = new Persona("444", "Randy", 4);
    Persona* per5 = new Persona("555", "Carlos", 23);
    string cedula;

    //Enlazar los nodos
    Node* node5 = new Node(*per5, nullptr);
    Node* node4 = new Node(*per4, node5);
    Node* node3 = new Node(*per3, node4);
    Node* node2 = new Node(*per2, node3);
    Node* node1 = new Node(*per1, node2);
    //ppio y Ext ven a node1
    ppio = node1;
    pExt = node1;

    //Imprimir
    while (pExt != nullptr) {
        cout << pExt->getPersona()->toString() << endl;
        pExt = pExt->getNext();
    }

    cout << "Elimanar un nodo" << endl << "Ingrese una cedula: ";
    cin >> cedula;
    cout << endl;
    //Que sea el primer nodo
    pExt = ppio;
    if(pExt->getPersona()->getCedula() == cedula) {
        ppio = pExt->getNext();
        delete pExt;
    }
    else {
        //no es el primero
        while (pExt->getNext() != nullptr && pExt->getPersona()->getCedula() != cedula) {
            pExt = pExt->getNext();
 
        }
        if (pExt->getNext() != nullptr) {
            delete pExt;
        }
    }
    pExt = ppio;

    //Imprimir 2
    while (pExt != nullptr) {
        cout << pExt->getPersona()->toString() << endl;
        pExt = pExt->getNext();
    }
    return 0;
}
