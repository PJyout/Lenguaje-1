/*
   Proposito: Ejercicio 16 - Ciclos While

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

    int a = 5;
    int b = 2;
    
    while (a > b){
    	cout << " Ingrese el valor de A: " << endl;
    	cin >>a;
	}
    
    cout << endl;
    cout << " Saliste del ciclo ";
    
	return 0;
}

