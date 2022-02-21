/*
   Proposito: Ejercicio 19 - Do while

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

    int a = 2;
    int b = 10;
    
    while (a > b){
    	cout << " (while) a > b " << endl;
    	break;
	}
	
	do{
	   cout << " (do while) a > b " << endl;
    	break;	
	} while (a > b);

	return 0;
}

