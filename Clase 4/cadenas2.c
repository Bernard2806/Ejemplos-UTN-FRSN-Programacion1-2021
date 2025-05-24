#include <stdio.h>

int main()
{
  // Declaro un arreglo de 10 chars y lo inicializo con "Pablo"
  // Como "Pablo" tiene 5 letras + '\0', queda espacio libre en el arreglo
  char s[10] = "Pablo";

  // Declaro un arreglo de chars sin tamaño fijo, se ajusta al tamaño de "Juan" + '\0'
  char t[] = "Juan";

  // Declaro un arreglo de 10 chars y lo inicializo con todos ceros (todo '\0')
  char w[10] = {0};

  // Imprimo cada string entre corchetes para ver bien el contenido
  printf("s = [%s]\n", s); // Muestra "Pablo"
  printf("t = [%s]\n", t); // Muestra "Juan"
  printf("w = [%s]\n", w); // Como está vacío (todos '\0'), no muestra nada visible

  printf("\n");

  return 0;
}