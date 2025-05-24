#include <stdio.h>
// #include "cadenas.h"
void copiarCadena(char t[], char s[])
{
  int i=0;
  while( s[i]!='\0' )
  {
    t[i]=s[i];
    i=i+1;
  }
  t[i]='\0';
}

int main()
{
  char nom[15];

  printf("nom = %s\n",nom);

  // asigno la cadena "Pablo" a nom
  copiarCadena(nom,"Pablo");
  
  // muestro el contenido de nom
  printf("nom = %s\n",nom);
  
  return 0;
}