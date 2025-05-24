#include <stdio.h>

// Creamos un alias para el tipo de dato 'int' y lo llamamos 'Entero'
typedef int Entero;

int main()
{
  // Declaramos una variable usando el alias 'Entero'
  Entero e = 5;

  // Mostramos el valor por pantalla
  printf("%d\n", e);

  return 0;
}