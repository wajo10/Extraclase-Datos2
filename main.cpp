#include <iostream>
#include <stdlib.h>
#include "Lista.h"
#include "Nodo.h"

using namespace std;

int main() {
    Nodo* a = new Nodo(5,nullptr);
    Nodo* b = new Nodo(6,a);
    Nodo* c = new Nodo(7,b);
    std::cout << "head: " << Collector::getInstance().listaNodos->head << std::endl;
    delete (b);
    Nodo* d = new Nodo(7,c);
    return 0;
}

