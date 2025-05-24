#include <stdio.h>
#include <string.h>

/*

En un archivo contiene las notas de los alumnos en cada materia.
El archivo está ordenado por legajo.

Estructura del archivo:
typedef struct Notas
{
  int legajo;
  char materia[20];
  int nota;
} Notas ;

Se pide:
1- crear programa para cargar archivo.
2- crear programa para leer archivo de notas y:
  2.1- calcular promedio por alumno.
  2.2- mostrar nota más alta de cada alumno.
- El nombre del archivo debe ser pasado por parámetro al programa

*/

typedef struct Alumno
{
  int legajo;
  char materia[20];
  int nota;
} Alumno;

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("Uso: %s archivo\n", argv[0]);
    return 1;
  }

  FILE *arch;
  Alumno a;
  int total = 0;
  int cantidad = 0;
  int nota_max = -1;
  int legajo_actual = -1;

  // Abrimos el archivo para lectura binaria
  arch = fopen(argv[1], "rb");
  if (arch == NULL)
  {
    perror("Error al abrir archivo");
    return 1;
  }

  // Leer el primer registro para iniciar
  if (fread(&a, sizeof(Alumno), 1, arch) != 1)
  {
    printf("Archivo vacío o error de lectura\n");
    fclose(arch);
    return 1;
  }

  legajo_actual = a.legajo;
  total = a.nota;
  cantidad = 1;
  nota_max = a.nota;

  while (fread(&a, sizeof(Alumno), 1, arch) == 1)
  {
    if (a.legajo == legajo_actual)
    {
      // Mismo alumno, acumulamos notas
      total += a.nota;
      cantidad++;
      if (a.nota > nota_max)
      {
        nota_max = a.nota;
      }
    }
    else
    {
      // Nuevo alumno, mostramos resultados del anterior
      printf("Legajo %d: promedio = %.2f, nota más alta = %d\n",
             legajo_actual, (float)total / cantidad, nota_max);

      // Reseteamos contadores para el nuevo alumno
      legajo_actual = a.legajo;
      total = a.nota;
      cantidad = 1;
      nota_max = a.nota;
    }
  }

  // Mostrar resultados para el último alumno leído
  printf("Legajo %d: promedio = %.2f, nota más alta = %d\n",
         legajo_actual, (float)total / cantidad, nota_max);

  fclose(arch);

  return 0;
}