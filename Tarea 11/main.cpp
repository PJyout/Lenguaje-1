#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "archivos.h"

using namespace std;

void arreglo();
int generaAleatorio(int limInferior, int limSuperior);

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
	srand(time(NULL));
    arreglo();

	return 0;
}




