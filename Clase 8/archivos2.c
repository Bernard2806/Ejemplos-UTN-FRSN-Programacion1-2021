#include <stdio.h>
#include <stdlib.h> // Para rand() y srand()
#include <time.h>   // Para time()

int matriz[20][20];

// Prototipos
void guardar();
void cargar_matriz(int cantidad);

int main()
{
  int cant_random = 0;

  printf("Digite el parametro final de la funcion random: ");
  scanf("%i", &cant_random);

  if (cant_random <= 0)
  {
    printf("El parametro debe ser un entero positivo.\n");
    return 1;
  }

  // Inicializar la semilla del generador de números aleatorios
  srand(time(NULL));

  cargar_matriz(cant_random);
  guardar();

  return 0;
}

void cargar_matriz(int cantidad)
{
  for (int fila = 0; fila < 20; fila++)
  {
    for (int columna = 0; columna < 20; columna++)
    {
      matriz[fila][columna] = rand() % cantidad;
      printf("%i\t", matriz[fila][columna]);
    }
    printf("\n");
  }
}

void guardar()
{
  FILE *ARCHIVO = fopen("matriz.txt", "wt");
  if (ARCHIVO == NULL)
  {
    printf("Error al abrir el archivo para escribir.\n");
    return;
  }

  for (int fila = 0; fila < 20; fila++)
  {
    for (int columna = 0; columna < 20; columna++)
    {
      fprintf(ARCHIVO, "%i\t", matriz[fila][columna]);
    }
    fprintf(ARCHIVO, "\n");
  }
  fclose(ARCHIVO);
}