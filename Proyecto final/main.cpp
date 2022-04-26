#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "archivos.h"

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);
	
    srand(time(NULL));
	int continuar, cancelar = 0;
	int opcionElegida = 0;
    int seleccion = 0;
	inicializarSalaCine();
	
	cout << "=========================" << endl;
	cout << "Bienvenido a Diamond Cine" << endl;
	cout << "=========================" << endl;
	cout << endl;
	system("pause");
	
	while(true){
		menu();
		cout << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcionElegida;	
		
		switch(opcionElegida)
		{
			case 1: 
				cartelera();
			    break;
			case 2: 
				mostrarSalaCine();
			    break;
			    
			case 3:
				mostrarSalaCine();
				reservar();
			    break;	
			    
			case 4:
				bebidas();
				break;	
					
			case 5:
			    alimentos();
				break;	
				
			case 6: 
		        factura();
			    break;  
		
		  	case 7:
		  		cout << endl;
		    	cout << " Saliendo del sistema...\n";
			   return 0;
			   
			default:
				cout << endl;
				cout << " Opcion no valida\n";	
	    }	
	        system("pause"); 	
			 
	}
	     
return 0;
	
}




























