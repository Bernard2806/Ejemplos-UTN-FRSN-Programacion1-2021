#include <stdio.h>
#define ELEMENTS 5

// Clase 8 - ejercicio 4 
// repaso: array 

// Queremos leer 5 números enteros, calcular su promedio y determinar cuánto difiere cada elemento del promedio.

int main()
{
  int num[ELEMENTS]; 
  int total = 0;
  float promedio;
  float diff; 
  int i;

  // En C, el nombre del array es la dirección del primer elemento.
  // num[0] es el primer elemento, num[1] es el segundo, etc.
  // num[i] es equivalente a *(num + i)

  // Primer bucle: ingreso de datos y suma para calcular promedio
  for(i=0; i<ELEMENTS; i++) {
    printf("%d) ingrese nro: ", i);
    scanf("%d", &num[i]);  // guardamos cada número en el array
    total += num[i];       // sumamos para luego calcular el promedio
  }

  promedio = (float) total / ELEMENTS; 
  printf("Promedio = %.2f\n", promedio);

  printf("D I F E R E N C I A S \n"); 

  // Segundo bucle: calculamos y mostramos la diferencia entre cada número y el promedio
  for(i=0; i<ELEMENTS; i++) {
    diff = num[i] - promedio; 

    // num[i] y *(num + i) son equivalentes para acceder al elemento i del array
    printf("num %d, diferencia = %.2f\n", num[i], diff);  
    printf("num %d, diferencia = %.2f\n", *(num + i), diff);
  }

  // Pregunta del ejercicio:
  // ¿Por qué usamos un array para almacenar todos los valores en el primer bucle,
  // y sólo una variable para almacenar el valor de la diferencia en el segundo bucle?
  //
  // Respuesta:
  // En el primer bucle necesitamos guardar todos los números para poder acceder a ellos luego (para el promedio y diferencias).
  // En el segundo bucle, sólo calculamos la diferencia para un elemento a la vez, no necesitamos almacenarlas todas, 
  // por eso basta con una variable temporal 'diff'.

  return 0;
}
