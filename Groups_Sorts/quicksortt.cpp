#include "quicksortt.h"
#include "Arreglo.h"
void quicksortt::intercambio(int &x,int &y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}

//void Procesos::quicksort(int *vec,int tam,int primero, int ultimo)
void quicksortt::quicksort(int primero, int ultimo){
    int i,j,central,pivote;
    Arreglo <int>Arr1;

    central = (primero+ultimo)/2;
    pivote = *(Arr1.get_datos()+central);
    i = primero;
    j = ultimo;

    do{
        while( *(Arr1.get_datos()+i) < pivote)i++;
        while(*(Arr1.get_datos() + j) > pivote)j--;

        if(i <= j){
            intercambio(*(Arr1.get_datos()+ i), *(Arr1.get_datos() + j));
            i++;
            j--;
        }
    }while(i<=j);

    if(primero < j){
        quicksort(primero,j);
    }
    if(i < ultimo){
        quicksort(i,ultimo);
    }

}


void quicksortt::ordenarQuicksort(){
    Arreglo<int> *Arr2 = new Arreglo<int>;
    //quicksort(0,Arr2.get_tamano()-1);
    std::cout<<"tamanio: "<<Arr2->get_tamano()<<std::endl;
}
