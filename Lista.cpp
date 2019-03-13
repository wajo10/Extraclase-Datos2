//
// Created by root on 5/03/19.
//

#include "Lista.h"

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
}

void Lista:: print(){
    Nodo *elemento = head;
    if (elemento == nullptr){
        std::cout<<"La lista no posee elementos"<<std::endl;
    }
    else {
        while (elemento->siguiente != nullptr) {
            std::cout << "[" << elemento->getDato() << "]->";
            elemento = elemento->siguiente;
        }
        std::cout << "[" << elemento -> getDato() << "]";
    }

    return;
}