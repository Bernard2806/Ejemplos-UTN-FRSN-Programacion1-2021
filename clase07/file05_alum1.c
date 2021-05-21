#include <stdio.h>
#include <string.h>

/*

en un archivo contiene las notas de los alumnos en cada materia. 
el archivo esta ordenado por legajo. 

estructura del archivo: 
typedef struct Notas
{
  int legajo;
  char materia[20];
  int nota;
} Notas ; 

se pide: 
1- crear programa para cargar archivo. 
2- crear programa para leer archivo de notas y:
  2.1- calcular promedio por alumno.  
  2.2- mostrar nota mas alta de cada alumno. 
- el nombre del archivo debe ser pasado por parametro al programa 

*/

typedef struct Alumno
{
  int legajo;
  char materia[20];
  int nota;
} Alumno; 

// 
Alumno crearAlumno(int,char[],int);


int main()
{
  Alumno a;
  // abro el archivo
  FILE* arch = fopen("ALUMNOS.dat","w");

  // grabo un alumno
  a = crearAlumno(10,"matematicas",7);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(10,"programacion",2);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(10,"ingles",5);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(10,"fisica",8);
  fwrite(&a,sizeof(Alumno),1,arch);

  // grabo un alumno
  a = crearAlumno(20,"matematicas",6);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(20,"programacion",4);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(20,"ingles",9);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(20,"fisica",7);
  fwrite(&a,sizeof(Alumno),1,arch);

  // grabo un alumno
  a = crearAlumno(30,"matematicas",10);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(30,"programacion",5);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(30,"ingles",5);
  fwrite(&a,sizeof(Alumno),1,arch);
  a = crearAlumno(30,"fisica",6);
  fwrite(&a,sizeof(Alumno),1,arch);

  // cierro el archivo
  fclose(arch);
  return 0;
}


Alumno crearAlumno(int matr,char nom[], int nota)
{
  Alumno x;
  x.legajo = matr;
  strcpy(x.materia,nom);
  x.nota = nota;
  
  return x;
}