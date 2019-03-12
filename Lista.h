//
// Created by root on 5/03/19.
//


#ifndef TAREAEXTRACLASE1_LISTA_H
#define TAREAEXTRACLASE1_LISTA_H

#include "Nodo.h"

class Nodo;

class Lista {
public:
    Nodo* head = 0;
    void insertarAlFinal(int dato);
    void insertarAlFinal(Nodo* nodo);
    Nodo* getNewNodo(int dato);


};



#endif //TAREAEXTRACLASE1_LISTA_H
