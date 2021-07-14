#include <stdio.h>
#define ELEMENTS 5

// Clase 8 - ejercicio 4 
// repaso: array 

// queremos leer 10 numeros enteros, encontrar su promedio y determinar cuanto se devía cada elemento del promedio. 

int main()
{
  int num[ELEMENTS]; 
  int total;
  float promedio;
  float diff; 
  int i;

  // num  : direccion base. 
  // num[0] : primer elemento
  // num[1] = base + esize 

  // en C la variable array es un puntero (puntero a entero en este caso) al primer elemento.
  // se usan los corchetes [] en lugar de un * como en el resto de los punteros
  // int *b != int b[100]  : la diferencia es que la ultima tambien reserva 100 localidades de enteros

  total = 0;
  for(i=0; i<ELEMENTS; i++) {
    printf("%d) ingrese nro: ", i);
    scanf("%d", &num[i]);  // almacenamiento 
    total += num[i];  // extraccion 
  }

  promedio = (float) total / ELEMENTS; 
  printf("Promedio = %.2f\n", promedio);

  printf("D I F E R E N C I A S \n"); 

  for(i=0; i<ELEMENTS; i++) {
    diff = num[i] - promedio ; 
    printf("num %d, diferencia = %.2f\n", num[i], diff); 
    printf("num %d, diferencia = %.2f\n", *(num+i), diff); 
  }

  // ¿por que se usa un array para contener todos los valores en el primer bucle for, 
  // y sólo usamos una variable para contener el valor del segundo bucle?


  return 0;
}
