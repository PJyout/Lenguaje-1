#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "archivos.h"

using namespace std;
 
int filas = 10;
int asientos = 8;
int fila = 0;
int asiento = 0;
int salaCine [10][8];
int precioAsiento = 50;
double subTotal = 0;
double impuesto = 0;
int seleccion = 0;
int valorPelicula = 0;
string pelicula;
string listaProductos;
string descripcion;

void menu(){
	system("cls");
	
	cout << "---------Menu--------" << endl;
	cout << endl;
	cout << "1---Cartelera" << endl;
	cout << "2---Mostrar ocupacion de sala" << endl;
	cout << "3---Reservar asiento" << endl;
	cout << "4---Bebidas" << endl;
	cout << "5---Alimentos" << endl;
	cout << "6---Imprimir factura" << endl;
	cout << "7---Salir" << endl;
}

void mostrarSalaCine(){
	system("cls");
	
	cout << "--------Sala Normal---------\n";
	cout << endl;
	cout << "   (1)(2)(3)(4)(5)(6)(7)(8) \n";
	for(int i = 0; i < filas; i++){
		cout<<"("<<i+1<<")";
	    for(int j = 0; j < asientos; j++){
	    	cout << "[" << salaCine[i][j] << "]";
		}	
		cout << endl;
	}
	cout << endl;
}

void inicializarSalaCine(){
	for(int i = 0; i < filas; i++){
	    for(int j = 0; j < asientos; j++){
	    	//salaCine[i][j] = generaAleatorio(0,1);
		}	
	}	
	cout << endl;
		
}

bool reservarAsiento(int fila, int asiento){
	//system("cls");
	mostrarSalaCine();
	if (salaCine[fila][asiento] == 0){
	    salaCine[fila][asiento] = 1;
	    return true; 
	} else {
		cout << " Este asiento ya esta ocupado, seleccione otro. " << endl;
	}
	return false;
}

void reservar(){
	do{
		cout << endl;
		cout << "Ingrese la fila: ";
		cin >> asiento;
	    cout << "Ingrese el asiento: ";
	 	cin >> fila;
	 	fila--;
	 	asiento--;
			
		}while(reservarAsiento(fila, asiento) == false);
	    cout << " El asiento fue asignado exitosamente " << endl;
	    cout << endl;
}

//Para mostrar asientos ocupados random
int generaAleatorio(int limInferior, int limSuperior){
	int aleatorio;
	aleatorio = limInferior + rand() % (limSuperior + 1 - limInferior);
	return aleatorio;
}

void agregarProducto(string descripcion, int cantidad, double precio){
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio);
	
}

void bebidas(){		
    void agregarProducto(string descripcion, int cantidad, double precio);
            int opcionProducto = 0;
            
            system ("cls");
            cout << "====================" << endl;
			cout << "Bebidas Diamond Cine" << endl;
			cout << "====================" << endl;
			cout << endl;
	    	cout << "BEBIDAS DISPONIBLES" << endl;
	    	cout << "===================" << endl;
	    	cout << endl;
	    	cout << "1 - Agua en botella - L 39.00" << endl;
	    	cout << "2 - Refresco mediano - L 77.00" << endl;
	    	cout << "3 - Refresco grande - L 80.00" << endl;
	    	cout << endl;
	    	
	    	cout << "Ingrese una opcion: " << endl;
	    	cin >> opcionProducto;
	    	
			switch (opcionProducto)
			{
			case 1:
				agregarProducto("1 Agua en botella - L 39.00", 1, 39);
				break;	
			case 2:
				agregarProducto("1 Refresco mediano - L 77.00", 1, 77);
				break;	
			case 3:
				agregarProducto("1 Refresco grande - L 80.00", 1, 80);
				break;	
			default:
				{
			    	cout << "Opcion no valida" << endl;
			    	return;
			    	break;
			    	}
				}
			
		
	    cout << endl;
		cout << "Producto agregado" << endl << endl;
		cout << endl;
				
}

void alimentos(){
	void agregarProducto(string descripcion, int cantidad, double precio);
            int opcionProducto = 0;
            
            system ("cls");
        	cout << "======================" << endl;
			cout << "Alimentos Diamond Cine" << endl;
			cout << "======================" << endl;
			cout << endl;
	    	cout << "ALIMENTOS DISPONIBLES" << endl;
	    	cout << "=====================" << endl;
	    	cout << endl;
	    	cout << "1 - Nachos con queso - L 85.00" << endl;
	    	cout << "2 - Palomitas madianas - L 90.00" << endl;
	    	cout << "3 - palomitas grandes - L 95.00" << endl;
	    	cout << endl;
	    	
	    	cout << "Ingrese una opcion: " << endl;
	    	cin >> opcionProducto;
	    	
			switch (opcionProducto)
			{
			case 1:
				agregarProducto("1 Nachos con queso - L 85.00", 1, 85);
				break;
			case 2:
				agregarProducto("1 Palomitas medianas - L 90.00", 1, 90);
				break;	
			case 3:
				agregarProducto("1 Palomitas grandes - L 95.00", 1, 95);
				break;	
			default:
				{
			    	cout << "Opcion no valida" << endl;
			    	return;
			    	break;
				}
			}
		cout << endl;
		cout << "Producto agregado" << endl << endl;
		cout << endl;
			
}

