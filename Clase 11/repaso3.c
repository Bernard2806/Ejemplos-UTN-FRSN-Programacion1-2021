#include <stdio.h>
#include <string.h>

int main()
{
  char *linea_mostrar = NULL;
  int largo, tamanio;
  FILE *fhandler;

  fhandler = fopen("string.txt", "r");
  char *palabra;

  while (getline(&linea_mostrar, &largo, fhandler) != -1)
  {
    tamanio = strlen(linea_mostrar);
    // char array[tamaño];
    palabra = (char *)malloc(tamanio);

    //
    strcpy(palabra, linea_mostrar);
    printf("%s\n", palabra);

    free(palabra);
  }
}