/*
   Proposito: Ejercicio 13 - Factura exenta.

   Autor: Luis Alonzo Rápalo
   Fecha: 4/02/2022
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);

    double subTotal, total, impuesto, calculoDescuento, calculoImpuesto = 0;
    char estaExenta;
    int descuento = 0;
    
    cout << " Ingrese el subtotal de la factura: ";
    cin >> subTotal;
    
    cout << " Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    
    cout << " ¿Su factura está exenta? Presione S o N: ";
    cin >> estaExenta;
    cout << endl;
    
    if (estaExenta == 'n' or estaExenta == 'N')
    {
    calculoDescuento = (subTotal * descuento) / 100;
    calculoImpuesto = (subTotal - calculoDescuento) * 0.15;
    total = subTotal - calculoDescuento + calculoImpuesto;
    cout << " El total a pagar es: " << total << endl;
    }
    else 
    {
    calculoDescuento = (subTotal * descuento) / 100;
    total = subTotal - calculoDescuento;
    cout << " El total a pagar es: " << total << endl;
    }
    
	return 0;
}

