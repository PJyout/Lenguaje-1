#include <iostream>

using namespace std;

extern void productos(int opcion);
extern void imprimirFactura();
void menu()
{
	int opcion = 0;
    
    while(true)
    {
    	system("cls");
    	 
    	cout << "****" << endl;
    	cout << "MENU" << endl;
    	cout << "****" << endl;
    	cout <<endl;
    	
    	cout << " 1 - Bebidas calientes " << endl;
    	cout << " 2 - Bebidas frias " << endl;
        cout << " 3 - Reposteria " << endl;
        cout << " 4 - Imprimir factura " << endl;
        cout << " 0 - Salir " << endl;
        
        cout <<endl;
        cout << "Ingrese una opcion: " << endl;
    	cin >> opcion;
    	
    	if (opcion == 0)
    	{
    		break;
		}
		if (opcion == 4)
		{
			imprimirFactura();
		} else {
		    productos(opcion);	
		}
	}

}
