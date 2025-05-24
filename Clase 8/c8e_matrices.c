#include <stdio.h>
#include <string.h>
#define COLS 50

int main()
{
  const int columnas = 50; 
  char datos[3][COLS];  //  NULL : \0 
  char palabra[COLS];


  for (int i = 0; i < 3; i++)
  {
    printf("ingrese una palabra :");
    scanf("%s", palabra); 
    
    strcat(palabra, " - algo mas"); 
    strcpy(datos[i], palabra); 
  }

  printf("---------------------\n");

  for (int i = 0; i < 3; i++)
  {
    // // imprimir fila completa 
    // printf("fila %d: %s\n", i, datos[i]);

    // imprimir caracter por caracter (celda por celda)
    for (int j = 0; j < COLS && datos[i][j]!='\0'; j++)
    {
      printf("%c", datos[i][j]);
    }
    printf("\n");
     
  }
  
  FILE *arch; 

  arch = fopen("datos.txt", "w"); 
  
  for (int i = 0; i < 3; i++)
  {
    fprintf(arch, "%s\n", datos[i]); 
  }
  
  fclose(arch);
  

  return 0;
}
