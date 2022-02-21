/*
   Proposito: Ejercicio 20 - Switch

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

    cout << " Ingrese una opcion: ";
    cin >> opcion;
    
    switch (opcion)
	{
	case 1:
		cout << " Escogiste la opcion 1 " << endl;
    	break;
    case 2:
		cout << " Escogiste la opcion 2 " << endl;
    	break;	
    case 3:
		cout << " Escogiste la opcion 3 " << endl;
    	break;	
    	
    default:
    	cout << " Ingrese una opcion entre 1 y 3 " << endl;
    	break;
	}

	return 0;
}

