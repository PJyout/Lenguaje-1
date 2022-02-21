/*
   Proposito: Ejercicio 25 - Suma de pares

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
    int impares = 0;
    int total = 0;
    
    for (int i = 1; i <= 10; i++)
    {
    	if (i % 2 == 0 ){
    		pares = pares + i;		
		}
    	else
		   impares = impares + i;				
	}
	
	total = pares + impares;
	
	cout << " La suma de los pares es: " << pares << endl;
	cout << " La suma de los impares es: " << impares << endl;   
    cout << " La suma de ambos es: " << total << endl;		



	return 0;
}

