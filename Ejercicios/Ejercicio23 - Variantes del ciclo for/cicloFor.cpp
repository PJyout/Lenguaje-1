/*
   Proposito: Ejercicio 23 - Variantes del cilo for

   Autor: Luis Alonzo Rápalo
   Fecha: 15/2/2022
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);

    for (int i = 0; i < 10; i++)
    {
    	cout << i << " "; 	
	}
	
	cout << endl;
	cout << endl;
	
	for (int i = 9; i >= 0; i--)
    {
    	cout << i << " "; 	
	}
	
	cout << endl;
	cout << endl;
	
	for (int i = 0; i < 10000; i++)
    {
    	cout << i << " "; 	
    	if (i == 115)
    	{
    		break;
		}
	}
	
	cout << endl;
	cout << endl;
	
	for (int i = 0; i < 10; i++)
    { 	
    	if (i == 5 || i == 7)
    	{
    		continue;
		}
		cout << i << " ";
	}

	return 0;
}

