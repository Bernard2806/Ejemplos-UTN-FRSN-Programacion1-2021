#include <stdio.h>

// Uso de ftell(): obtención de la posición actual dentro de un archivo

int main()
{
  // El tipo FILE almacena un identificador que actúa como puntero a la posición actual
  // dentro del archivo, indicando el próximo byte a leer o escribir.

  FILE *arch;
  char c;

  // Abrimos el archivo en modo lectura/escritura binario ("r+b")
  arch = fopen("DEMO.dat", "r+b");

  if (arch == NULL)
  {
    perror("No se pudo abrir el archivo");
    return 1;
  }

  // Obtenemos la posición actual (inicio del archivo)
  long pos = ftell(arch);

  // Leemos el primer carácter (1 byte)
  fread(&c, sizeof(char), 1, arch);

  // Mientras no se haya llegado al final del archivo...
  while (!feof(arch))
  {
    // Mostramos el byte leído junto con su posición
    printf("Byte número: %ld, carácter: %c\n", pos, c);

    // Obtenemos la posición actual después de leer
    pos = ftell(arch);

    // Leemos el siguiente carácter
    fread(&c, sizeof(char), 1, arch);
  }

  // Cerramos el archivo
  fclose(arch);

  return 0;
}