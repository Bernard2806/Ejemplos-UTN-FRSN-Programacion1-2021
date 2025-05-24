#include <stdio.h>

// ftell() : obtención el punto de acceso actual

int main( )
{
  // El tipo FILE almacena un identificador de posición o “puntero” que hace referencia al
  // próximo byte que debe ser tratado dentro del archivo.
  FILE *arch;
  char c;


  // abro el archivo
  arch = fopen("DEMO.dat", "r+b");
  // obtengo la posicion actual
  long pos = ftell(arch);

  // leo el primer caracter
  int n = sizeof(c); // 1 byte
  fread(&c, n, 1, arch); 
  // leer del 'arch' n bytes y guardalos en 'c' 

  // y mientras no llegue al fi nal del archivo...
  while( !feof(arch) )
  {
    // muestro el caracter leido
    printf("byte numero: %ld, %c\n",pos, c);
    // obtengo la posicion actual
    pos = ftell(arch);

    // leo el siguiente caracter
    fread(&c, sizeof(char), 1, arch);
  }
  // cierro el archivo
  fclose(arch);

  return 0;
}
