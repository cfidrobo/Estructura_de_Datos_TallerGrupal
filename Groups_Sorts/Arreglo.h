/*      UNIVERSIDAD DE LAS FUERZAS ARMADAS
*       Ordenamiento Mezcla Natural
*       Autor: Cristian Idrobo, John Limones
*       Fecha de creación: 22/06/2022
*       Fecha de modificación: 22/06/2022
*       Grupo: 12
*       Github: https://github.com/cfidrobo/Estructura_de_Datos_TallerGrupal
*/

#pragma once

template <typename T>

class Arreglo {

private:
    T* _datos = nullptr;
    int _tamano = 0;

public:
    Arreglo();
    void agregar(int elemento);
    T obtener(int indice);
    void imprimir();
    void ordenar();
    int tamano();
    void set(int);
    int *get();
};

template <typename T>
void Arreglo<T>::set(int elemento) {
    agregar(elemento);
}

template <typename T>
int *Arreglo<T>::get() {
    return _datos;
}

template <typename T>
Arreglo<T>::Arreglo() {}

template <typename T>
void Arreglo<T>::agregar(int elemento) {
    if (_tamano == 0) {
        _datos = new T[1];
    }
    else {
        T* nuevo = new T[_tamano + 1];

        for (int i = 0; i < _tamano; i++) {
            *(nuevo + i) = *(_datos + i);
        }

        delete[] _datos;
        _datos = nuevo;
    }

    _datos[_tamano] = elemento;
    _tamano++;
}

template<typename T>
T Arreglo<T>::obtener(int indice)
{
    int valor = *(_datos + indice);
    return valor;
}

template <typename T>
void Arreglo<T>::imprimir() {
    std::cout << "[";

    for (int i = 0; i < _tamano; i++) {
        std::cout << *(_datos + i);

        if (i != _tamano - 1) {
            std::cout << ", ";
        }
    }

    std::cout << "]" << std::endl;
}

template <typename T>
void Arreglo<T>::ordenar() {
    merge_sort(0, _tamano - 1);
}

template<typename T>
int Arreglo<T>::tamano()
{
    return _tamano;
}




