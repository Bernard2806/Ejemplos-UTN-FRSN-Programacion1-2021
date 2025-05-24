#include <stdio.h>
#define MAX 15
int main()
{
  char buf[MAX]; // array 

  // lee caracteres del stream especificado. puede ser puntero a FILE o stdin 
  // lee hasta ENTER o limite del array 
  fgets(buf, MAX, stdin);
  printf("string leido con fgets() es: %s\n", buf);


  // lee caracteres del standard input (stdin)
  // NO controla los limites del array. OJO! 
  printf("Ingresar un string: ");
  gets(buf);
  printf("string leido con gets() es: %s\n", buf);
  


    return 0;
}
