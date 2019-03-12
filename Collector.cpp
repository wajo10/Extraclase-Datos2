//
// Created by root on 7/03/19.
//

#include "Collector.h"

//! Quita el elemento de la lista y devuelve el elemento que se quito
Nodo *Collector::pop() {
    if (listaCollector->head != nullptr){
        Nodo* toReturn = listaCollector->head;
        listaCollector->head = listaCollector->head->siguiente;
        toReturn->siguiente = nullptr;
        return toReturn;
    }
    return nullptr;
}

//! Constructor de la clase collector, se instancian las listas collector y nodos
Collector::Collector() {
        listaCollector = new Lista();
        listaNodos = new Lista();
}





