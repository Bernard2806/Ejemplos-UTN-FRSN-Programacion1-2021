#include <stdio.h>
/*
LECTURA DE UN ARCHIVO DE TEXTO CARACTÉR POR CARACTÉR
*/

main() 
{
  FILE *fpuntero; 
  char c; 
  
  fpuntero = fopen("hola_mundo3.txt", "r");  // modo: r (read)
  if(fpuntero == NULL) {
    printf("Error al intentar abrir el archivo");
    return 1;
  }

  do
  {
    c = getc(fpuntero);  
    printf("%c ", c); 

  } while (c != EOF);
  // La función getc lee un caractér del archivo que es asignado a la variable c. 
  // Si se llega a fin de archivo devuelve EOF (End of file).

  fclose(fpuntero);
  

}
