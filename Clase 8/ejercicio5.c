#include <stdio.h>
#define ELEMENTS 10

// Clase 8 - ejercicio 5
// repaso: arrays como parámetros

float calcular_promedio(float a[], int size)
{
  // En C, los arrays pasados a funciones se pasan como punteros,
  // por lo que no se crea una copia del array, sino que la función
  // trabaja directamente sobre el array original.

  int i;
  float suma = 0;
  float promedio;

  for (i = 0; i < size; i++)
  {
    a[i] = 1;     // Aquí estamos asignando 1 a cada elemento del array 'a'.
                  // Esto modifica el array original en main().
    suma += a[i]; // Acumulamos la suma de los elementos.
  }

  promedio = suma / size;
  return promedio;
}

int main()
{
  float numeros[ELEMENTS];
  float promedio;

  // Llamamos a la función pasando el array y su tamaño.
  promedio = calcular_promedio(numeros, ELEMENTS);

  printf("Promedio: %.2f\n", promedio);

  // Mostramos los valores del array luego de la función
  // para verificar que se modificaron a 1.
  for (int i = 0; i < ELEMENTS; i++)
  {
    printf("numeros[%d] = %.2f\n", i, numeros[i]);
  }

  return 0;
}