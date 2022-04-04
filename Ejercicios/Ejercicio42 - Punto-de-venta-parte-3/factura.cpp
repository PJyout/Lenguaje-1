#include <iostream>

using namespace std;

double subTotal;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
   listaProductos = listaProductos + descripcion + '\n';
   subTotal = subTotal + (cantidad * precio);		
}
