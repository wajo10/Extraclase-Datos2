//
// Created by root on 5/03/19.
//

#include "Lista.h"


//! agrega al final de la lista collector
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

void Lista:: print(){
    Nodo *elemento = head;
    while(elemento->siguiente != nullptr){
        std::cout << "[" << elemento -> getDato() << "]->";
        elemento = elemento->siguiente;
    }
    std::cout << "[" << elemento -> getDato() << "]->";
}