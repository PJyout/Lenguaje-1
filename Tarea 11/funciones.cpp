#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "archivos.h"

using namespace std;

int filas = 5;
int columnas = 5;
int suma = 0;
int opcion = 0;
int arregloBidi [5][5];
void arreglo();
int generaAleatorio(int limInferior, int limSuperior);

void arreglo(){	
    while(true){
    	
	system ("cls");
	cout << " Arreglo bidimensional 5x5 " << endl;
	cout << " ------------------------- " << endl;
	cout << endl;
	
	for(int i = 0; i < filas; i++)
	{
	    for(int j = 0; j < columnas; j++)
		{
	    	arregloBidi[i][j] = generaAleatorio(10,100); //Genera valores random entre 10 y 100
	    	cout << "[" << arregloBidi[i][j] << "]" ;   
			suma = suma + arregloBidi[i][j];
		}
		 cout << endl;	
	}	
	cout << endl;
    cout << "Total de la suma: " << suma << endl;	
    cout << endl;
    cout << endl;
    cout << "¿Desea intentar otra vez? 1.Sí  0. No " << endl;
    cin >> opcion;
    if(opcion == 0){
    	break;
	}
  }
}

//Función para generar valores random
int generaAleatorio(int limInferior, int limSuperior){
	int aleatorio;
	aleatorio = limInferior + rand() % (limSuperior + 1 - limInferior);
	return aleatorio;
}
