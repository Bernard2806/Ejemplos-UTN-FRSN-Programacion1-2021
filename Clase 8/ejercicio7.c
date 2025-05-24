#include <stdio.h>

// Clase 8 - ejercicio 7
// repaso: estructuras struct

// una estructura es un grupo de componentes con identificadores propios (campos).

// declaración sin etiqueta (no recomendable porque no puedes reutilizar el tipo)
struct
{
  char first[10];
  char mindinit;
  char last[20];
} sname, ename; // variables sname y ename

// declaración con etiqueta para poder reutilizar el tipo
struct nametype
{
  char first[10];
  char mindinit;
  char last[20];
};

struct nametype sname1, ename1; // variables con tipo struct nametype

// typedef para simplificar el nombre del tipo
typedef struct
{
  char first[10];
  char mindinit;
  char last[20];
} NAMETYPE;

NAMETYPE sname2, ename2; // variables con tipo NAMETYPE

// Prototipo de función que recibe puntero a struct nametype
void print_nametype(struct nametype *);

int main()
{
  // Inicializamos para evitar imprimir basura
  // Podemos usar strcpy para copiar cadenas pero acá usamos inicialización directa
  // o manualmente para mantener simple.

  // Ejemplo: asignar el primer nombre a sname
  // Como es un array de chars, no puedes asignar directamente, debes usar strcpy
  // Aquí sólo lo inicializo manualmente
  sname.first[0] = 'J';
  sname.first[1] = 'u';
  sname.first[2] = 'a';
  sname.first[3] = 'n';
  sname.first[4] = '\0';

  printf("Nombre: %s\n", sname.first);

  ename.mindinit = 'M'; // asignación normal a char

  // copiar un string carácter por carácter (aunque es mejor usar strcpy)
  for (int i = 0; i < 20; i++)
  {
    ename1.last[i] = sname.last[i];
  }

  // estructuras anidadas
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

  struct nmadtype nmad1, nmad2; // variables de tipo nmadtype

  nmad1.name.mindinit = nmad2.name.mindinit;

  // Asignar estructuras del mismo tipo (válido en C)
  nmad1.name = nmad2.name;

  // no se pueden comparar estructuras directamente con == en C

  // llamar función pasando puntero a estructura
  print_nametype(&nmad1.name);

  return 0;
}

// La función recibe un puntero a struct nametype y muestra el campo 'first'
void print_nametype(struct nametype *name)
{
  // Aquí la forma correcta de acceder al campo 'first' y pasar a printf
  printf("%s\n", name->first);
}