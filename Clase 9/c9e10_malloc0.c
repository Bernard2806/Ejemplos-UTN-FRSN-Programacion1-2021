#include <stdio.h>
#include <string.h> / * por el uso de strcpy() */

// En el siguiente ejemplo se lee una línea de caracteres, se reserva memoria para un buffer de tantos
// caracteres como los leídos y se copia en el buffer la cadena.

void main()
{
  char cad[200], *ptr;
  int lon;

  puts("\nIntroduce una linea de texto\n") ;
  gets(cad) ;
  
  lon = strlen(cad) ;
  ptr = (char*) malloc ( (lon+1) * sizeof (char) ) ;
  // devuelve un puntero que apunta a una sección de memoria capaz de contener la cadena de longitud
  // strlen() más un byte extra por el carácter '\0' al final de la cadena.
  
  strcpy(ptr, cad) ; // copia cad a nueva área de memoria apuntada por ptr 
  printf("ptr = %s",ptr); // cad está ahora en ptr 
  free(ptr); //  libera memoria de ptr 
  
}
