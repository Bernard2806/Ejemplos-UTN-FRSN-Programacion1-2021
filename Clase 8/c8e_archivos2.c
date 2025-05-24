#include <stdio.h>

int matriz[20][20];
int fila = 0, columna = 0;

void guardar();
void cargar_matriz(int b);

int main()
{
  int cant_random = 0;
  printf("Digite el parametro final de la funcion random :");
  scanf(" %i", &cant_random);

  cargar_matriz(cant_random);
  guardar();

  return 0;
}

void cargar_matriz(int cantidad)
{
  int numero_x = 0;

  for (columna = 0; columna < 20; columna++)

  {
    for (fila = 0; fila < 20; fila++)
    {
      numero_x = rand() % cantidad;
      matriz[fila][columna] = numero_x;
      printf("%i \t", matriz[fila][columna]);
    }
    printf("\n"); 
  }
}

void guardar()
{
  FILE *ARCHIVO;
  ARCHIVO = fopen("matriz.txt", "wt");
  for (columna = 0; columna < 20; columna++)

  {
    for (fila = 0; fila < 20; fila++)
    {
      fprintf(ARCHIVO, "%i \t", matriz[fila][columna]);
    }
    fprintf(ARCHIVO, "\n"); 
  }
  fclose(ARCHIVO);
}
