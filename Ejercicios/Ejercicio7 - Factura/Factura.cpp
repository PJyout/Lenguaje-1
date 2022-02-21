/*
   Proposito: Ejercicio 7 - Factura

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
    double subTotal = 0;
    double total= 0;
    double impuesto = 0.15;
    
    cout << " Ingrese el subtotal de la factura ";
    cin >> subTotal;
    
    // Proceso
    
    total = subTotal + (subTotal * 0.15);
    
    // Salida
    
    cout << endl;
    cout << " Total a pagar es: " << total;
    	
	return 0;
}

