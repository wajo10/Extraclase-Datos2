#include <iostream>
#include <stdlib.h>
#include "Lista.h"
#include "Nodo.h"

using namespace std;

int main() {
    Nodo* a = new Nodo(5,nullptr);
    Nodo* b = new Nodo(6,a);
    Nodo* c = new Nodo(7,b);
    Nodo* d = new Nodo(8,c);
    delete (b);
    delete(c);
    delete(d);
    Nodo* e = new Nodo(9, nullptr);
    Nodo* f = new Nodo(10,e);
    Nodo* g = new Nodo(25,f);
    Nodo* h = new Nodo(15,g);
    delete(f);
    delete(e);
    Collector::getInstance().listaNodos->print();
    cout <<"\nlista Collector:" << endl;
    Collector::getInstance().listaCollector->print();
    return 0;
}

