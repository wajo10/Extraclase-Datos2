//
// Created by root on 5/03/19.
//

#include "Nodo.h"
#include "Collector.h"
#include "Lista.cpp"



Nodo::Nodo(int _dato, Nodo* _siguiente) {
    dato = _dato;
    siguiente = _siguiente;
}


void Nodo::setDato(int dato){
    this->dato=dato;
}



void* Nodo::operator new(size_t valor) {

    if (collector->listaCollector.head == nullptr ){
        Nodo i = Nodo(valor, nullptr);
        if (collector->listaNodos.head == nullptr){
            collector->listaNodos.head = &i;
        }
        else{
           Nodo *p = collector->listaNodos.head;
            while(p->siguiente!= nullptr){
                p=p->siguiente;
            }
            p->siguiente=&i;


        }
    }
    else{
        collector->Reutilizar(valor);



    }

}