void factura(){
	
     system("cls");
     cout << " ======= " << endl;
     cout << " Factura " << endl;
     cout << " ======= " << endl;
     cout << endl;
     
     cout << " ====================== " << endl;
     cout << " PELICULA SELECCIONADA: " << endl;
     cout << endl;
     cout << pelicula << endl;
     cout << endl;
     cout << " Subtotal en pelicula: " << valorPelicula << " L" << endl;
     cout << endl;
     cout << " ================== " << endl;
     cout << " ASIENTO RESERVADO: " << endl;
     cout << endl;
     cout << " Fila: " << asiento+1 << " Asiento: " << fila+1 << endl;
     cout << endl;
     cout << endl;
     
     cout << " =================== " << endl;
     cout << " MERIENDA ADQUIRIDA:" << endl;
     cout << endl;
     cout << listaProductos;	
     cout << endl;
     cout << "Subtotal en alimentos y bebidas: " << subTotal << " L " << endl;
     cout << endl;
     cout << endl;
     impuesto = (valorPelicula + subTotal) * 0.15;
     cout << " ============== " << endl;
     cout << " SUB TOTAL: " << valorPelicula + subTotal  << " L " << endl;
     cout << " ISV 15%: " << impuesto << " L " << endl;
     cout << " TOTAL A PAGAR: " << valorPelicula + subTotal + impuesto << " L " << endl;
     cout << endl;             
}

void cartelera(){
	system ("cls");
	cout << "======================" << endl;
	cout << "Cartelera Diamond Cine" << endl;
	cout << "======================" << endl;
	cout << endl;
	cout << " PELICULAS DISPONIBLES" << endl;
	cout << endl;
	cout << "======================" << endl;
	cout << " Precio: 75 L " << endl;
	cout << endl;
	cout << " 1 - Toy Story 3 (2010)" << endl;
	cout << " 2 - La red social (2010)" << endl;
	cout << " 3 - Ladrón de bicicletas (1948)" << endl;
	cout << " 4 - El padrino (1972)" << endl;
	cout << " 5 - Dawson City: Frozen Time (2016)" << endl;
	cout << endl;
	cout << "=========================" << endl;
	cout << " Precio: 110 L " << endl;
	cout << endl;
	cout << " 6 - Antes que sea tarde (2016)" << endl;
	cout << " 7 - El señor de los anillos: Las dos torres (2002)" << endl;
	cout << " 8 - Forrest Gump (1994)" << endl;
	cout << " 9 - El rey león (1994)" << endl;
	cout << "10 - Shrek (2001)" << endl;
	cout << endl;
	cout << " Ingrese el numero de su pelicula: ";
	cin >> seleccion;
	
	switch (seleccion){
		
		case 1: 
	      	pelicula = " Toy Story 3 (2010)";
	      	valorPelicula = 75;
	     	break;
		case 2: 
	      	pelicula = " La red social (2010) ";
	      	valorPelicula = 75;
	     	break;
	    case 3: 
	      	pelicula = " Ladrón de bicicletas (1948) ";
	      	valorPelicula = 75;
	     	break;
	    case 4: 
	      	pelicula = " El padrino (1972) ";
	      	valorPelicula = 75;
	     	break;
	    case 5: 
	      	pelicula = " Dawson City: Frozen Time (2016) ";
	      	valorPelicula = 75;
	     	break;
	    case 6: 
	      	pelicula = " Antes que sea tarde (2016) ";
	      	valorPelicula = 110;
	     	break;
	    case 7: 
	      	pelicula = " El señor de los anillos: Las dos torres (2002) ";
	      	valorPelicula = 110;
	     	break;
	    case 8: 
	      	pelicula = " Forrest Gump (1994) ";
	      	valorPelicula = 110;
	     	break;
	    case 9: 
	      	pelicula = " El rey león (1994) ";
	      	valorPelicula = 110;
	     	break;
	    case 10: 
	      	pelicula = " Shrek (2001) ";
	      	valorPelicula = 110;
	     	break;
	}
	cout << endl;
	system ("cls");
	cout << " Pelicula seleccionada exitosamente " << endl;
	cout << endl;	
}

	

