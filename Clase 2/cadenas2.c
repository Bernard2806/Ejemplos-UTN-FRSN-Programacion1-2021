#include <stdio.h>
#include <string.h>

main() 
{
  char s1[] = "hola"; 
  char s2[] = "chau";


  if (s1[0] == s2[0]) {
    // ¡ERROR! estoy comparando los punteros
    printf("s1 y s2 iguales \n");
  } else {
    printf("s1 y s2 distintos\n");
  }
  
  if ( strcmp(s1, s2) == 0 ) {
    printf("strcmp s1 y s2 iguales\n");
  } else {
    printf("strcmp s1 y s2 distintos\n");
  }
  
}