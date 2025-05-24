#include <stdio.h>
#include <string.h>
// #include "alumnos.h"

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


int main()
{
  FILE* arch;
  Alumno a;
  Alumno alumno_anterior; 
  //int legajo_anterior; 
  int total = 0; 
  int cantidad = 0; 
  float promedio = 0; 

  // abrimos el archivo para lectura
  arch = fopen("ALUMNOS.dat","r");
  
  // la primer leida la hacemos afuera del while
  fread(&a,sizeof(Alumno),1,arch);
  // legajo_anterior = a.legajo; 
  
  // iteramos mientras no sea eof
  while( !feof(arch) ) {
    // printf("%d, %s, %d\n",a.legajo,a.materia,a.nota);
    alumno_anterior = a; 

    while ( alumno_anterior.legajo == a.legajo && !feof(arch) )
    {
      total = total + a.nota; 
      cantidad += 1; 
      // leemos el siguiente registro del archivo
      fread(&a,sizeof(Alumno),1,arch);
    }
    promedio = (float)total / cantidad; 
    printf("legajo %d, promedio: %.2f\n",alumno_anterior.legajo, promedio);

    total = 0;
    cantidad = 0; 

  }


  // cerramos el archivo
  fclose(arch);
  return 0;
}