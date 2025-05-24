#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// malloc() 
// free() 

char* obtenerSaludo()
{
  // cadena local
  int elementos = 100; 
  char a[elementos] ;
  strcpy(a, "Hola, Mundo");
  
  // longitud de la cadena que vamos a retornar. no tiene en cuenta el \0
  int n = strlen(a) + 1;
  printf("longitud : %d\n", n);

  // void * malloc(size_t tamanio)
  // array de n+1 caracteres generado dinamicamente
  char* r ; 
  r = (char*) malloc(n);

  // asigna la cadena al array gestionado dinamicamente
  strcpy(r,a);
  
  // printf("%p\n", a); 
  // r = &a;  // -> NO funciona: por ?
  // printf("%p\n", r); 
  // // printf("");

  return r;
}

int main()
{
  // invoco a la funcion que retorna una cadena
  char* s = obtenerSaludo();

  // muestro la cadena
  printf("%s\n", s);   
  printf("%c\n", s[3]);
  printf("%c\n", *(s+3));


  
  return 0;
}