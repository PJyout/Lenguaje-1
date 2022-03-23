#include <iostream>
#include <math.h>
#include "funcionRaiz.h"

using namespace std;

void raizCuadrada()
 {
 	setlocale(LC_CTYPE, "Spanish");
 	
 	int opcion = 0;
 	
 	while (true)
 	{
    
	double numero = 0;
    double raizCuadrada = 0;
    
    system("cls");
    cout << " --------------------------- " << endl;
    cout << " DETERMINAR LA RAIZ CUADRADA " << endl;
    cout << " --------------------------- " << endl;
    cout << endl;
    cout << endl;
    cout << "Ingrese un numero: ";
    cin >> numero;

    raizCuadrada = sqrt(numero); 

    cout << endl;
    cout << "La raiz cuadrada de " << numero << " es: " << raizCuadrada;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << " ¿Desea ingresar otro numero? 1.sí  0.no " << endl;
    cin >> opcion;
    
    if (opcion == 0)
    {
    break;
    }
    
  }
   	
}




