#include <stdio.h>
/*
Los punteros/apuntadores son variables cuyos valores son direcciones de memoria. Por lo general, una variable contiene
directamente un valor específico. Por otro lado, un apuntador contiene la dirección de una variable que
contiene un valor específico. En este sentido, el nombre de una variable hace referencia directa a un valor, y
un apuntador hace referencia indirecta a un valor. Al proceso de referenciar a un valor a través de un
apuntador se le llama indirección.

Los apuntadores deben inicializarse en el momento en que se definen o en una instrucción de asignación.
Un apuntador puede inicializarse en 0, NULL o en una dirección. Un apuntador con el valor NULL, apunta a nada.
NULL es una constante simbólica definida en el encabezado <stddef.h>

El valor 0 es el único valor entero que puede asignarse de manera directa a la variable de apuntador.

*/

int main()
{
  int y = 5;
  int *ptrY;

  ptrY = &y;

  int a;     /* a es un entero */
  int *ptrA; /* ptrA es un apuntador a un entero */

  a = 7;
  ptrA = &a; /* ptrA toma la dirección de a */

  // %p  : direccion de memoria (puntero)
  printf("La direccion de a es %p \nEl valor de ptrA es %p", &a, ptrA);

  printf("\n\nEl valor de a es %d \nEl valor de *ptrA es %d", a, *ptrA);

  printf("\n\nMuestra de que * y & son complementos uno del otro\n&*ptrA = %p \n*&ptrA = %p\n", &*ptrA, *&ptrA);

  return 0;
}
