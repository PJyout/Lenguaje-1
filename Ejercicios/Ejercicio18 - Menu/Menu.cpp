/*
   Proposito: Ejercicio 18 - Menu

   Autor: Luis Alonzo Rápalo
   Fecha: 15/2/2022
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);

    int opcion = 0;
    
    while(true){
    	system("cls");
    	cout << "****" << endl;
    	cout << "MENU" << endl;
    	cout << "****" << endl;
    	
    	cout << endl;
    	cout << " 1 - Cafe y Granitas" << endl;
    	cout << " 2 - Reposteria " << endl;
    	cout << " 0 - Salir " << endl;
    	
    	cout << " Ingrese una opcion del menu: " << endl;
    	cin >> opcion;
    	
    	if (opcion == 1){
    		system("cls");
    		cout << " Estas en el menu de cafe y granitas." << endl;
			system("pause");	
		}
    	
    	if (opcion == 2){
    		system("cls");
    		cout << " Estas en el menu de reposteria." << endl;	
    		system("pause");
		}
    	
    	if (opcion == 0){
    		break;
		} 	
	}

    cout << endl;
    cout << " Saliste del sistema. ";

	return 0;
}

