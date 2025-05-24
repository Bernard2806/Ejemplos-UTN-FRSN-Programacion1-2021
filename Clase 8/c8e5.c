#include <stdio.h>
# define ELEMENTS 10

// Clase 8 - ejercicio 5 
// repaso: arrays como parametros 

float calcular_promedio(float a[], int size)
{
  // cada parametro de la funcion debe declararse, sin embargo, la longitud de un array unidemensional solo se especifica en el programa principal.
  // Esto es porque no se asigna almacenamiento nuevo para un arreglo como parametro. (referencia al array original) 
  // como vimos antes, que un array es un puntero, los parametros de este tipo se pasan siempre se por Referencia. 
  int i; 
  float suma; 
  float promedio; 

  suma = 0; 
  for (i = 0; i < size; i++)
  {
    a[i] = 1; 
    suma += a[i]; 
  }
  
  promedio = suma / size; 
  return promedio; 
}

int main()
{
  float numeros[ELEMENTS]; 
  float promedio; 

  promedio = calcular_promedio(numeros, ELEMENTS); 

  printf("%.2f\n", promedio);

  for (int i = 0; i < ELEMENTS; i++)
  {
    printf("%.2f\n", numeros[i]);
  }

  return 0;
}

