#include <stdio.h>

/*
fseek() : cambio de la posición del cursor (puntero) del archivo. 
recibe tres argumentos:
• El archivo (de tipo FILE*).
• El número de byte al cual queremos “mover” el puntero (lo llamaremos pos).
• Un entero cuyos valores posibles se definen con las siguientes constantes:
    SEEK_SET (comienzo del archivo, byte 0)
    SEEK_CUR (posición actual)
    SEEK_END (final del archivo)
*/

int main( )
{
  FILE *arch;
  char c;

  // abro el archivo
  arch = fopen("DEMO.dat", "r+b");


  // hacemos que el identificador de posición apunte al final del archivo
  fseek(arch,0,SEEK_END);

  int n = sizeof(c); // 1 byte
  fread(&c, n, 1, arch); 
  printf("ultimo letra: %c\n", c);
  
  // apuntar al byte número n-1
  fseek(arch,-1,SEEK_CUR);
  fread(&c, n, 1, arch); 
  printf("anteultimo letra: %c\n", c);

  // // si el identificador de posición está apuntando al byte número n entonces con la
  // // siguiente línea de código lo haremos apuntar al byte número n+1
  // fseek(arch,1,SEEK_CUR);

  // movemos el puntero arch para hacerlo apuntar al primer byte (el byte número cero).
  fseek(arch,2,SEEK_SET);

  fread(&c, n, 1, arch); 
  printf("primera letra: %c\n", c);

  return 0; 

}