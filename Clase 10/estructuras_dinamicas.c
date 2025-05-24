#include <stdio.h>

/*
estructuras de datos dinámicas 
con tamaños que crecen y disminuyen en tiempo de ejecución. 
- Las listas ligadas o enlazadas son colecciones de elementos de datos “alineados en una
fila”; las inserciones y las eliminaciones se hacen en cualquier parte de una lista ligada. 
- Las pilas son importantes para los compiladores y los sistemas operativos; las inserciones y 
las eliminaciones se hacen sólo en un extremo de la pila, esto es, en la cima. 
- Las colas representan líneas de espera; las inserciones se hacen en la
parte final (también conocida como los talones) de una cola, y las eliminaciones se hacen de la parte inicial
(también conocida como la cabeza) de una cola. 
- Los árboles son estructuras de datos no lineales que facilitan la búsqueda y el ordenamiento de datos
de alta velocidad, la eliminación eficiente de elementos de datos duplicados, la representación de directorios
del sistema de archivos y la compilación de expresiones en lenguaje máquina. 
Cada una de estas estructuras de datos tiene muchas otras aplicaciones interesantes.
*/

/*
asignación dinámica de memoria: 
la habilidad de un programa para obtener más espacio de memoria en tiempo de ejecución, para almacenar nuevos
nodos, y para liberar espacio que ya no es necesario.

malloc() toma como un argumento al número de bytes que van a asignarse, y devuelve un
apuntador de tipo void* (apuntador a void) hacia la memoria asignada.

free() libera memoria, es decir, la memoria se devuelve al sistema para que ésta pueda reasignarse
en el futuro.

*/

int main()
{
  struct nodo {
    int dato;
    struct nodo *ptrSiguiente;
  };
  // Una estructura del tipo struct nodo tiene dos miembros; el miembro entero
  // dato y el miembro apuntador ptrSiguiente. El miembro ptrSiguiente apunta hacia la estructura
  // de tipo struct nodo; una estructura del mismo tipo que la que estamos declarando aquí, y de ahí el término
  // “estructura autorreferenciada”.

  struct nodo *ptrNuevo = malloc( sizeof( struct nodo ) );

  free( ptrNuevo );
  
  return 0;
}
