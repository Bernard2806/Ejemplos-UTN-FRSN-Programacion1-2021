#include <stdio.h>
#include <string.h>

// Programa que lee y muestra línea por línea el contenido de un archivo usando fgets.

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    fprintf(stderr, "Uso: %s <nombre_del_archivo>\n", argv[0]);
    return 1;
  }

  FILE *f1 = fopen(argv[1], "r");
  if (f1 == NULL)
  {
    perror("No se pudo abrir el archivo");
    return 1;
  }

  char linea[100];

  // mientras se pueda leer una línea correctamente
  while (fgets(linea, sizeof(linea), f1) != NULL)
  {
    printf("--> %s", linea);
  }

  fclose(f1);
  return 0;
}