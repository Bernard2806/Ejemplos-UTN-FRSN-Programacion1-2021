#include <stdio.h>
# define NUMELTS 100

// Clase 8 - ejercicio 3 
// repaso: array 

int main(int argc, char const *argv[])
{
  int a[100];  // array unidimencional: es un conjunto finito y ordenado de elementos homogeneos. 
  // finito: hay una cantidad especifica de elementos. 
  // ordenado: los elementos estan almacenados juntos uno a continuacion de otro en memoria. 
  // homogeneo: todos los elementos son del mismo tipo. 

  // operaciones basicas sobre arrays: 
  //  - almacenamiento
  //  - extraccion 

  // antes de asignarle un valor a un elemento de un array, no tiene un valor definido y por lo tanto no es valido referirse a él en una expresion. 
  // antes de hacer una extraccion, los elementos deben estar inicializados, deben tener un valor. 

  // limite inferior: en C siempre es 0 
  // limite superior: 
  // cantidad de elementos: o rango = lim_sup - lim_inf + 1.
  // NOTA: no puede cambiarse los limites ni el rango durante la ejecucion de un programa. 

  // tecnicamente esto no sería correcto: 
  int cantidad = 0;
  printf("cantidad de elementos del array: \n");
  scanf("%d", &cantidad);
  int arrays[cantidad]; 


  // recorre e inicializa array de enteros en 0
  for(int i=0; i<100; a[i++]=0) ; 

  // otra forma 
  int b[NUMELTS];
  for(int i=0; i<NUMELTS; b[i++]=0);


  return 0;
}
