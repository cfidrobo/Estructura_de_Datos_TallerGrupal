#ifndef BUSQUEDA_H
#define BUSQUEDA_H 
#include <iostream>
#include <string>

using namespace std;

template<class T>
class BusquedaSecuencial{
    public:
        virtual void busquedaSecuencial(*T) = 0;
};

template<class T>
class BusquedaBinaria{
    public:
        virtual bool busquedaBianria(*T) = 0;
};

template<class T>
class BusquedaHash{
    public:
        virtual void busquedaHash(*T) = 0;
};

#endif