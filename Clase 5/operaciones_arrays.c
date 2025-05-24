#include <stdio.h>

// agregar - Agrega un elemento al final del array.
// Parámetros:
// a[]: array donde se agregará el valor
// pos: puntero a la posición actual (cantidad de elementos)
// valor: valor a agregar
// Retorna 0 si todo bien, -1 si se pasó del tamaño máximo (no implementado aquí)
int agregar(int a[], int *pos, int valor)
{
  a[*pos] = valor;
  *pos += 1; // Incrementa la cantidad de elementos
  return 0;  // Función puede devolver un código (opcional)
}

// buscar - Busca un valor dentro del array.
// Parámetros:
// a[]: array donde se busca
// cant: cantidad actual de elementos
// valor: valor a buscar
// Retorna la posición donde lo encontró o -1 si no lo encontró
int buscar(int a[], int cant, int valor)
{
  int i = 0;
  while (i < cant)
  {
    if (a[i] == valor)
    {
      return i; // Valor encontrado, devuelve índice
    }
    i++;
  }
  return -1; // No encontrado
}

// buscar_y_agregar - Busca un valor y si no está, lo agrega al final.
// Retorna la posición donde está o se agregó el valor
int buscar_y_agregar(int a[], int *pos, int valor)
{
  int posicion = buscar(a, *pos, valor); // Busca el valor

  if (posicion == -1)
  {                         // No encontrado
    agregar(a, pos, valor); // Lo agrega al final
    posicion = *pos - 1;    // Posición del nuevo elemento
  }

  return posicion;
}

// insertar - Inserta un valor en una posición específica del array,
// desplazando hacia la derecha los elementos posteriores.
// Parámetros:
// a[]: array
// pos: puntero a cantidad actual de elementos
// valor: valor a insertar
// pos_a_insertar: índice donde insertar (0-based)
int insertar(int a[], int *pos, int valor, int pos_a_insertar)
{
  // Desplazamos los elementos hacia la derecha para hacer espacio
  for (int i = *pos - 1; i >= pos_a_insertar; i--)
  {
    a[i + 1] = a[i];
  }
  a[pos_a_insertar] = valor; // Insertamos el valor
  *pos += 1;                 // Incrementamos la cantidad de elementos
  return 0;
}

// imprimir - Muestra los elementos del array por pantalla
void imprimir(int a[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("Posicion %d = %d\n", i + 1, a[i]);
  }
}

int main(int argc, char const *argv[])
{
  int numeros[50];  // Array con capacidad para 50 elementos
  int longitud = 0; // Número actual de elementos en el array

  // Ejemplo 1: agregar algunos números al array
  agregar(numeros, &longitud, 35);
  agregar(numeros, &longitud, 45);
  agregar(numeros, &longitud, 65);
  agregar(numeros, &longitud, 32);
  agregar(numeros, &longitud, 17);
  agregar(numeros, &longitud, 88);

  // Mostrar contenido actual del array
  imprimir(numeros, longitud);

  // Ejemplo 2: buscar un valor ingresado por el usuario
  int pos_encontrado = 0;
  int valor_a_buscar = 0;

  printf("Ingrese valor a buscar: ");
  scanf("%d", &valor_a_buscar);
  pos_encontrado = buscar(numeros, longitud, valor_a_buscar);
  if (pos_encontrado == -1)
  {
    printf("Valor NO encontrado\n");
  }
  else
  {
    printf("Valor encontrado en posicion: %d\n", pos_encontrado + 1);
  }

  // Ejemplo 3: buscar y agregar si no lo encuentra
  printf("Ingrese valor a buscar/agregar: ");
  scanf("%d", &valor_a_buscar);
  pos_encontrado = buscar_y_agregar(numeros, &longitud, valor_a_buscar);
  printf("Valor encontrado/agregado en posicion: %d\n\n", pos_encontrado + 1);

  // Ejemplo 4: insertar un valor en la posición 2 (índice 2)
  insertar(numeros, &longitud, 99, 2);
  printf("\nContenido actualizado del array:\n");

  // Mostrar contenido actualizado del array
  imprimir(numeros, longitud);

  return 0;
}