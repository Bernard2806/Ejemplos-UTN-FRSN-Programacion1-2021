#include <stdio.h>
int main()
{
  // abro el archivo
  FILE* arch = fopen("DEMO.dat","w");
  char c;
  int size = sizeof(char);

  // escribo una 'A'
  c = 'A';
  fwrite(&c,size,1,arch); // Cada vez que invocamos a fwrite estamos grabando un carácter al fi nal del archivo.
  
  // escribo una 'B'
  c='B';
  fwrite(&c,size,1,arch);
  
  // escribo una 'C'
  c='C';
  fwrite(&c,size,1,arch);
  
  // cierro el archivo
  fclose(arch);
  
  return 0;
}