#include <stdlib.h>
#include <stdio.h>

/*
void * malloc(size_t tamanio)

comprobar siempre que malloc devuelve una direccion valida (diferente a NULL)
para asegurar portabilidad debemos utilizar sizeof() para definir los tamaños

IMPORTANTE: el tamaño de una estructura NO siempre es la suma del tamaño de sus campos. 
*/

/*
free() 
*/

// el tipo definido como macro size_t se utiliza en la biblioteca estandar para representar cantidades enteras positivas. 


int main(int argc, char const *argv[])
{
  typedef struct DATO
  {
    char nombre[20];
    char sexo; 
    int edad;
  } dato ;

  dato *p; 
  struct DATO persona; 
  
  // if (!(p = (struct DATO *) malloc( sizeof(struct DATO)) ))
  if (!(p = (dato *) malloc( sizeof(dato) ) ))
  {
    printf("no hay suficiente memoria!");
  }
  
  

  return 0;
}
