/*
               UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa: Implementacion hash

Autores: Todo el curso

Fecha de Creacion:  26 de junio del 2022

Version del programa: Version 1

Materia: Estructuras de datos

Nrc: 4683
*/
//Librerías
#include <iostream>
#include "Hash.h"
#include "Validacion.h"


int menu();

int main(int argc, char** argv) {
	
	Hash objt;
	Validacion v;
	objt.inicio();
	int opc, dim;
	char val[10];
	do{
		system("cls");
		opc=menu();
		switch(opc)
		{
			case 1:{
				char* mensaje = (char*) "\nIngrese un valor: ";
				strcpy(val,v.ingresarDato(mensaje));
        		dim=atoi(val);
				objt.ingreso(dim);	
				cout<<endl;
				break;
			}
			case 2:{
				char* mensaje = (char*) "\nIngrese el valor que desea buscar: ";
				strcpy(val,v.ingresarDato(mensaje));
        		dim=atoi(val);
        		cout<<endl;
				if (objt.busqueda(dim)){
					cout << "Valor encontrado" << endl;
				}
				else {
					cout << "Valor no encontrado" << endl;
				};			            
				break;
			}
			case 3:{
				char* mensaje = (char*) "\nIngrese el valor que desea eliminar: ";
				strcpy(val,v.ingresarDato(mensaje));
        		dim=atoi(val);
        		cout<<endl;
				if (objt.eliminar(dim)) {
					cout << "Despues de la eliminacion" << endl;
					objt.impresion();
				}
				else {
					cout << "Valor no encontrado" << endl;
				};			            
				break;
			}
			case 4:{
				objt.impresion();			            
				break;
			}
			case 0:{
				cout<<"\nAdios, gracias por usar el programa :D "<<endl;
				break;
			}
			default:{
				cout<<"\nError. Opcion incorrecta"<<endl;
				break;
			}
		}
		system("pause");
	}while(opc!=0);
	
<<<<<<< HEAD
<<<<<<< HEAD
 	/*
<<<<<<< HEAD
	


	

	
}

=======

>>>>>>> 6c1fea0ed55453a5193c91bf8505083320d07899
=======
>>>>>>> 69d2a82a10d37f3fd826fe579a744de184f0ed97
=======
>>>>>>> 888178a056853a4ca7ab6294ac672c04a5eb1ea4
//Creacion del menu.
>>>>>>> 6a4c46213657accd6ce1944807f7b0f24d75c8fe
int menu()
		{
			int opc;
			cout<<"\n****************************MENU****************************\n"<<endl
				<<"1. Ingresar elemento a la tabla"<<endl
				<<"2. Buscar un elemento en la tabla"<<endl
				<<"3. Eliminar un elemento en la tabla"<<endl
				<<"0. Salir"<<endl
				<<"\nEscoja una opcion: ";
			cin>>opc;
		}
