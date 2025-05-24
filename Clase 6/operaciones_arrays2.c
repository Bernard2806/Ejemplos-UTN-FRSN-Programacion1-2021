#include <stdio.h>

// Inserta un valor en una posición específica del array
int insertar(int a[], int *len, int valor, int pos_a_insertar)
{
  for (int i = *len - 1; i >= pos_a_insertar; i--)
  {
    a[i + 1] = a[i]; // Desplazamos todos los valores hacia la derecha
  }
  a[pos_a_insertar] = valor; // Insertamos el valor
  (*len)++;                  // Incrementamos la longitud

  return 1; // Por convención, devolvemos algo (opcional)
}

// Inserta el valor en el lugar correcto del array ya ordenado
int insertarEnOrden(int a[], int *len, int valor)
{
  int i = 0;
  while (i < *len && a[i] <= valor)
  {
    i++;
  }
  insertar(a, len, valor, i);
  return i; // Devuelve la posición donde se insertó
}

// Busca un valor en un array ordenado
// Si lo encuentra, *enc = 1 y devuelve la posición
// Si no, *enc = 0 y devuelve la posición donde debería estar
int buscarEnArrOrdenado(int a[], int len, int v, int *enc)
{
  int i = 0;
  while (i < len && a[i] < v)
  {
    i++;
  }

  *enc = (i < len && a[i] == v); // Aseguramos coincidencia exacta
  return i;
}

int main()
{
  int arr[50];
  int len = 0;

  insertarEnOrden(arr, &len, 14);
  insertarEnOrden(arr, &len, 31);
  insertarEnOrden(arr, &len, 10);
  insertarEnOrden(arr, &len, 5);
  insertarEnOrden(arr, &len, 12);
  insertarEnOrden(arr, &len, 1);

  printf("Array ordenado:\n");
  for (int i = 0; i < len; i++)
  {
    printf("%d\n", arr[i]);
  }

  // Prueba de búsqueda
  int enc;
  int pos = buscarEnArrOrdenado(arr, len, 12, &enc);
  if (enc)
    printf("El valor 12 se encontró en la posición %d.\n", pos);
  else
    printf("El valor 12 no está, debería estar en la posición %d.\n", pos);

  return 0;
}