#include <stdio.h>
#include <string.h>

// Programa que escribe líneas ingresadas por el usuario en un archivo.
// Usa fprintf para escribir cada línea precedida por un número de línea.

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    fprintf(stderr, "Uso: %s <nombre_del_archivo>\n", argv[0]);
    return 1;
  }

  FILE *f1 = fopen(argv[1], "w+");
  if (f1 == NULL)
  {
    perror("No se pudo abrir el archivo");
    return 1;
  }

  char linea[100];
  int i = 0;

  printf("--> ");
  fgets(linea, sizeof(linea), stdin);
  linea[strcspn(linea, "\n")] = '\0'; // quitar el salto de línea

  while (strcmp(linea, "FIN") != 0)
  {
    // Escribimos el número de línea y la línea al archivo
    fprintf(f1, "%d, %s\n", i++, linea);

    printf("--> ");
    fgets(linea, sizeof(linea), stdin);
    linea[strcspn(linea, "\n")] = '\0'; // quitar el salto de línea
  }

  fclose(f1);

  return 0;
}