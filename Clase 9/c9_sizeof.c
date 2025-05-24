#include <stdio.h>


int main()
{
  int n ;  // 4 bytes 
  char valor = 356; 

  n = sizeof(char); // devolver lo que ocupa un char. unidad de medida: byte
  printf("un char ocupa: %d bytes\n", n);

  n = sizeof(int); // devolver lo que ocupa un int. unidad de medida: byte
  printf("un int ocupa: %d bytes\n", n);

  n = sizeof(valor); // devolver lo que ocupa un int. unidad de medida: byte
  printf("un valor ocupa: %d bytes\n", n);

  printf("%d\n", valor); 

  
  return 0;
}
