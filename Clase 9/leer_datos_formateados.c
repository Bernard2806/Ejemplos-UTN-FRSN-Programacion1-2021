#include <stdio.h>

// Programa que lee datos formateados (nombre, altura y edad) desde un archivo usando fscanf.

int main()
{
  FILE *arch = fopen("texto_c9e7.txt", "r");
  if (arch == NULL)
  {
    perror("No se pudo abrir el archivo");
    return 1;
  }

  char nombre[11];
  float altura;
  int edad;

  // fscanf devuelve la cantidad de variables que logró leer correctamente
  while (fscanf(arch, "%10s %f %d", nombre, &altura, &edad) == 3)
  {
    printf("%s, %.2f, %d\n", nombre, altura, edad);
  }

  fclose(arch);
  return 0;
}