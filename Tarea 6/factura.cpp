#include <iostream>

using namespace std;

double subTotal;
double impuesto;
double total;
string listaProductos;



void agregarProducto(string descripcion, int cantidad, double precio)
{
   listaProductos = listaProductos + descripcion + '\n';
   subTotal = subTotal + (cantidad * precio);	
   impuesto = subTotal * 0.15;
   total = subTotal + impuesto;	
}

void imprimirFactura()
{
	system("cls");
	cout << "*******" << endl;
	cout << "FACTURA" << endl;
	cout << "*******" << endl;
	cout << endl;
	
	cout << "Productos: " << endl;
	cout << endl;
	cout << listaProductos;
	
	cout << endl;
	cout << "Subtotal: " << subTotal << " Lempiras" << endl;
	cout << "Impuesto: " << impuesto << " Lempiras" << endl;
	cout << "total: " << total << " Lempiras" << endl;
	cout << endl;
	cout << endl;
	system("pause");
}
