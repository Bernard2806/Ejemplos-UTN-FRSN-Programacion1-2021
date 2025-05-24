#include <stdio.h>

// Programa que muestra cómo manejar argumentos pasados por línea de comandos.
// argc: cantidad de argumentos recibidos, incluyendo el nombre del programa.
// argv: array de cadenas que contiene los argumentos, argv[0] es el nombre del programa.

int main(int argc, char const *argv[])
{
  // Imprime la cantidad total de argumentos recibidos.
  printf("Cantidad de argumentos/parametros: %d\n", argc);

  // Imprime el nombre del programa (siempre está en argv[0]).
  printf("Nombre del programa: %s\n", argv[0]);

  // Se espera exactamente un argumento adicional (argc == 2)
  if (argc == 2)
  {
    // Imprime el argumento ingresado
    printf("El argumento ingresado es %s\n", argv[1]);
  }
  else if (argc > 2)
  {
    // Más de un argumento adicional, muestra mensaje de error.
    printf("Demasiados argumentos.\n");
  }
  else
  {
    // No se ingresó ningún argumento adicional, muestra mensaje informativo.
    printf("Solo 1 argumento es esperado.\n");
  }

  return 0;
}