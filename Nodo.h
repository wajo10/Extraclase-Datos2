//
// Created by root on 5/03/19.
//

#ifndef TAREAEXTRACLASE1_NODO_H
#define TAREAEXTRACLASE1_NODO_H


#include <cstddef>

class Nodo {
private:
    int dato =0;

public:
    Nodo* siguiente = nullptr;
    void* operator new(size_t);
    //void operator delete( void*);
    void setDato(int);

    Nodo(int,Nodo*);
};


#endif //TAREAEXTRACLASE1_NODO_H
