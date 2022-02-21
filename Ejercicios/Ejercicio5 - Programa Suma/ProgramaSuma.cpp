/*
   Proposito: Ejercicio 5 - Programa suma

   Autor: Luis Alonzo Rápalo
   Fecha: 13/2/2022
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);
    
    // Datos de entrada
    int a = 0;
    int b = 0;
    int resultado = 0;
    
    cout << " Ingrese el valor de a: ";
    cin >> a;
    
    cout << " Ingrese el valor de b: ";
    cin >> b;
    
    // Proceso
    resultado = a + b;
    
    // Salida
    cout << endl;
    cout << " La suma de a + b es: " << resultado;
    
	return 0;
}

