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
        //! @brief Constructor de la clase collector, se instancian las listas collector y nodos
        Collector();
public:
        Lista *listaCollector; //lista que tiene los nodos eliminados
        Lista *listaNodos; //lista con los nodos creados

        static Collector& getInstance(){
            static Collector instance;
            return instance;
        }
        //! @brief Remueve el elemento de la lista deseado
        Nodo *pop();

    };

#endif //TAREAEXTRACLASE1_COLLECTOR_H
