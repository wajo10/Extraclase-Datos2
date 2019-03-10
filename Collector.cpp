//
// Created by root on 7/03/19.
//

#include "Collector.h"
#include "Nodo.h"
void Collector::Reutilizar(size_t valor) {
    //!Cambiar es el nodo a mover a la lista verdadera
    Nodo *cambiar = Collector::listaCollector.head;
    Nodo *aux = cambiar->siguiente;
    Collector::listaCollector.head=aux;


    Nodo *t = Collector::listaNodos.head;
    while(t->siguiente!= nullptr){
        t=t->siguiente;
    }
    t->siguiente=cambiar;
    cambiar->setDato(valor);

}




