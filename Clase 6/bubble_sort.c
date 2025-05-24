#include <stdio.h>

// Algoritmos de ordenamiento comunes:
// Bubble Sort
// Selection Sort
// Insertion Sort
// Shell Sort
// Merge Sort
// Quick Sort

// Bubble Sort (Ordenamiento de la burbuja):
// La idea es recorrer el array comparando elementos adyacentes
// y permutarlos si están en el orden incorrecto. Esto se repite
// hasta que no se necesite hacer ninguna permutación en una pasada,
// lo que indica que el array está ordenado.

// En este caso, se ordena en orden descendente (mayor a menor).
void bubble_sort(int a[], int len)
{
  int aux;     // variable auxiliar para intercambio
  int fin = 0; // bandera que indica si se hicieron intercambios en la pasada

  // Mientras se hagan intercambios (fin == 0), seguimos iterando
  while (fin == 0)
  {
    fin = 1; // asumimos que el array está ordenado

    // Recorremos el array hasta len-1 para comparar pares adyacentes
    for (int m = 0; m < len - 1; m++)
    {
      // Si el elemento siguiente es mayor que el actual,
      // los intercambiamos para ordenar de mayor a menor
      if (a[m + 1] > a[m])
      {
        aux = a[m + 1];
        a[m + 1] = a[m];
        a[m] = aux;
        fin = 0; // indicamos que hicimos un intercambio
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  int a[] = {1, 5, 3, 4, 2};
  int len = sizeof(a) / sizeof(int); // calculamos la cantidad de elementos

  // Ordenamos el array usando bubble sort (descendente)
  bubble_sort(a, len);

  // Imprimimos el array ordenado
  printf("Array ordenado de mayor a menor:\n");
  for (int i = 0; i < len; i++)
  {
    printf("%d\n", a[i]);
  }

  return 0;
}