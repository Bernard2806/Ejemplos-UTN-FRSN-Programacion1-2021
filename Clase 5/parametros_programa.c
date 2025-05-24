#include <stdio.h>

int main(int argc, char const *argv[])
{
  // argc: cantidad de argumentos pasados al programa (incluyendo el nombre del programa)
  // argv: array de cadenas con cada argumento (argv[0] es el nombre del programa)

  printf("Cantidad de parametros: %d\n", argc);

  // argv[1] sería el primer argumento pasado al programa (después del nombre)
  // Pero antes de usarlo, debemos verificar que exista para evitar errores
  if (argc > 1)
  {
    printf("Primer parametro: %s\n", argv[1]);
  }
  else
  {
    printf("No se proporciono ningun parametro adicional.\n");
  }

  return 0;
}