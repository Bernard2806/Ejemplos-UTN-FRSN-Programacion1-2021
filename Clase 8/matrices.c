#include <stdio.h>
#include <string.h>
#define COLS 50

int main()
{
  char datos[3][COLS]; // matriz para guardar 3 cadenas de hasta 49 caracteres + '\0'
  char palabra[COLS];

  // Lectura y almacenamiento
  for (int i = 0; i < 3; i++)
  {
    printf("Ingrese una palabra: ");
    scanf("%49s", palabra); // límite para evitar overflow

    strcat(palabra, " - algo mas"); // concatenamos texto adicional
    strcpy(datos[i], palabra);      // copiamos a la matriz
  }

  printf("---------------------\n");

  // Mostrar cada palabra almacenada carácter a carácter
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < COLS && datos[i][j] != '\0'; j++)
    {
      printf("%c", datos[i][j]);
    }
    printf("\n");
  }

  // Abrir archivo para escritura
  FILE *arch = fopen("datos.txt", "w");
  if (arch == NULL)
  {
    perror("Error al abrir el archivo");
    return 1;
  }

  // Guardar en archivo
  for (int i = 0; i < 3; i++)
  {
    fprintf(arch, "%s\n", datos[i]);
  }

  fclose(arch);

  return 0;
}