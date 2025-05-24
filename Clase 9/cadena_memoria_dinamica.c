#include <stdio.h>
#include <string.h>
#include <stdlib.h> // necesario para malloc y free

// En este ejemplo se lee una línea de texto, se reserva memoria dinámica suficiente
// para guardar la línea y se copia la cadena en ese espacio reservado.

int main()
{
  char cad[200], *ptr;
  int lon;

  puts("\nIntroducí una línea de texto:");
  fgets(cad, sizeof(cad), stdin);

  // fgets lee el salto de línea, lo removemos si está presente
  cad[strcspn(cad, "\n")] = '\0';

  lon = strlen(cad);

  // reservamos memoria dinámica para la cadena más el carácter nulo
  ptr = (char *)malloc((lon + 1) * sizeof(char));

  if (ptr == NULL)
  {
    printf("Error reservando memoria\n");
    return 1;
  }

  // copiamos la cadena al buffer reservado
  strcpy(ptr, cad);

  printf("Cadena copiada en memoria dinámica: %s\n", ptr);

  // liberamos la memoria
  free(ptr);

  return 0;
}