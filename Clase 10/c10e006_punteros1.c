#include <stdio.h>
/*
Existen dos maneras de pasar argumentos a una función: mediante llamadas por valor y mediante llamadas por
referencia. Todos los argumentos de C se pasan por valor.

Muchas funciones requieren la capacidad de modificar
una o más variables en la llamada de la función, o pasar un apuntador a un objeto grande para evitar la sobrecarga
de pasar objetos por valor (lo que provoca la sobrecarga de hacer copias del objeto). Para estos propósitos,
C proporciona las capacidades para simular las llamadas por referencia.

En C, los programadores utilizan apuntadores y el operador de indirección para simular las llamadas por referencia.
*/

// Eleva al cubo una variable mediante una llamada por valor 

int cuboPorValor(int n); /* prototipo */

int main()
{
  int numero = 5; /* inicializa numero */
  printf( "El valor original de numero es % d", numero);

  /* pasa numero por valor a cuboPorValor */
  numero = cuboPorValor(numero);

  printf( "\nEl nuevo valor de numero es % d\n", numero);

  return 0; /* indica terminación exitosa */

} /* fin de main */

/* calcula y devuelve el cubo de un argumento entero */
int cuboPorValor(int n)
{
  return n * n * n; /* eleva al cubo la variable local n y devuelve resultado */

} /* fin de la función cuboPorValor */
