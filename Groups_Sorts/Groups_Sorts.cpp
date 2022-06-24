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
        cout << "1. Sorts" << endl;
        cout << "2. Burbuja" << endl;
        cout << "3. QuickSort" << endl;
        cout << "4. ShellSort" << endl;
        cout << "5. Distribucion" << endl;
        cout << "6. Radix" << endl;
        cout << "7. Intercambio" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            rewind(stdin);
            do {
                float n = val::leerNumero("Ingrese un numero: ");
                arreglo.agregar(n);
            } while (val::confirmar("Desea ingresar otro numero? "));

            arreglo.imprimir();
            arreglo.ordenar();
            arreglo.imprimir();

            system("pause>nul"); 
            break;

        case 2:
            // Lista de instrucciones de la opción 2                

            system("pause>nul"); // Pausa
            break;

        case 3:
            // Lista de instrucciones de la opción 3                

            system("pause>nul"); // Pausa            
            break;

        case 4:
            // Lista de instrucciones de la opción 4                

            system("pause>nul"); // Pausa                
            break;

        case 5:
            // Lista de instrucciones de la opción 4                

            system("pause>nul"); // Pausa                
            break;

        case 6:
            // Lista de instrucciones de la opción 4                

            system("pause>nul"); // Pausa                
            break;

        case 7:
            // Lista de instrucciones de la opción 4                

            system("pause>nul"); // Pausa                
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}
