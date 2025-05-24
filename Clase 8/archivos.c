#include <stdio.h>
#include <stdlib.h> // para strtol y free

int main()
{
  FILE *fhandler;
  char *linea_mostrar = NULL; // buffer para getline, lo asigna automáticamente
  char *fin;                  // puntero auxiliar para strtol
  size_t largo = 0;           // debe ser size_t para getline
  fhandler = fopen("numeros.txt", "r");
  if (fhandler == NULL)
  {
    perror("Error al abrir archivo");
    return 1;
  }

  int valor_inicial = 0, valor_final = 0;
  int contador = 0;

  // getline asigna buffer a linea_mostrar y actualiza largo
  while (getline(&linea_mostrar, &largo, fhandler) != -1)
  {
    if (contador == 0)
    {
      valor_inicial = (int)strtol(linea_mostrar, &fin, 10);
    }
    // mostrar línea tal cual está (incluye salto de línea)
    printf("%s", linea_mostrar);

    valor_final = (int)strtol(linea_mostrar, &fin, 10);

    contador++;
  }
  printf("\nValores ingresados por el usuario: %i  %i\n", valor_inicial, valor_final);

  // liberar buffer asignado por getline
  free(linea_mostrar);
  fclose(fhandler);

  return 0;
}