#include <stdio.h>
#include <string.h>

// Función que guarda una matriz 5x5 en un archivo de texto
void guardar_archivo(int m[5][5])
{
  FILE *fichero = fopen("matriz.txt", "w");
  if (fichero == NULL)
  {
    perror("Error al abrir archivo");
    return;
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      fprintf(fichero, "%i\t", m[i][j]);
    }
    fprintf(fichero, "\n");
  }

  fclose(fichero);
}

// Definición de estructura Alumnos (no usada en este ejemplo)
struct Alumnos
{
  char nombre[50];
  char apellido[50];
};

int main()
{
  int matriz[5][5];

  // Inicializar toda la matriz con ceros
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      matriz[i][j] = 0;
    }
  }

  // Guardar matriz en archivo
  guardar_archivo(matriz);

  return 0;
}