#include <stdio.h>
#include <stdlib.h>

/* Matriz con n filas, donde cada fila tiene un número variable de elementos */

int main()
{
  int **p; // puntero a punteros: para matriz irregular
  int n, m, i;

  // pedimos la cantidad de filas, debe ser > 0
  do
  {
    printf("\n Número de filas: ");
    scanf("%d", &n);
  } while (n <= 0);

  // reservamos memoria para n punteros (filas)
  p = (int **)malloc(n * sizeof(int *));

  for (i = 0; i < n; i++)
  {
    int j;

    // pedimos la cantidad de elementos para la fila i
    printf("Número de elementos de fila %d: ", i + 1);
    scanf("%d", &m);

    // reservamos memoria para m enteros en la fila i
    p[i] = (int *)malloc(m * sizeof(int));

    // leemos cada elemento de la fila i
    for (j = 0; j < m; j++)
    {
      scanf("%d", &p[i][j]);
    }
  }

  // Opcional: liberar memoria (no estaba en el código original)
  for (i = 0; i < n; i++)
  {
    free(p[i]);
  }
  free(p);

  return 0;
}