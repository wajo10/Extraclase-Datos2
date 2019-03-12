//
// Created by root on 7/03/19.
//

#ifndef TAREAEXTRACLASE1_COLLECTOR_H
#define TAREAEXTRACLASE1_COLLECTOR_H
#include "Lista.h"

class Lista;
class Nodo;

class Collector {
private:
        Collector();
public:
        void Reutilizar(size_t valor);

        Lista *listaCollector;
        Lista *listaNodos;

        static Collector& getInstance(){
            static Collector instance;
            return instance;
        }

        Nodo *pop();


    };




#endif //TAREAEXTRACLASE1_COLLECTOR_H
