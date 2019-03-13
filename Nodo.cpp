//
// Created by root on 5/03/19.
//

#include "Nodo.h"

Nodo::Nodo(int _dato, Nodo* _siguiente) {
    dato = _dato;
    siguiente = _siguiente;
}

int Nodo::getDato() {
    return this->dato;
}

void* Nodo::operator new(size_t size) {

    if (Collector::getInstance().listaCollector->head == nullptr ){
        Nodo* i = (Nodo*) malloc(size);
        Collector::getInstance().listaNodos->head = i;

        return i;
    }
    else{

        return Collector::getInstance().pop();

    }

}

void Nodo::operator delete(void* nodo) {

    Nodo* temp = (Nodo*) nodo;
    Nodo* iterator = Collector::getInstance().listaNodos->head;
    if (temp == Collector::getInstance().listaNodos->head){ //caso en el que se borra el head
        Collector::getInstance().listaNodos->head = temp->siguiente;
        Collector::getInstance().listaCollector->insertarAlFinal(temp);
    }
    if (temp->siguiente == nullptr){ //En caso de querer eliminar el ultimo nodo
        while (iterator->siguiente != nullptr){
            if (iterator->siguiente == temp){
                iterator->siguiente = nullptr;
                Collector::getInstance().listaCollector->insertarAlFinal(temp);

                break;
            }
            iterator= iterator->siguiente;
        }
    }
    while (iterator->siguiente != nullptr){ //caso de querer borrar nodos en el medio de la lista
        if (iterator->siguiente == temp){
            iterator->siguiente = iterator->siguiente->siguiente;
            Collector::getInstance().listaCollector->insertarAlFinal(temp);

            break;
        }
        iterator=iterator->siguiente;
    }

}

Nodo::Nodo(){
    siguiente = nullptr;
    dato = 0;
}
