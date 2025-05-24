#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char c[100];
  int i, j;
  int matriz[20][20] = {0}; // inicializo la matriz a 0 por seguridad
  char *pc;
  const char separador[2] = "\t";
  char *token;
  int nro;

  FILE *fp = fopen("matriz.txt", "r");
  if (fp == NULL)
  {
    printf("No se puede abrir el archivo...\n");
    return 1;
  }

  i = 0;
  while ((pc = fgets(c, sizeof(c), fp)) != NULL && i < 20) // lee hasta 20 filas o EOF
  {
    j = 0;
    // obtener primer token (número separado por tab)
    token = strtok(c, separador);
    while (token != NULL && j < 20)
    {
      nro = atoi(token);
      matriz[i][j] = nro;
      token = strtok(NULL, separador);
      j++;
    }
    i++;
  }

  fclose(fp);

  printf("-----------------------------------\n");
  for (int x = 0; x < i; x++) // imprimo sólo las filas leídas
  {
    for (int y = 0; y < 20; y++)
    {
      printf("%d ", matriz[x][y]);
    }
    printf("\n");
  }

  return 0;
}