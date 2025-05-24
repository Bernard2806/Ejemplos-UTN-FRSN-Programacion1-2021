#include <stdio.h>

// Clase 8 - ejercicio 1
// Repaso de variables y punteros

int main(int argc, char const *argv[])
{
  // 1) Tipos de datos básicos:
  int i;    // entero
  float f;  // número con coma flotante (simple precisión)
  char c;   // carácter
  double d; // número con coma flotante (doble precisión)

  // Declarar una variable hace dos cosas:
  // - Reserva espacio en memoria
  // - Especifica cómo interpretar los datos en ese espacio

  // El operador & da la dirección de memoria de una variable
  &i; // dirección de la variable 'i'

  // 2) Declaración de punteros: variables que guardan direcciones de memoria
  int *pi;   // puntero a entero
  float *pf; // puntero a float
  char *pc;  // puntero a char

  int valor = 34;

  pi = &valor; // asignamos a pi la dirección de 'valor'

  printf("%d \n", *pi); // desreferenciamos pi para obtener el valor almacenado (34)

  *pi = 99;               // cambiamos el valor apuntado por pi a 99
  printf("%d \n", *pi);   // imprime 99
  printf("%d \n", valor); // también imprime 99, porque 'valor' fue modificado indirectamente

  // También se puede hacer un casteo de punteros (no recomendado sin cuidado)
  pi = (int *)pf; // ahora pi apunta a donde apunta pf, pero hay que tener cuidado con esto

  return 0;
}