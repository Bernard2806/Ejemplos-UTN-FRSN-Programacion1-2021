#include <stdio.h>

void suma1PorValor(int);
void suma1PorRef(int*);

int main()
{
  int x = 10; 
  int y = 5; 
  printf("X= %d \n", x); 

  // pasar por valor 
  suma1PorValor(x); 
  printf("X= %d \n", x); 

  // pasar por referencia 
  suma1PorRef(&x); 
  printf("X= %d \n", x); 

  return 0; 
}

void suma1PorValor(int x)
{
	//x = x + 1;
	x++;
	printf("en funcion x1 = %d \n", x);
	return; 
}

void suma1PorRef(int *x)
{
	*x = *x + 1;
  printf("en funcion x1 = %d \n", x);
	// ++*x;
  // *x++;
	//return; 
}
