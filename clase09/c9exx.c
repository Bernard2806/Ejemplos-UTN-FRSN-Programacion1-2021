#include <stdio.h>
int main()
{
  // abro el archivo
  FILE* arch=fopen("DEMO.dat","w+b");
  char c;
  // escribo una 'A'
  c='A';
  fwrite(&c,sizeof(char),1,arch);
  // escribo una 'B'
  c='B';
  fwrite(&c,sizeof(char),1,arch);
  // escribo una 'C'
  c='C';
  fwrite(&c,sizeof(char),1,arch);
  // cierro el archivo
  fclose(arch);
  return 0;
}