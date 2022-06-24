/*      UNIVERSIDAD DE LAS FUERZAS ARMADAS
*       Ordenamiento Mezcla Natural
*       Autor: Almeida Marlyn, Chicango George, Diego Hidalgo,Fernando Rene 
*       Fecha de creación: 22/06/2022
*       Fecha de modificación: 23/06/2022
*       Grupo: 1 y 19
*       Github: https://github.com/cfidrobo/Estructura_de_Datos_TallerGrupal
*/
#pragma once
#include <iostream>
#include "Arreglo.h"

template <typename T>

class InterfazBurbuja{
	public:
		virtual void Burbuja();
		friend class Arreglo; 
};
class InterfazQuickSort{		
		virtual void QuickSort();
		friend class Arreglo; 
};
class InterfazShellSort{
		virtual void ShellSort();
		friend class Arreglo; 
};
class InterfazDistribucion{
		virtual void Distribucion();
		friend class Arreglo; 
};
class InterfazRadix{
		virtual void Radix();
		friend class Arreglo; 
};
class InterfazIntercambio{
		virtual void Intercambio();
		friend class Arreglo; 
};