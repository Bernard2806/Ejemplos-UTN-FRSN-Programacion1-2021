#include <stdio.h>
//#include "funciones.c"
/*
5. un programa que le permita al usuario ingresar un conjunto de 5 valores enteros. 
Luego se debe imprimir el conjunto de nros que el usuario ingresó, 
primero en el orden original y luego, en orden inverso.
*/

// prototipo o declaracion 
void mensaje(); 

void main() {
  int valores[5]; // valores[0] valores[1] valores[2]... valores[4] 
  int numero; 

  for (int i = 0; i < 5; i=i+1)  // i++ 
  {
    mensaje(); 
    scanf("%d", &numero); 
    valores[i] = numero; 
    printf("i: %d \n", i); 
  }

  // imprimir en orden inverso 
  // for (int i = 4; i >= 0; i--) i-- => i = i-1
  for (int i = 5; i > 0; i--)
  {
    printf("valor %d: %d \n", i-1, valores[i-1]);
  }
  
}

void mensaje() {
  printf("Ingrese valor entero : "); 
}