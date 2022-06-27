#include "Arreglo.h"


template <typename T>
void Arreglo<T>::merge(int inicio, int medio, int fin) {
    int const subArregloUno = medio - inicio + 1;
    int const subArregloDos = fin - medio;

    int* arregloInicial = new int[subArregloUno],
        * arregloFinal = new int[subArregloDos];

    for (int i = 0; i < subArregloUno; i++) {
        *(arregloInicial + i) = *(_datos + inicio + i);
    }

    for (int j = 0; j < subArregloDos; j++) {
        *(arregloFinal + j) = *(_datos + medio + 1 + j);
    }

    int indiceArregloUno = 0,
        indiceArregloDos = 0;
    int indiceArregloUnido = inicio;

    while (indiceArregloUno < subArregloUno && indiceArregloDos < subArregloDos) {
        if (*(arregloInicial + indiceArregloUno) <= *(arregloFinal + indiceArregloDos)) {
            *(_datos + indiceArregloUnido) = *(arregloInicial + indiceArregloUno);
            indiceArregloUno++;
        }
        else {
            *(_datos + indiceArregloUnido) = *(arregloFinal + indiceArregloDos);
            indiceArregloDos++;
        }

        indiceArregloUnido++;
    }

    while (indiceArregloUno < subArregloUno) {
        *(_datos + indiceArregloUnido) = *(arregloInicial + indiceArregloUno);
        indiceArregloUno++;
        indiceArregloUnido++;
    }

    while (indiceArregloDos < subArregloDos) {
        *(_datos + indiceArregloUnido) = *(arregloFinal + indiceArregloDos);
        indiceArregloDos++;
        indiceArregloUnido++;
    }
}

template <typename T>
void Arreglo<T>::merge_sort(int inferior, int superior) {
    if (inferior >= superior)
        return;

    auto medio = inferior + (superior - inferior) / 2;
    merge_sort(inferior, medio);
    merge_sort(medio + 1, superior);
    merge(inferior, medio, superior);
}
