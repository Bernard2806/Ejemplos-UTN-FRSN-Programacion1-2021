#include <stdio.h>
#define MAX 15

int main()
{
  char buf[MAX]; // Array para almacenar la cadena

  // fgets lee hasta MAX-1 caracteres o hasta un salto de línea, y añade '\0' al final.
  // También guarda el salto de línea '\n' si hay espacio.
  printf("Ingresar un string (máximo %d caracteres): ", MAX - 1);
  if (fgets(buf, MAX, stdin) != NULL)
  {
    // fgets incluye el salto de línea si cabe, eliminamos el salto de línea si está presente
    size_t len = 0;
    while (buf[len] != '\0')
      len++;
    if (len > 0 && buf[len - 1] == '\n')
    {
      buf[len - 1] = '\0';
    }
    printf("String leído con fgets(): %s\n", buf);
  }
  else
  {
    printf("Error leyendo la entrada con fgets()\n");
  }

  // gets() es inseguro y está obsoleto, puede causar buffer overflow.
  // En lugar de gets, se recomienda usar fgets.
  // Si insistes en usar gets(), ten en cuenta que puede causar vulnerabilidades.

  /*
  printf("Ingresar un string: ");
  gets(buf); // NO USAR: inseguro y eliminado de los estándares modernos.
  printf("String leído con gets(): %s\n", buf);
  */

  printf("\nNota: La función gets() está obsoleta y es insegura. Se recomienda usar fgets() en su lugar.\n");

  return 0;
}
