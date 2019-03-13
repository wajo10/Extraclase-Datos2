#include <iostream>
#include <stdlib.h>
#include "Lista.h"
#include "Nodo.h"

void pruebas();

using namespace std;

int main() {
    Nodo* a = new Nodo(5,nullptr);
    Nodo* b = new Nodo(6,a);
    Nodo* c = new Nodo(7,b);
    Nodo* d = new Nodo(8,c);
    pruebas();
    delete (a);
    pruebas();
    Nodo* e = new Nodo(9, d);
    pruebas();
    delete(c);
    pruebas();
    Nodo* f = new Nodo(10,e);
    pruebas();
    Nodo* g = new Nodo(11,f);
    pruebas();
    return 0;
}

void pruebas() {
    std::cout <<"\nlista Original:" << std::endl;
    Collector::getInstance().listaNodos->print();
    std::cout <<"\nlista Collector:" << std::endl;
    Collector::getInstance().listaCollector->print();
    std::cout <<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
    return;
}
