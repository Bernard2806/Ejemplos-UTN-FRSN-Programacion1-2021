#include <stdio.h>

int main()
{
  // Una matriz es un array con 2 o más dimensiones (filas y columnas)
  int m = 3;     // cantidad de filas
  int n = 3;     // cantidad de columnas
  int mat[m][n]; // declaramos la matriz de m filas por n columnas

  // Inicializamos la matriz pidiendo los valores al usuario
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("Ingresá el valor para fila %d, columna %d: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  printf("\nDiagonal principal (cada elemento donde fila = columna):\n");

  // Imprimir la diagonal principal: elementos donde el índice de fila es igual al de columna
  for (int i = 0; i < m; i++)
  {
    printf("%d\n", mat[i][i]);
  }

  printf("\nDiagonal principal en una línea:\n");

  // Mostrar la diagonal principal en una sola línea, con espacios
  for (int i = 0; i < m; i++)
  {
    printf("%d  ", mat[i][i]);
  }

  printf("\n");

  return 0;
}