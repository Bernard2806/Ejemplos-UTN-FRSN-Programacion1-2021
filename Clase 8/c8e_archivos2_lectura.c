#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char c[100];
  int i, j;
  int matriz[20][20];
  char *pc;
  const char separador[2] = "\t";
  char *token;
  int nro ; 


  FILE *fp;
  fp = fopen("matriz.txt", "r");
  if (fp == NULL)
  {
    printf("No se puede abrir el archivo. . . ");
    return 1;
  }

  i = 0;
  do
  {
    pc = fgets(c, 100, fp);
    j = 0;

    if (pc != NULL)
    {

      /* optener primera parte, primer token */
      token = strtok(c, separador);
      /* recorrer todos los tokens */
      while (token != NULL)
      {
        nro = atoi(token); 
        matriz[i][j] = nro;

        token = strtok(NULL, separador);
        j++;
      }
      i++;
    }
    else
    {
      // printf("null");
    }

  } while (pc != NULL);


  printf("-----------------------------------\n");
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      printf("%d ",matriz[i][j]); 
    }
    printf("\n");
    
  }
  
  // for (i = 0; i <= 20; i++)
  // {
  //     for (j = 0; j < 20; j++)
  //     {
  //         while (c != EOF)
  //         {
  //             // fprintf(fp, "%d", matriz[i][j]);
  //         }
  //     }
  // }

  fclose(fp);

  return 0;
}
