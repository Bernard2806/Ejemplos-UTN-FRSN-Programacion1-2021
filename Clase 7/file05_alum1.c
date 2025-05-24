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
1- Crear programa para cargar archivo.
2- Crear programa para leer archivo de notas y:
  2.1- Calcular promedio por alumno.
  2.2- Mostrar nota más alta de cada alumno.
- El nombre del archivo debe ser pasado por parámetro al programa

*/

typedef struct Alumno
{
  int legajo;
  char materia[20];
  int nota;
} Alumno;

// Función para crear una variable Alumno con datos
Alumno crearAlumno(int legajo, char materia[], int nota);

int main()
{
  Alumno a;
  // Abro el archivo en modo escritura binaria
  FILE *arch = fopen("ALUMNOS.dat", "wb");
  if (arch == NULL)
  {
    perror("Error al abrir el archivo");
    return 1;
  }

  // Grabamos notas para el alumno con legajo 10
  a = crearAlumno(10, "matematicas", 7);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(10, "programacion", 2);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(10, "ingles", 5);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(10, "fisica", 8);
  fwrite(&a, sizeof(Alumno), 1, arch);

  // Grabamos notas para el alumno con legajo 20
  a = crearAlumno(20, "matematicas", 6);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(20, "programacion", 4);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(20, "ingles", 9);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(20, "fisica", 7);
  fwrite(&a, sizeof(Alumno), 1, arch);

  // Grabamos notas para el alumno con legajo 30
  a = crearAlumno(30, "matematicas", 10);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(30, "programacion", 5);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(30, "ingles", 5);
  fwrite(&a, sizeof(Alumno), 1, arch);
  a = crearAlumno(30, "fisica", 6);
  fwrite(&a, sizeof(Alumno), 1, arch);

  // Cerramos el archivo
  fclose(arch);

  return 0;
}

Alumno crearAlumno(int legajo, char materia[], int nota)
{
  Alumno x;
  x.legajo = legajo;
  strcpy(x.materia, materia);
  x.nota = nota;
  return x;
}