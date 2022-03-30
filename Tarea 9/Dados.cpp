#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
	int dado1, dado2, opcion = 0;
 	srand (time(NULL));
 	
 while(true)
 {
 	system("cls");
 	cout << " ------------------- " << endl;
 	cout << " JUGADA DE DOS DADOS " << endl;
 	cout << " ------------------- " << endl;
 	cout << endl;
 	system("pause");
 	cout << endl;
    cout << endl;
	
	for (int i = 0; i < 1; i++)
	{
 	dado1 = rand() % 6 + 1;
 	cout << " El resultado del dado 1 es: " << dado1 << endl;
 	}

 	cout << endl;
 	
 	for (int x = 0; x < 1 ; x++)
	{
 	    dado2 = rand() % 6 + 1;
       	cout << " El resultado del dado 2 es: " << dado2 << endl;
       	cout << endl;
       	cout << endl;
 	}
 	
    cout << " ¿Desea intentar otra jugada? 1.sí  0.no " << endl;
 	cin >> opcion;
 	 
 	if (opcion == 0)
	 {
	 	system("cls");
	 	cout << " Gracias por jugar :) " << endl;
	 	break;
	 }	
   } 
 	return 0;
}
