#include <stdio.h>


int main()
{
  FILE* arch;
  char c;

  // abro el archivo
  arch = fopen("DEMO.dat","r");

  // leo el primer caracter
  fread(&c,sizeof(char),1,arch);
  // y mientras no llegue al final del archivo
  while( !feof(arch) ) {  
    // muestro el caracter leido
    printf("%c\n",c);
    // leo el siguiente caracter
    fread(&c,sizeof(char),1,arch);
  }

// probar: repite ultimo caracter leido 
  // do
  // {
  //   fread(&c,sizeof(char),1,arch);
  //   printf("%c\n",c);
  // } while ( !feof(arch) );
  

  // cierro el archivo
  fclose(arch);

  return 0;
}