/*      UNIVERSIDAD DE LAS FUERZAS ARMADAS
*       Ordenamiento Mezcla Natural
*       Autor: NRC 4683
*       Fecha de creación: 21/06/2022
*       Fecha de modificación: 29/06/2022
*       Grupo: Todo el curso
*       Github: https://github.com/cfidrobo/Estructura_de_Datos_TallerGrupal
*/

#include <iostream>
#include <cstdlib>
#include "Sorts.h"
#include "val.h"
#include "Radix.h"

using namespace std;

int main()
{
    Arreglo<int> arreglo;

    Vector vector;
    Radix rd;

    int opcion, tamanio = 0;

    vector.set_arreglo(new int[tamanio]);

    
    bool repetir = true;

    do {
        system("cls");
        printf("\t\t===================================\n");
        printf("\t\t\tMENU DE OPCIONES\n");
        printf("\t\t===================================\n");
        cout << "\t\t [1] Intercambio" << endl;
        cout << "\t\t [2] Burbuja" << endl;
        cout << "\t\t [3] QuickSort" << endl;
        cout << "\t\t [4] ShellSort" << endl;
        cout << "\t\t [5] Counting Sort" << endl;
        cout << "\t\t [6] Ordenamiento por Radix" << endl;
        cout << "\t\t [7] Mezcla Natural" << endl;
        cout << "\t\t [0] SALIR" << endl;
        printf("\t\t===================================\n");
        int opcion = val::leerNumero("\n\t\tIngrese una opcion [0-7]: ");
        printf("\n\t\t===================================\n");
 
        switch (opcion) {
            if (opcion > 7 || opcion < 0) {
                repetir = true;
            }
        case 1:
            rewind(stdin);
             arreglo.encerar();
            do {
                float n = val::leerNumero("ingrese un numero: ");
                arreglo.agregar(n);
            } while (val::confirmar("Desea agregar otro numero?"));

            arreglo.imprimir();
            arreglo.ordenarIntercambio();
            arreglo.imprimir();        

            system("pause>nul"); // Pausa
            fflush(stdin);
            break;
            
        case 2:
            rewind(stdin);
            arreglo.encerar();
            do {
                float n = val::leerNumero("ingrese un numero: ");
                arreglo.agregar(n);
            } while (val::confirmar("Desea agregar otro numero?"));

            arreglo.imprimir();
            arreglo.ordenarBurbuja();
            arreglo.imprimir();        

            system("pause>nul"); // Pausa
            fflush(stdin);
            break;

        case 3:
        
            // Lista de instrucciones QuickSort             

            rewind(stdin);
            arreglo.encerar();
            do {
                float n = val::leerNumero("ingrese un numero: ");
                arreglo.agregar(n);
            } while (val::confirmar("Desea agregar otro numero?"));

            arreglo.imprimir();
            arreglo.quicksort();
            arreglo.imprimir();

            system("pause>nul"); // Pausa
            fflush(stdin);
            break;

        case 4:
            // Lista de instrucciones ShellSort  
            rewind(stdin);
            arreglo.encerar();
            do {
                float n = val::leerNumero("ingrese un numero: ");
                arreglo.agregar(n);
            } while (val::confirmar("Desea agregar otro numero?"));

            arreglo.imprimir();
            arreglo.ordenarShell();
            arreglo.imprimir();    
            
            system("pause>nul"); // Pausa  
            fflush(stdin);
            break;

        case 5:
            // Lista de instrucciones Ordenamiento por Distribucion             
            arreglo.encerar();
            system("pause>nul"); // Pausa    
            fflush(stdin);
            break;

        case 6:
                  
            cout << "Ingrese el tamanio del arreglo: " << endl;
            cin >> tamanio;
            rd.generar_arreglo(vector, tamanio, 100);
            cout << "--ARREGLO DESORDENADO--" << endl;
            rd.imprimir_arreglo(vector, tamanio);
            cout << "Ordenamiento por metodo radix" << endl;
            rd.radixsort(vector, tamanio);
            rd.imprimir_arreglo(vector, tamanio);

            // Lista de instrucciones Ordenamiento por Radix              
            arreglo.encerar();
            system("pause>nul"); // Pausa  
            fflush(stdin);
            break;

        case 7:
            arreglo.encerar();
            do {
                float n = val::leerNumero("Ingrese un numero: ");
                arreglo.agregar(n);
            } while (val::confirmar("Desea ingresar otro numero? "));

            arreglo.imprimir();
            arreglo.ordenar();
            arreglo.imprimir();

            system("pause>nul"); // Pausa     
            fflush(stdin);
            break;

        case 0:
            repetir = false;
            break;
        }

    } while (repetir);

    return 0;
}
