/*
   Proposito: Tarea 3 - Notas Completas

   Autor: Luis Alonzo Rápalo
   Fecha: 9/2/2020
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);

    int nota = 0;
    
    cout << " Ingrese la nota obtenida: " ;
    cin >> nota;
    
    if ( nota < 0 or nota > 100 ) {
         cout << " iNGRESE UNA NOTA ENTRE 0 y 100 ";
         return 0; 
    }
    
    if ( nota >= 96 && nota <= 100 ) {
         cout << " Obtuviste una A++ ";
    }
    
    if ( nota >= 91 && nota <= 95 ) {
         cout << " Obtuviste una A+ ";
    }
    
    if ( nota >= 86 && nota <= 90 ) {
         cout << " Obtuviste una A ";
    }
    
    if ( nota >= 81 && nota <= 85 ) {
         cout << " Obtuviste una A- ";
    }
    
    if ( nota >= 76&& nota <= 80 ) {
         cout << " Obtuviste una B+ ";
    }
    
    if ( nota >= 71 && nota <= 75 ) {
         cout << " Obtuviste una B ";
    }
    
    if ( nota >= 66 && nota <= 70) {
         cout << " Obtuviste una B- ";
    }
    
    if ( nota >= 61 && nota <= 65 ) {
         cout << " Obtuviste una C+ ";
    }
    
    if ( nota >= 56 && nota <= 60 ) {
         cout << " Obtuviste una C ";
    }
    
    if ( nota >= 51 && nota <= 55 ) {
         cout << " Obtuviste una C- ";
    }
    
    if ( nota >= 46 && nota <= 50 ) {
         cout << " Obtuviste una D+ ";
    }
    
    if ( nota >= 41 && nota <= 45 ) {
         cout << " Obtuviste una D ";
    }
    
    if ( nota >= 36 && nota <= 40 ) {
         cout << " Obtuviste una D- ";
    }
    
    if ( nota >= 31 && nota <= 35 ) {
         cout << " Obtuviste una E+ ";
    }
    
    if ( nota >= 26 && nota <= 30 ) {
         cout << " Obtuviste una E ";
    }
    
    if ( nota >= 21 && nota <= 25 ) {
         cout << " Obtuviste una E- ";
    }
    
    if ( nota >= 16 && nota <= 20 ) {
         cout << " Obtuviste una F+ ";
    }
    
    if ( nota >= 11 && nota <= 15 ) {
         cout << " Obtuviste una F ";
    }
    
    if ( nota >= 6 && nota <= 10 ) {
         cout << " Obtuviste una F ";
    }
    
    if ( nota >= 1 && nota <= 5 ) {
         cout << " Obtuviste una F- ";
    }
    
    if ( nota == 0 ) {
         cout << " Obtuviste una F-- ";
    }
    
    
	return 0;
}

