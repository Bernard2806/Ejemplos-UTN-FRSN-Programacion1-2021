#include <stdlib.h>
#include <stdio.h>

/*
En C, no siempre sabemos de antemano cuánta memoria necesitaremos.
Por eso, usamos memoria dinámica que se asigna en tiempo de ejecución
en el montón (heap) con las funciones malloc(), realloc(), calloc() y free().

Estas funciones están en la biblioteca estándar <stdlib.h>.

Sintaxis para reservar memoria:
    puntero = (tipo*) malloc(tamaño_en_bytes);
*/

int main()
{
  int cant_elementos;

  // Pido al usuario la cantidad de elementos a reservar
  printf("Ingresá la cantidad de elementos: ");
  scanf("%d", &cant_elementos);

  // Reservo memoria dinámica para un array de 'cant_elementos' enteros
  int *pi = (int *)malloc(cant_elementos * sizeof(int));
  if (pi == NULL)
  {
    printf("No se pudo asignar memoria\n");
    return 1;
  }

  // Ejemplo de array estático para mostrar la diferencia
  int a[] = {9, 8, 7, 6, 0, 1, 2, 3, 4, 5};

  // Copio el contenido del array 'a' al espacio dinámico 'pi' hasta donde alcance
  int limite = (cant_elementos < 10) ? cant_elementos : 10;
  for (int i = 0; i < limite; i++)
  {
    pi[i] = a[i];
  }

  printf("Array estático a[3]: %d\n", a[3]);
  printf("Array dinámico pi[3]: %d\n", pi[3]);
  printf("Array estático a[5]: %d\n", a[5]);
  printf("Array dinámico pi[5] (si existe): %d\n", (cant_elementos > 5) ? pi[5] : -1);

  // Libero la memoria reservada para el array dinámico
  free(pi);

  // Ejemplo con memoria dinámica para una cadena de caracteres
  char *sArr = (char *)malloc(10 * sizeof(char));
  if (sArr == NULL)
  {
    printf("No se pudo asignar memoria para la cadena\n");
    return 1;
  }

  printf("Ingresá una palabra (max 9 caracteres): ");
  scanf("%9s", sArr); // limito la lectura para evitar overflow

  printf("3ra letra: %c\n", sArr[2]);

  free(sArr);

  return 0;
}