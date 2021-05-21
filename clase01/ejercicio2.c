#include <stdio.h>

/*
2. Leer dos valores numéricos enteros e informar su división.
*/
void main() {
  int valor1; 
  int valor2; 
  float resultado;

  printf("Ingrese primer valor: ");
  scanf("%d", &valor1); 

  printf("Ingrese segundo valor: ");
  scanf("%d", &valor2); // si es 0?

  resultado = valor1 / valor2;
  // la division entre enteros trunca el resultado, cualquier parte fraccionaria se descarta.
  // por mas que resultado sea float y mostremos 2 decimales en la salida
  // printf("Division = %6.2f \n", resultado);
  printf("Division = %f \n", resultado);

  // si quisieramos ver los decimales tenemos que hacer casteo a float 
  // resultado = valor1 * 1.0 / valor2;
  // resultado = (float)valor1 / valor2;
  resultado = valor1 / (float)valor2;
  printf("Division = %6.2f \n", resultado);
}