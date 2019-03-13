//
// Created by root on 5/03/19.
//

#ifndef TAREAEXTRACLASE1_NODO_H
#define TAREAEXTRACLASE1_NODO_H


#include <cstddef>
#include <iostream>
#include "Collector.h"
#include "Lista.h"

class Collector;

class Nodo {
private:
    int dato =0;

public:
    Nodo* siguiente = nullptr;

    //! @brief Sobreescritura del operador new
    //! @param size tamano del objeto
    //! return puntero tipo nodo
    void* operator new(size_t);

    //! @brief Sobreescritura del operador delete
    //! @param nodo, nodo a borrar
    void operator delete( void*);
    
    int getDato();

    //! @brief Constructor con parametros
    //! @param _dato valor del nodo, siguiente direccion de memoria a la que apunta el nodo
    Nodo(int,Nodo*);

    //! @brief Constructor vacio de la clase nodo
    Nodo();

};

#endif //TAREAEXTRACLASE1_NODO_H
