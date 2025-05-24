#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char c[100];
  int i, j;
  int matriz[20][20] = {0}; // inicializo toda la matriz en 0 para evitar basura
  char *pc;
  const char separador[] = " "; // array con espacio para strtok
  char *token;
  int nro;

  FILE *fp;
  fp = fopen("matriz.dat", "r");
  if (fp == NULL)
  {
    printf("No se puede abrir el archivo...\n");
    return 1;
  }

  i = 0;
  while ((pc = fgets(c, sizeof(c), fp)) != NULL && i < 20)
  {
    j = 0;

    // tokenizo la línea por espacios
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

  // imprimo la matriz leída
  printf("Contenido de la matriz:\n");
  for (int x = 0; x < i; x++) // solo filas leídas
  {
    for (int y = 0; y < 20; y++)
    {
      printf("%d ", matriz[x][y]);
    }
    printf("\n");
  }

  return 0;
}