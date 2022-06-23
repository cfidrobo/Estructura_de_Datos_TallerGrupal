
#include <iostream>
#include "arreglo.h"
#include "Sorts.h"
#include "val.h"

int main(int, char**) {
    Arreglo<int> arreglo;

    do {
        float n = val::leerNumero("ingrese un numero: ");
        arreglo.agregar(n);
    } while (val::confirmar("Desea agregar otro numero?"));

    arreglo.imprimir();
    arreglo.ordenar();
    arreglo.imprimir();

    
    return 0;
}