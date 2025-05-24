#include <stdio.h>
/*
LECTURA DE UN ARCHIVO DE TEXTO LÍNEA POR LÍNEA

La función fgets intenta leer la cantidad de caracteres indicadas en el segundo parámetro 
(100 en este caso), pero lee hasta encontrar un salto de línea o 
fin de archivo (lo que ocurra primero). 
Los caracteres leídos se guardan en su primer parámetro (buffer). 
Devuelve un puntero al mismo buffer pasado por parámetro, 
si llegó al fin de archivo devuelve un puntero en NULL.
*/
main() 
{
  FILE *fpuntero; 
  char c, *pc; 
  char buffer[100]; 
  
  fpuntero = fopen("hola_mundo4.txt", "r"); 
  if(fpuntero == NULL) {
    perror("Error al intentar abrir el archivo");
    return 1;
  }

  do
  {
    pc = fgets(buffer, 100, fpuntero); 

    if ( pc!=NULL ) {
      printf("%s", buffer); 
    } else {
      printf("null");
    }

  } while ( pc != NULL );
  
  fclose(fpuntero); 
  
}
