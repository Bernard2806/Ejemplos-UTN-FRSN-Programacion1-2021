#include <stdio.h>

// Programa que escribe tres caracteres ('A', 'B' y 'C') en un archivo binario

int main()
{
  // Abro el archivo DEMO.dat en modo binario de escritura y lectura ("w+b")
  FILE *arch = fopen("DEMO.dat", "w+b");

  if (arch == NULL)
  {
    perror("No se pudo abrir el archivo");
    return 1;
  }

  char c;

  // Escribo la letra 'A'
  c = 'A';
  fwrite(&c, sizeof(char), 1, arch);

  // Escribo la letra 'B'
  c = 'B';
  fwrite(&c, sizeof(char), 1, arch);

  // Escribo la letra 'C'
  c = 'C';
  fwrite(&c, sizeof(char), 1, arch);

  // Cierro el archivo
  fclose(arch);

  return 0;
}