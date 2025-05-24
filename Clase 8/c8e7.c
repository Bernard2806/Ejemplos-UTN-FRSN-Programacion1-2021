#include <stdio.h>

// Clase 8 - ejercicio 7 
// repaso: estructuras struct

// una estructura es un grupo de componentes en el cual cada componente tiene su propio identificador, cada uno de los cuales se conoce como un elemento de la estructura.

struct 
{
  char first[10];
  char mindinit; 
  char last[20];
} sname, ename;
// declaracion: se crean 2 variables de estructura: sname y ename

// tambien podemos asignarle una etiqueta: 
struct nametype 
{
  char first[10];
  char mindinit; 
  char last[20];
}; 
struct nametype sname1, ename1;  // declaracion 

// otra alternativa es usar typedef 
typedef struct {
  char first[10];
  char mindinit; 
  char last[20];
} NAMETYPE; 
NAMETYPE sname2, ename2; // declaracion 

void print_nametype(struct nametype *); 


int main()
{
  
  // para acceder a los elementos utilizamos : 
  // operador .
  printf("%s", sname.first); 
  
  ename.mindinit = 'm';

  // si un elemento es un array, podemos usar un for 
  for (int i = 0; i < 20; i++)
  {
    // copiar contenido de un string caracter por caracter. 
    ename1.last[i] = sname.last[i];
  }
  
  // podemos declarar una estructura dentro de otra: 
  struct addrtype
  {
    char street[40];
    char city[10];
    char state[3];
    char zip[6];
  };
  struct nmadtype
  {
    struct nametype name;
    struct addrtype address; 
  }; 

  struct nmadtype nmad1, nmad2;  // declaracion 

  nmad1.name.mindinit = nmad2.name.mindinit; 

  // si las estructuras son del mismo tipo:  (esto es valido para algunos compiladores)
  nmad1.name = nmad2.name; 
  
  // no se pueden comparar estructuras en una sola operacion.

  // para pasar una estructura a una funcion debemos hacerlo por referencia
  print_nametype( &nmad1 ); 


  return 0;
}


void print_nametype(struct nametype *name) 
{
  printf("%s\n", *name->first); 
}