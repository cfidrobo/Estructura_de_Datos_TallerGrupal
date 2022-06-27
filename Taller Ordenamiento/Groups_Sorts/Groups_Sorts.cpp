/*      UNIVERSIDAD DE LAS FUERZAS ARMADAS
*       Ordenamiento Mezcla Natural
*       Autor: Cantuña David, Moyano Mathius
*       Fecha de creación: 22/06/2022
*       Fecha de modificación: 23/06/2022
*       Grupo: 6
*       Github: https://github.com/cfidrobo/Estructura_de_Datos_TallerGrupal
*/

#include <iostream>
#include <cstdlib>
#include "Sorts.h"
#include "val.h"

using namespace std;

int main()
{
    Arreglo<int> arreglo;

    int opcion;
    bool repetir = true;

    do {
        system("cls");

        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Intercambio" << endl;
        cout << "2. Burbuja" << endl;
        cout << "3. QuickSort" << endl;
        cout << "4. ShellSort" << endl;
        cout << "5. Ordenamiento por Distribucion" << endl;
        cout << "6. Ordenamiento por Radix" << endl;
        cout << "7. MezclaNatural" << endl;
        cout << "0. SALIR" << endl;

        int opcion = val::leerNumero("\nIngrese una opcion: ");
 
        switch (opcion) {
            if (opcion > 7 || opcion < 0) {
                repetir = true;
            }
        case 1:
            // Lista de instrucciones Intercambio
            system("pause>nul"); // Pausa
            break;

        case 2:
            // Lista de instrucciones Burbuja               

            system("pause>nul"); // Pausa
            break;

        case 3:
            // Lista de instrucciones QuickSort             

            system("pause>nul"); // Pausa            
            break;

        case 4:
            // Lista de instrucciones ShellSort  
            
            system("pause>nul"); // Pausa                
            break;

        case 5:
            // Lista de instrucciones Ordenamiento por Distribucion             

            system("pause>nul"); // Pausa                
            break;

        case 6:
            // Lista de instrucciones Ordenamiento por Radix              

            system("pause>nul"); // Pausa                
            break;

        case 7:

            do {
                float n = val::leerNumero("Ingrese un numero: ");
                arreglo.agregar(n);
            } while (val::confirmar("Desea ingresar otro numero? "));

            arreglo.imprimir();
            arreglo.ordenar();
            arreglo.imprimir();

            system("pause>nul"); // Pausa                
            break;

        case 0:
            repetir = false;
            break;
        }

    } while (repetir);

    return 0;
}
