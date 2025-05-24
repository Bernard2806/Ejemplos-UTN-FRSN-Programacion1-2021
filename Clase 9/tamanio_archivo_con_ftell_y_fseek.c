#include <stdio.h>

/*
 * Con las funciones ftell y fseek podemos calcular el tamaño (expresado en bytes) de un archivo.
 */

// Función que retorna la longitud (en bytes) de un archivo abierto
long fileSize(FILE *f)
{
  // Guardamos la posición actual del puntero
  long actual = ftell(f);

  // Movemos el puntero al final del archivo
  fseek(f, 0, SEEK_END);
  long final = ftell(f); // Obtenemos la posición final (tamaño del archivo en bytes)

  // Restauramos la posición original del puntero
  fseek(f, actual, SEEK_SET);

  return final;
}

int main()
{
  FILE *arch;

  // Abrimos el archivo en modo lectura/escritura de texto ("r+a")
  arch = fopen("DEMO.dat", "r+a");

  if (arch == NULL)
  {
    perror("No se pudo abrir el archivo");
    return 1;
  }

  // Obtenemos el tamaño en bytes
  long size = fileSize(arch);
  printf("El archivo tiene %ld bytes\n", size);

  // Cerramos el archivo
  fclose(arch);

  return 0;
}