#include <stdio.h>

// agregar - agrega un elemento al final del array
int agregar(int a[], int *pos, int valor)
{
  a[*pos] = valor;
  (*pos)++; // aumento la cantidad de elementos
  return 1; // opcional, devuelve éxito
}

// buscar - busca un valor en el array
// devuelve posición si lo encuentra o -1 si no
int buscar(int a[], int cant, int valor)
{
  for (int i = 0; i < cant; i++)
  {
    if (a[i] == valor)
    {
      return i;
    }
  }
  return -1;
}

// buscar_y_agregar - busca el valor y si no está lo agrega
// devuelve la posición donde está o fue agregado
int buscar_y_agregar(int a[], int *pos, int valor)
{
  int posicion = buscar(a, *pos, valor);

  if (posicion == -1)
  {
    agregar(a, pos, valor);
    posicion = *pos - 1;
  }

  return posicion;
}

// insertar - inserta un valor en una posición específica
int insertar(int a[], int *pos, int valor, int pos_a_insertar)
{
  for (int i = *pos - 1; i >= pos_a_insertar; i--)
  {
    a[i + 1] = a[i]; // corro los elementos a la derecha
  }
  a[pos_a_insertar] = valor;
  (*pos)++;
  return 1; // opcional
}

// imprimir - muestra el contenido del array
void imprimir(int a[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("Posicion %d = %d\n", i + 1, a[i]);
  }
}

// eliminar_x_indice - elimina el elemento en la posición dada
void eliminar_x_indice(int a[], int *len, int pos)
{
  for (int i = pos; i < *len - 1; i++)
  {
    a[i] = a[i + 1];
  }
  (*len)--;
}

int main()
{
  int numeros[50];  // array con capacidad para 50 elementos
  int longitud = 0; // cantidad actual de elementos

  // Ejemplo 1: agrego algunos números
  agregar(numeros, &longitud, 35);
  agregar(numeros, &longitud, 45);
  agregar(numeros, &longitud, 65);
  agregar(numeros, &longitud, 32);
  agregar(numeros, &longitud, 17);
  agregar(numeros, &longitud, 88);

  // Imprimo el array
  imprimir(numeros, longitud);

  // Ejemplo 2: buscar un valor
  int valor_a_buscar;
  printf("Ingrese valor a buscar: ");
  scanf("%d", &valor_a_buscar);

  int pos_encontrado = buscar(numeros, longitud, valor_a_buscar);
  if (pos_encontrado == -1)
  {
    printf("Valor NO encontrado\n");
  }
  else
  {
    printf("Valor encontrado en posicion: %d\n", pos_encontrado + 1);
  }

  // Ejemplo 3: buscar y agregar si no existe
  printf("Ingrese valor a buscar/agregar: ");
  scanf("%d", &valor_a_buscar);
  pos_encontrado = buscar_y_agregar(numeros, &longitud, valor_a_buscar);
  printf("Valor encontrado/agregado en posicion: %d\n", pos_encontrado + 1);

  // Ejemplo 4: insertar valor 99 en la posición 2 (tercer lugar)
  insertar(numeros, &longitud, 99, 2);
  printf("\nArray luego de insertar 99 en posición 3:\n");
  imprimir(numeros, longitud);

  // Ejemplo 5: eliminar elemento en la posición 7 (índice 7)
  eliminar_x_indice(numeros, &longitud, 7);
  printf("Luego de eliminar el elemento en posición 8:\n");
  imprimir(numeros, longitud);

  return 0;
}