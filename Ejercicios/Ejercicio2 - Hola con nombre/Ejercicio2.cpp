/*
   Proposito: Ejercicio 2

   Autor: Luis Alonzo Rápalo
   Fecha: 9/2/2022
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);
    
    string nombre;
    
    cout << " Ingrese el nombre: ";
    cin >> nombre;
    
    cout << endl;
    cout << " Su nombre es: " << nombre;
    cout << endl;
    
	return 0;
}

