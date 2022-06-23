
#include <iostream>
#include "arreglo.h"
#include "val.h"

int main(int, char**) {
    Arreglo<int> arreglo;

    do {
        float n = val::leerNumero("ingrese un numero: ");
        arreglo.agregar(n);
    } while (val::confirmar("Desea agregar otro numero?"));



    return 0;
}