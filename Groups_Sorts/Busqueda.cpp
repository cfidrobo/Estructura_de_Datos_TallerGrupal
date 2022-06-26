#include "Busqueda.h"

template<class T>
class secuencial: public BusquedaSecuencial<T>{
    public:
        void busquedaSecuencial(*T) override;
};

template<class T>
class Binario: public BusquedaBinaria<T>{
    public:
        bool busquedaBinaria(*T) override;
};

template<class T>
class Hash: public BusquedaHash<T>{
    public:
        void busquedaHash(*T) override;
};