#include <stdio.h>

int main()
{
  // Abrir el archivo en modo escritura (crea o trunca el archivo)
  FILE *arch = fopen("DEMO.dat", "w");
  if (arch == NULL)
  {
    perror("Error al abrir el archivo");
    return 1; // Salir con error
  }

  char c;
  int size = sizeof(char);

  // Escribo una 'A'
  c = 'A';
  fwrite(&c, size, 1, arch);

  // Escribo una 'B'
  c = 'B';
  fwrite(&c, size, 1, arch);

  // Escribo una 'C'
  c = 'C';
  fwrite(&c, size, 1, arch);

  // Cierro el archivo
  fclose(arch);

  return 0;
}