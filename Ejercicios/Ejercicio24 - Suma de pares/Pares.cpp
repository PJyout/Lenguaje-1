/*
   Proposito: Ejercicio 24 - Suma de pares

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
  
    int pares = 0;
    
    for (int i = 1; i <= 10; i++)
    {
    	if (i % 2 == 0 ){
    		pares = pares + i;		
		}
    	cout << i << " ";	
	}
	
	cout << endl;
    cout << endl;
    cout << " Total pares: " << pares;

	return 0;
}

