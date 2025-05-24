#include <stdio.h>

int main(int argc, char const *argv[])
{
  int longitud = 0; // Variable entera llamada 'longitud'
  int *pos;         // Declaración de un puntero a entero

  // Asignamos a 'pos' la dirección de memoria de 'longitud'
  pos = &longitud;

  // Explicación:
  // pos contiene la dirección de memoria de la variable 'longitud'
  // *pos nos permite acceder al contenido almacenado en esa dirección, es decir, al valor de 'longitud'

  // Cambiamos el valor de 'longitud' a través del puntero
  *pos = 44;
  printf("longitud = %d\n", longitud); // Imprime 44
  printf("*pos = %d\n\n", *pos);       // También imprime 44 porque *pos accede a 'longitud'

  // Cambiamos directamente el valor de 'longitud'
  longitud = 49;
  printf("longitud = %d\n", longitud); // Imprime 49
  printf("*pos = %d\n", *pos);         // También imprime 49 porque *pos sigue apuntando a 'longitud'

  return 0;
}