#include <stdio.h>
#include <stdlib.h> // para malloc y free

// ESTRUCTURAS DINÁMICAS EN C:
// Son colecciones de elementos del mismo tipo cuya cantidad puede variar durante la ejecución del programa.
// Estas estructuras utilizan memoria dinámica, permitiendo una gestión más flexible.
// Se componen de nodos enlazados entre sí mediante punteros.

// DEFINICIÓN DEL NODO:
// Cada nodo almacena un valor entero y una referencia (puntero) al siguiente nodo.
typedef struct Nodo
{
  int valor;        // Valor que contiene el nodo
  struct Nodo *sig; // Puntero al siguiente nodo (NULL si es el último)
} Nodo;

int main()
{
  // Este es un punto de partida para trabajar con listas enlazadas.
  // Aquí podrías crear nodos, enlazarlos y recorrer la lista.

  return 0;
}