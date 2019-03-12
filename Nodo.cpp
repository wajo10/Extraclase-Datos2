//
// Created by root on 5/03/19.
//

#include "Nodo.h"



Nodo::Nodo(int _dato, Nodo* _siguiente) {
    dato = _dato;
    siguiente = _siguiente;
}


void Nodo::setDato(int dato){
    this->dato=dato;
}



void* Nodo::operator new(size_t size) {

    if (Collector::getInstance().listaCollector->head == nullptr ){
        Nodo* i = ::new Nodo();
        Collector::getInstance().listaNodos->head = i;
        std::cout << "Overloading new operator with size " << size << std::endl;
        return i;
    }
    else{
        return Collector::getInstance().pop();



    }

}

void Nodo::operator delete(void* nodo) {
    Nodo* temp = (Nodo*) nodo;
    Nodo* iterator = Collector::getInstance().listaNodos->head;
    while (iterator->siguiente != nullptr){
        if (iterator->siguiente == temp){
            Collector::getInstance().listaCollector->insertarAlFinal(temp);
            iterator->siguiente = iterator->siguiente->siguiente;
            break;
        }

    }

}

Nodo::Nodo(){
    siguiente = nullptr;
    dato = 0;

}
