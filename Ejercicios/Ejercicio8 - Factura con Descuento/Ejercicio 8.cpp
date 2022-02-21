/*
   Proposito: Ejercicio 8 - Factura con descuento

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
    
    //Datos de entrada
    double subTotal, total, impuesto, calculoDescuento, calculoImpuesto = 0;
    int descuento = 0;
    
    cout << " Ingrese el subtotal de la factura: ";
    cin >> subTotal;
    
    cout << " Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    
    // Proceso
    calculoDescuento = (subTotal * descuento) / 100;
    calculoImpuesto = (subTotal - calculoDescuento) * 0.15;
    total = subTotal - calculoDescuento + calculoImpuesto;
    
    // Salida
    cout << endl;
    cout << " El total a pagar es: " << total << endl;
    
	return 0;
}

