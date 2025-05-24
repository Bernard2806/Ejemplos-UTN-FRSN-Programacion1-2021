#include <stdio.h>
#define NUMELTS 100

// Clase 8 - ejercicio 3
// repaso: array

int main(int argc, char const *argv[])
{
  int a[100];
  // Array unidimensional: conjunto finito y ordenado de elementos del mismo tipo.
  // Finito: número fijo de elementos (100 en este caso).
  // Ordenado: los elementos están contiguos en memoria.
  // Homogéneo: todos del mismo tipo (int).

  // Operaciones básicas sobre arrays: almacenar y extraer valores.

  // Nota: antes de asignar valores, los elementos contienen basura (valor indefinido).
  // Siempre inicializar antes de usar.

  // Límites:
  // Limite inferior: 0 en C
  // Limite superior: tamaño - 1 (aquí 99)
  // El tamaño es fijo y no se puede cambiar en ejecución.

  // Este código pide un tamaño, pero en C no es estándar usar un array con tamaño variable
  // sin usar arrays dinámicos o VLA (Variable Length Arrays - soporte opcional)
  int cantidad = 0;
  printf("cantidad de elementos del array: \n");
  scanf("%d", &cantidad);
  int arrays[cantidad]; // VLA, válido en C99 y posterior, pero no siempre soportado por todos los compiladores.

  // Inicialización del array 'a' a 0 usando un bucle for compacto
  for (int i = 0; i < 100; a[i++] = 0);

  // Otra forma, usando el define NUMELTS
  int b[NUMELTS];
  for (int i = 0; i < NUMELTS; b[i++] = 0);

  return 0;
}