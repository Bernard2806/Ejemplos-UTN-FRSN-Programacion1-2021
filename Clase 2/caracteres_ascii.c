#include <stdio.h> // Librería para entrada/salida (printf, etc.)

int main()
{
  // Asigno a la variable 'c' el carácter 'A', que en ASCII tiene valor 65
  char c = 'A';
  printf("Como caracter: %c \n", c);       // Imprime el carácter: A
  printf("Valor numerico ASCII: %d\n", c); // Imprime el código ASCII del carácter (65)

  // Asigno a la variable 'i' el número entero 165
  int i = 165;
  printf("Como entero: %c \n", i);         // Imprime el carácter que corresponde al código ASCII 165 (puede ser un símbolo raro)
  printf("Valor numerico ASCII: %d\n", i); // Imprime el número 165

  return 0; // Finaliza el programa devolviendo 0 (todo bien)
}
