#include <stdlib.h>
#include <stdio.h>

/*
La función calloc asigna memoria dinámicamente para un arreglo.
    void *calloc( size_t nmemb, size_t tamanio );
nmemb: numero de elementos 
tamanio: el tamaño de cada elemento
La función calloc también inicializa en cero a los elementos del arreglo. La función devuelve un apuntador a la
memoria asignada, o un apuntador NULL si la memoria no está asignada. La principal diferencia entre malloc
y calloc es que calloc limpia la memoria que asigna y malloc no lo hace.
*/

/*
La función realloc modifica el tamaño de un objeto asignado por una llamada previa a malloc, calloc
o realloc. El contenido original del objeto no se modifica si el monto de memoria asignada es mayor
que el monto de memoria asignada previamente. De lo contrario, el contenido no se modifica hasta el tamaño
del nuevo objeto.
    void *realloc( void *ptr, size_t tamanio );
ptr: puntero al objeto original 
tamanio: nuevo tamaño del objeto 
Si ptr es NULL, realloc trabaja de forma idéntica a malloc. Si tamanio es 0 y ptr no es NULL, se libera la
memoria del objeto. De lo contrario, si ptr no es NULL y tamanio es mayor que cero, realloc intenta
asignar un nuevo bloque de memoria para el objeto. Si el nuevo espacio no puede asignarse, el objeto al que
apunta ptr no se modifica. La función realloc devuelve ya sea un apuntador a la reasignación de memoria,
o un apuntador NULL para indicar que no se reasignó la memoria.
*/

// el tipo definido como macro size_t se utiliza en la biblioteca estandar para representar cantidades enteras positivas. 

#define N 10

int main(int argc, char const *argv[])
{
  float *pf;
  int *pi; 

  // calloc 
  pf = (float *) calloc(N, sizeof(float) ); 
  if ( !( pf ) )
  {
    printf("no hay suficiente memoria");
  }
  
  // realloc 
  pi = (int *) malloc(N); 
  // ....
  pi = (int *) realloc(pi, 3 * N); 

  free(pf);
  free(pi);

  // int elementos;
  // scanf("... ", &elementos); 

  // // esto NO es correcto:
  // // int numeros[elementos] ; 
  // int *numeros = (int *) calloc( elementos, sizeof(int) );

  // for (size_t i = 0; i < elementos; i++)
  // {
  //   scanf("",nro)
  //   suma += nro; 
  // }
  // promedio = suma / elementos; 
  // printf(promedio)
  

  return 0;
}

/*
problemas: 
1. desarrolle un programa que lea un numero de teclado, que indica a su vez cuantos numeros enteros
ingresará el usuario a continuacion. Crear el vector ppara almacenar el tamaño exacto de los datos y 
leer los enteros que serán guardados en el vector "dinamico". Informar el promedio de los datos ingresados. 

2. Utilizando la siguiente definicion de estructura, realice un programa que solicite memoria para 5 alumnos. 
struct alumno {
  int legajo; 
  char sexo; 
  char nombre[30];
  float promedio;
}
el usuario ingresará por teclado los datos que se cargan en las estructuras. 
mostrar el nombre de los alumnos uno debajo del otro. a continuacion mostrar cual es el alumno con mejor promedio. 

*/
