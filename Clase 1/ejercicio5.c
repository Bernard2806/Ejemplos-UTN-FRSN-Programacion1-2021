#include <stdio.h>
// #include "funciones.c"  // Línea comentada, en caso de tener funciones externas

/*
5. Un programa que le permita al usuario ingresar un conjunto de 5 valores enteros.
Luego se debe imprimir el conjunto de números que el usuario ingresó,
primero en el orden original y luego, en orden inverso.
*/

// Prototipo de función, declaramos que más abajo habrá una función llamada mensaje
void mensaje();

// Función principal del programa
int main()
{
  // Arreglo para guardar los 5 valores que va a ingresar el usuario
  int valores[5]; // valores[0], valores[1], ..., valores[4]
  int numero;     // Variable auxiliar para leer el número

  // Bucle que se repite 5 veces para leer los 5 valores
  for (int i = 0; i < 5; i = i + 1) // también se podría escribir i++
  {
    mensaje();             // Mostramos mensaje pidiendo el número
    scanf("%d", &numero);  // Leemos el número ingresado por el usuario
    valores[i] = numero;   // Lo guardamos en la posición correspondiente del arreglo
    printf("i: %d \n", i); // Mostramos en qué iteración estamos (opcional, útil para debug)
  }

  // Ahora mostramos los valores en orden inverso
  // Empezamos desde la posición 4 (último elemento) hasta la 0
  for (int i = 5; i > 0; i--)
  {
    printf("valor %d: %d \n", i - 1, valores[i - 1]);
  }

  return 0; // Indicamos que el programa terminó correctamente
}

// Definición de la función mensaje
// Simplemente imprime por pantalla un texto pidiendo al usuario que ingrese un número
void mensaje()
{
  printf("Ingrese valor entero : ");
}