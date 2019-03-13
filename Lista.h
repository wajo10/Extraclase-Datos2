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
    //! @brief agrega al final de la lista collector
    //! @param dato, dato que se desea mover hasta el final
    void insertarAlFinal(Nodo* nodo);
    //! @brief recorre e imprime las listas
    void print();


};



#endif //TAREAEXTRACLASE1_LISTA_H
