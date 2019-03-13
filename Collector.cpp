//
// Created by root on 7/03/19.
//

#include "Collector.h"


Nodo *Collector::pop() {
    if (listaCollector->head != nullptr){
        Nodo* toReturn = listaCollector->head;
        listaCollector->head = listaCollector->head->siguiente;
        toReturn->siguiente = listaNodos->head;
        listaNodos->head=toReturn;

        return toReturn;
    }
    return nullptr;
}


    Collector::Collector() {
        listaCollector = new Lista();
        listaNodos = new Lista();
}





