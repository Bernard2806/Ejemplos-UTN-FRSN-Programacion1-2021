#include <stdio.h>
#include <string.h>

void imprimir(char s[]) 
{
  for(int i = 0; s[i] != '\0'; i++) {
    printf("%c",s[i]);
    //putchar(s[i]);
    //puts(s[i]);
  }
}

void main()
{
  char s[] = "hola";
  // printf recibe el puntero al inicio de la cadena
  // Recorre e imprime hasta que encuentra un '\0'
  printf("%s \n", s);

  // %u : integer sin signo 
  // %d : integer 

  printf("%d \n", sizeof(s)); // 5 

  // Requiere #include <string.h>
  printf("%d \n", strlen(s)); // 4 

  printf("imprimir:\n");
  imprimir(s); 

  return 0; 
}