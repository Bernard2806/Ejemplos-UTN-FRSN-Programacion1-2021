#include <stdio.h>

// Algoritmo de búsqueda binaria (dicotómica):
// Busca un valor en un array ordenado descartando mitades del array
// según la comparación con el valor buscado.

// Parámetros:
// a[]: array ordenado donde se buscará el valor
// len: longitud del array
// valor_buscado: valor a encontrar
// enc: puntero a entero donde se almacenará 1 si encontró el valor o 0 si no

// Retorna la posición donde se encontró el valor (si enc=1),
// o la posición donde debería insertarse (si enc=0).
int busquedaBinaria(int a[], int len, int valor_buscado, int *enc)
{
  int i = 0;          // límite inferior
  int j = len - 1;    // límite superior
  int k;              // índice medio
  int encontrado = 0; // bandera de encontrado

  while (i <= j && encontrado == 0)
  {
    k = (i + j) / 2;

    if (a[k] > valor_buscado)
    {
      j = k - 1; // buscar en la mitad inferior
    }
    else if (a[k] < valor_buscado)
    {
      i = k + 1; // buscar en la mitad superior
    }
    else
    {
      encontrado = 1; // valor encontrado en la posición k
    }
  }

  *enc = encontrado;

  // Si encontró el valor, devuelve la posición k
  // Si no encontró, devuelve la posición donde debería insertarse (i)
  return encontrado ? k : i;
}

int main(int argc, char const *argv[])
{
  // Array ordenado de ejemplo
  int arr[50] = {1, 4, 7, 9, 10, 12};
  int len = 6;
  int pos, enc;

  // Buscar valores desde -3 hasta 14 en el array
  for (int i = -3; i < 15; i++)
  {
    pos = busquedaBinaria(arr, len, i, &enc);
    printf("%d", i);

    if (enc)
    {
      printf(" [encontrado], ");
    }
    else
    {
      printf(" [NO encontrado], ");
    }

    printf("pos = %d\n", pos);
  }

  return 0;
}