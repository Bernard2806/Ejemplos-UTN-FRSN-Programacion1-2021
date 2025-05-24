#include <stdio.h>

int main()
{
  int n;            // variable para guardar el tamaño en bytes
  char valor = 356; // Asignación de un valor que excede el rango de un char con signo

  // Mostrar el tamaño de un 'char' en bytes
  n = sizeof(char);
  printf("un char ocupa: %d bytes\n", n);

  // Mostrar el tamaño de un 'int' en bytes
  n = sizeof(int);
  printf("un int ocupa: %d bytes\n", n);

  // Mostrar el tamaño de la variable 'valor' (que es char)
  n = sizeof(valor);
  printf("un valor ocupa: %d bytes\n", n);

  // Mostrar el contenido de 'valor'
  printf("%d\n", valor);

  return 0;
}
