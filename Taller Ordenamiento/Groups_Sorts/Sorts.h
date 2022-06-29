/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Ordenamiento externo - Mezcla Natural
Autor: Esteban Chablay & Paul Mena
Fecha de creacion: 27/06/2022
Fecha de modificacion: 27/06/2022
4683 ESTRUCTURA DE DATOS
*/

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

template <class T>
void Arreglo<T>::ordenarBurbuja() {
    int aux, vueltas = 0;
    for (int i = 0; i < _tamano; i++) {
        for (int j = 0; j < _tamano - 1; j++) {
            if (*(_datos + j) > *(_datos + j + 1)) {
                aux = *(_datos + j);
                *(_datos + j) = *(_datos + j + 1);
                *(_datos + j + 1) = aux;
            }
        }
        vueltas++;
    }
    std::cout << "\nEl numero de vueltas realizadas es: " << vueltas << "\n";
}

template <class T>
void Arreglo<T>::ShellSort() {
    for (int gap = T.get_tamano / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < T.get_tamano; i += 1)
		{
			int temp = *(T + i);

			int j;
			for (j = i; j >= gap && *(T + (j - gap)) > temp; j -= gap) {
				*(T + j) = *(T + (j - gap));
			}

			*(T + j) = temp;
		}
	}

}