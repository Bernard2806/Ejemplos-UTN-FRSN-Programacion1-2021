#include <stdio.h>

// - Estructuras dinamicas: coleccion de valores del mismo tipo, 
// pero la cantidad de elementos de esta coleccion puede variar durante la ejecucion,
// utilizando mayor o menor cantidad de memoria.
// Las estructuras dinámicas se forman “enlazando” nodos.

// - el nodo : representa un conjunto de uno o más valores, más un puntero haciendo 
// referencia al siguiente nodo de la colección.
typedef struct Nodo
{
  int valor; // valor que contiene el nodo
  struct Nodo* sig; // referencia al siguiente nodo
} Nodo;


int main()
{
  /* code */
  return 0;
}
