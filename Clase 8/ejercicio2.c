#include <stdio.h>

// Clase 8 - ejercicio 2
// repaso funciones, paso de parámetros por valor y referencia

// Declaración de funciones
void func_valor(int);        // función que recibe parámetro por valor
void func_referencia(int *); // función que recibe parámetro por referencia (puntero)

int main(int argc, char const *argv[])
{
  int x = 5;

  // En C, los parámetros se pasan por valor: se copia el valor al parámetro local.
  // Modificar el parámetro dentro de la función NO cambia la variable original.

  // 3.1) Paso por valor
  printf("%d\n", x); // imprime 5

  func_valor(x); // pasa una copia de x
  // 'x' NO cambia fuera de la función

  printf("%d\n", x); // sigue imprimiendo 5

  // 3.2) Paso por referencia usando punteros
  func_referencia(&x); // pasa la dirección de x, para modificar el valor real

  printf("%d\n", x); // ahora 'x' fue incrementado y cambia en main

  return 0;
}

void func_valor(int y)
{
  // Recibe una copia del valor original
  printf("dentro de funcion: %d\n", ++y); // incrementa la copia e imprime 6
  // pero 'x' en main no cambia
}

void func_referencia(int *py)
{
  // Recibe un puntero a entero (dirección de memoria)
  (*py)++;                                // incrementa el valor apuntado (valor original)
  printf("dentro de funcion: %d\n", *py); // imprime 6 (valor modificado)
}