#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int numero = 0;
  
  //inicializa el numero random
  srand(time(NULL));

  for (int i; i < 20; i++)
  {
  	
  //genera un numero entre 1 y 10 11
  numero = rand() % 20 + 1;
  cout << " Numero al azar: " << numero << endl;
  
  }
  return 0; 
}
