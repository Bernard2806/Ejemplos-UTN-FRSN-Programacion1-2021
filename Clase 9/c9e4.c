#include <stdio.h>

// Con las funciones ftell y fseek podemos calcular el tamaño (expresado en bytes) de un archivo.


// retorna la longitud (en bytes) de un archivo
long fileSize(FILE* f)
{
  long actual = ftell(f);
  fseek(f,0,SEEK_END); // movemos al ultimo byte 
  long ultimo = ftell(f); // devuelve el byte adonde esta posicionado 
  fseek(f,actual,SEEK_SET); // movemos adonde estaba originalmente 
  
  return ultimo;
}

int main( )
{
  FILE *arch;
  char c;

  // abro el archivo
  arch = fopen("DEMO.dat", "r+a");
  
  long size = fileSize(arch);

  printf("El archivo tiene %ld bytes\n",size);


  return 0;


}