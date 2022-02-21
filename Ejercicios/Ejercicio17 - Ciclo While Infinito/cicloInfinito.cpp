/*
   Proposito: Ejercicio 17 - Ciclo infinito

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
	
    int ciclos = 0;
    
    while(ciclos < 1000000){
    	cout << " a ";
    	
    	ciclos = ciclos + 1;
	}
   
	return 0;
}

