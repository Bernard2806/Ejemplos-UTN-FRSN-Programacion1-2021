#include <stdio.h>
/*
LECTURA PALABRA POR PALABRA

fscanf funciona de manera análoga a scanf, salvo que el primer parámetro es el archivo 
(que previamente debe estar abierto). 
Lee hasta encontrar un espacio, un salto de línea o fin de archivo, lo que ocurra primero.
*/
main() 
{
  FILE *fpuntero; 
  char str[100]; 
  
  fpuntero = fopen("archivo1.txt", "r"); // modo r : lectura 
  if(fpuntero == NULL) {
    perror("Error al intentar abrir el archivo");
    return 1;
  }

  int total_palabras = 0; 
  while ( fscanf(fpuntero, "%s", str) != EOF ) // End of File 
  {
    total_palabras++; 
    printf("%s\n", str); 
  }

  printf("total palabras: %d\n", total_palabras);
  
  fclose(fpuntero); 

}
