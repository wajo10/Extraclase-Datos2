//
// Created by root on 5/03/19.
//

#include "Lista.h"


void Lista::insertarAlFinal(int dato) {
    Nodo* temp = head;
    if (head != nullptr){
        while (temp->siguiente  != nullptr){
            temp = temp->siguiente;
        }
        temp->siguiente = getNewNodo(dato);
    }
    else{
        head = getNewNodo(dato);
    }

}

Nodo* Lista::getNewNodo(int dato) {
    Nodo* toReturn = new Nodo();
    toReturn->setDato(dato);
    return toReturn;
}

void Lista::insertarAlFinal(Nodo* nodo) {
    Nodo* temp = head;
    if (head != nullptr){
        while (temp->siguiente  != nullptr){
            temp = temp->siguiente;
        }
        temp->siguiente = nodo;
        nodo->siguiente= nullptr;
    }
    else{
        head = nodo;
        head->siguiente= nullptr;
    }
    std::cout << "head: " << head << std::endl;
}
