#include <iostream>

using namespace std;

void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system("cls");
	
	int opcionProducto = 0;
	
	switch (opcion)
	{
	case 1:
	{
	    	cout << "BEBIDAS CALIENTES" << endl;
	    	cout << "*****************" << endl;
	    	cout << "1 - Capuccino" << endl;
	    	cout << "2 - Expresso" << endl;
	    	cout << endl;
	    	
	    	cout << "Ingrese una opcion: " << endl;
	    	cin >> opcionProducto;
	    	
			switch (opcionProducto)
			{
			case 1:
				agregarProducto("1 Capuccino - L 40.00", 1, 40);
				break;	
			case 2:
				agregarProducto("1 Expresso - L 30.00", 1, 30);
				break;		
			default:
				{
			    	cout << "Opcion no valida";
			    	return;
			    	break;
				}
			}
		}
	    cout << endl;
		cout << "Producto agregado" << endl << endl;
		system("pause");
		
	    break;
	    
	case 2:
		{
	    	cout << "BEBIDAS FRIAS" << endl;
	    	cout << "*************" << endl;
	    	cout << "1 - Granita de cafe" << endl;
	    	cout << "2 - Licuado de cereal" << endl;
	    	cout << "3 - Limonada" << endl;
	    	cout << endl;
	    	
	    	cout << "Ingrese una opcion: " << endl;
	    	cin >> opcionProducto;
	    	
			switch (opcionProducto)
			{
			case 1:
				agregarProducto("1 Granita de cafe - L 40.00", 1, 40);
				break;
			case 2:
				agregarProducto("1 Licuado de cereal - L 30.00", 1, 30);
				break;	
			case 3:
				agregarProducto("1 Limonada - L 25.00", 1, 25);
				break;	
			default:
				{
			    	cout << "Opcion no valida";
			    	return;
			    	break;
				}
			}
		}
		cout << endl;
		cout << "Producto agregado" << endl << endl;
		system("pause");
		
		break;

	case 3:
		{
	    	cout << "REPOSTERIA" << endl;
	    	cout << "**********" << endl;
	    	cout << "1 - Pudding de chocolate" << endl;
	    	cout << "2 - Chocoflan" << endl;
	    	cout << "3 - Brownie" << endl;
	    	cout << endl;
	    	
	    	cout << "Ingrese una opcion: " << endl;
	    	cin >> opcionProducto;
	    	
			switch (opcionProducto)
			{
			case 1:
				agregarProducto("1 Pudding de chocolate - L 25.00", 1, 25);
				break;
			case 2:
				agregarProducto("1 Chocoflan - L 30.00", 1, 30);
				break;	
			case 3:
				agregarProducto("1 Brownie - L 20.00", 1, 20);
				break;	
			default:
				{
			    	cout << "Opcion no valida";
			    	return;
			    	break;
				}
			}
		}
		cout << endl;
		cout << "Producto agregado" << endl << endl;
		system("pause");
		
		break;
	}
}
