#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
no siempre es posible conocer con antelación a la ejecución
cuanta memoria se debe reservar al programa. En C, se asigna memoria en el
momento de la ejecución en el montículo o montón (heap), mediante las
funciones malloc(), realloc(), calloc() y free()

biblioteca estandar <stdlib.h>

puntero = (tipo*)malloc (tamaño) ;


*/


int main(int argc, char const *argv[])
{
  int asignatura[40];  // reserva 40 enteros, un número fijo de elementos.

  int cant_elementos; 
  scanf ("%d", &cant_elementos) ;
  int asignatura2[cant_elementos] ; 
  // si bien este ejemplo no da error, no estaría del todo correcto. 

  // // para los casos cuando no conozcamos de ante mano necesitamos hacerlo en tiempo de ejecucion: 

  // // asignar memoria:
  // // tipo *puntero;
  // // puntero =(tipo *) malloc(tamaño en bytes);
  int *pi;
  pi = (int*) malloc(cant_elementos*sizeof(int)) ;  // reservar memoria para un buffer de 10 enteros
  int a[] = {9, 8, 7, 6, 0, 1, 2, 3, 4, 5};
  pi = a; // &
  printf("array %d\n", pi[3]);
  printf("array %d\n", a[5]);
  // int aux = 4 * sizeof(int);
  printf("puntero %d\n", *(pi+3) );
  printf("puntero %d\n", *(a+5) );
  free(pi); 

  char *sArr = (char*) malloc(10*sizeof(char));
  printf("Ingresar palabra: ");
  scanf("%s", sArr); 

  printf("3ra letra: %c", sArr[2]);
  
  free(sArr); 

  return 0;
}
