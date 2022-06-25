#pragma once
#include <iostream>
#include "Arreglo.h"

template <typename T>

class InterfazDirecta {
public:
	virtual void Directa();
	friend class Arreglo;
};
class InterfazNatural {
	virtual void Natural();
	friend class Arreglo;
};
class InterfazBalanceada {
	virtual void Balanceada();
	friend class Arreglo;
};
class InterfazPolifasica{
	virtual void Polifasica();
	friend class Arreglo;
};