#include <stdio.h>

main() 
{
  // una matriz es un array de 2 o mas dimensiones 
  int m = 3;
  int n = 3; 
  int mat[m][n];  // m: cant de filas y n: cant de columnas 

  // incializamos 
  for (int i=0; i<m ; i++) {

    for (int j = 0; j < n; j++)
    {
      printf("fila: %d, col: %d\n", i, j);
      scanf("%d", &mat[i][j]); 
      //mat[i][j] = 0; 
    }
    
  }

  // imprimir diagonal principal 
  for (int i=0; i<m ; i++) {

    for (int j = 0; j < n; j++)
    {
      if ( i == j ) {
        printf("%d\n", mat[i][j]); 
      }
      
    }
    
  }

  // imprimir diagonal principal 
  printf("\n\n"); 
  for (int i = 0; i < m; i++)
  {
    printf("%d  ", mat[i][i]); 
  }
  


}
