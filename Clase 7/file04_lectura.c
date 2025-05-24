#include <stdio.h>

int main()
{
  FILE *arch;
  char c;

  // Abrir archivo en modo lectura
  arch = fopen("DEMO.dat", "r");
  if (arch == NULL)
  {
    perror("Error al abrir el archivo");
    return 1; // Salir con error
  }

  // Leer el primer caracter y comprobar que se leyó correctamente
  if (fread(&c, sizeof(char), 1, arch) != 1)
  {
    // Puede ser archivo vacío o error de lectura
    if (feof(arch))
    {
      printf("Archivo vacío.\n");
    }
    else
    {
      perror("Error al leer el archivo");
    }
    fclose(arch);
    return 1;
  }

  // Mientras no sea el fin de archivo
  while (!feof(arch))
  {
    // Mostrar el caracter leído
    printf("%c\n", c);

    // Leer el siguiente caracter
    if (fread(&c, sizeof(char), 1, arch) != 1)
    {
      // Si no se leyó correctamente, salimos del ciclo
      break;
    }
  }

  // Cerrar archivo
  fclose(arch);

  return 0;
}