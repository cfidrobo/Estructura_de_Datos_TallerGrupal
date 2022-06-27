#pragma once
#include <iostream>
#include "Ordenamiento.h"

template<class T>

class Burbuja: public InterfazBurbuja<T>
{

};
class Quicksort: public InterfazQuicksort<T>
{

};
class Shellsort: public InterfazShellsort<T>
{
 for (int gap = T.get_tamano / 2; gap > 0; gap /= 2)
	{
		for (int i = gap ; i < T.get_tamano ; i += 1)
		{
			int T.get_tamano = *(T + i);

			int j;
			for (j = i; j >= gap && *(T + (j - gap)) > temp; j -= gap) {
				*(T + j) = *(T + (j - gap));
			}

			*(T + j) = temp;
		}
	}
};
class Distribucion: public InterfazDistribucion<T>
{

};
class Radix: public InterfazRadix<T>
{

};
class Intercambio: public InterfazIntercambio<T>
{

};
