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
    std::cout << "head: " << Collector::getInstance().listaNodos->head << std::endl;
    delete (b);
    delete(c);
    Nodo* e = new Nodo(9,d);
    return 0;
}

