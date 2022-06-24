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
