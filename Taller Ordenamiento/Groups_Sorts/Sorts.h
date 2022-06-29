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
void Arreglo<T>::ordenarShell() {
    for (int gap = _tamano / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < _tamano; i += 1)
		{
			int temp = *(_datos + i);

			int j;
			for (j = i; j >= gap && *(_datos + (j - gap)) > temp; j -= gap) {
				*(_datos + j) = *(_datos + (j - gap));
			}

			*(_datos + j) = temp;
		}
	}

}

//Quick
template <class T>
void Arreglo<T>::intercambioQ(int& x, int& y) {
    int aux;
    aux = x;
    x = y;
    y = aux;
}
//The Quicksort 
template <class T>
void Arreglo<T>::quicksort() {
    quicksortImpl(0, _tamano - 1);
}

//Q
template <class T>
void Arreglo<T>::quicksortImpl(int primero, int ultimo) {
    int i, j, central, pivote;

    central = (primero + ultimo) / 2;
    pivote = *(_datos + central);
    i = primero;
    j = ultimo;

    do {
        while (*(_datos + i) < pivote)i++;
        while (*(_datos + j) > pivote)j--;

        if (i <= j) {
            intercambioQ(*(_datos + i), *(_datos + j));
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j) {
        quicksortImpl(primero, j);
    }
    if (i < ultimo) {
        quicksortImpl(i, ultimo);
    }
}

template <class T>
void Arreglo<T>::ordenarIntercambio() {
    int aux;
    for (int i = 0; i < _tamano -2; i++) {
        for (int j = i+1; j < _tamano - 1; j++) {
            if (*(_datos + i) > *(_datos + j + 1)) {
                aux = *(_datos + i);
                *(_datos + i) = *(_datos + j + 1);
                *(_datos + j + 1) = aux;
            }
        }
      
    }
    
}
/*
template <class T>
void Arreglo<T>::ordenarCounting(){
	int salida[_tamano+1];
	int max= *(_datos+0);
	for(int i=1; i<tam; i++){
		if(*(vector+i) > max)
			max = *(vector+i);
	}
	int contador[max+1]; 
	for(int i = 0; i <_tamano; i++){
		//contador[vector[i]]++; 
		contador *(_datos+1)++;
	}
	for(int i = 1; i<=max; i++){
		//contador[i] += contador[i-1]; 
		contador *(_datos+1)+=contador *(_datos-1);
	}
	for(int i = tam-1; i>=0; i--) {
		//salida[contador[vector[i]]-1] = vector[i];
		salida*(contador *(_datos+1)-1)= *(_datos);
	contador *(_datos) --;
	}
	for(int i = 0; i<_tamano; i++){
		//vector[i] = salida[i]; 
		vector*(_datos+i)= salida *(_datos+i)
	}

}
*/
