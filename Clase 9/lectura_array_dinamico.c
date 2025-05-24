#include <stdio.h>
#include <stdlib.h> // para malloc y free

int main()
{
  int n;
  int *pi;

  printf("Número de elementos del array: ");
  scanf("%d", &n);

  // Reservamos memoria dinámica para n enteros
  pi = (int *)malloc(n * sizeof(int));
  if (pi == NULL)
  {
    printf("Error reservando memoria\n");
    return 1;
  }

  // Leemos los valores para llenar el array
  for (int i = 0; i < n; i++)
  {
    printf("Ingrese el elemento %d: ", i);
    scanf("%d", &pi[i]);
  }

  // Mostramos los valores ingresados (opcional)
  printf("Valores ingresados:\n");
  for (int i = 0; i < n; i++)
  {
    printf("pi[%d] = %d\n", i, pi[i]);
  }

  // Liberamos la memoria reservada
  free(pi);

  return 0;
}