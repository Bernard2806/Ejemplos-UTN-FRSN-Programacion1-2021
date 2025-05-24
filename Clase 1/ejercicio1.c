#include <stdio.h>

/*
1. Leer dos valores enteros e informar su suma.
*/

int main()
{
  // Declaramos dos variables enteras para guardar los valores ingresados por el usuario
  int valor1;
  int valor2;

  // Pedimos al usuario que ingrese el primer valor y lo guardamos en 'valor1'
  printf("Ingrese primer valor: ");
  scanf("%d", &valor1);

  // Pedimos el segundo valor y lo guardamos en 'valor2'
  printf("Ingrese segundo valor: ");
  scanf("%d", &valor2);

  // Mostramos por pantalla la suma de los dos valores
  printf("Suma = %d \n", valor1 + valor2);

  return 0; // Indicamos que el programa terminó correctamente
}