/*
   Proposito: Ejercicio 6 - calculadora

   Autor: Luis Alonzo Rápalo
   Fecha: 30/01/2020
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);

   int numero1, numero2, resultado = 0;
   int suma, resta, division, multiplicacion = 0;
   
   cout << " Ingrese un numero " << endl;
   cin >> numero1;
   cout << " Ingrese otro numero " << endl;
   cin >> numero2;
   
   suma = numero1 + numero2;
   resta = numero1 - numero2;
   division = numero1 / numero2;
   multiplicacion = numero1 * numero2;
   
   cout << " La suma de ambos numero es " << suma << endl;
   cout << " La resta de ambos numero es " << resta << endl;
   cout << " division de ambos numero es " << division << endl;
   cout << " La multiplicacion de ambos numero es " << multiplicacion << endl;
   

	return 0;
}

