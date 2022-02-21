/*
   Proposito: Ejercicio 4 - Imprimir todas las variables

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

    bool valorBoolean;
    valorBoolean = false;
    
    int valorEntero = 15;
    double valorDouble = 20.99;
    string valorString = "Hola como estan";
    char valorChar = 'B';
    
    cout << " Valor Boolean: " << valorBoolean << endl;
    cout << " Valor Entero: " << valorEntero << endl;
    cout << " Valor Double: " << valorDouble << endl;
    cout << " Valor String: " << valorString << endl;
    cout << " Valor Char: " << valorChar << endl;
    
	return 0;
}

