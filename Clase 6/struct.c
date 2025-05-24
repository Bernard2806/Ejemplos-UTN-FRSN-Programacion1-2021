#include <stdio.h>

// Una *estructura* (struct) nos permite agrupar datos distintos bajo un solo nombre.

struct Persona // Por convención, el nombre de la estructura empieza con mayúscula
{
  char nombre[50]; // Cadena de caracteres (nombre)
  int dni;         // Número de DNI (simulando un número de ciudadano)
  float sueldo;    // Sueldo

  // No se pueden inicializar miembros dentro de la estructura
};

// Otra estructura como ejemplo:
struct Punto
{
  int x, y;
};

// Con typedef podés crear un alias para no escribir siempre "struct..."
typedef struct Distancia
{
  int pies;
  float pulgadas;
} Distancia;

int main()
{
  // Declaración de variables de tipo struct
  struct Persona persona1, persona2, personas[20];

  // Inicialización directa de una estructura simple
  struct Punto punto1 = {0, 1};

  // Usando el alias con typedef
  Distancia d1, d2;

  // Accediendo a los miembros con el operador punto (.)
  punto1.x = 20;
  printf("x = %d, y = %d\n", punto1.x, punto1.y);

  // También se pueden hacer arrays de estructuras
  struct Punto puntos[10];

  puntos[0].x = 10;
  puntos[0].y = 20;

  printf("x = %d, y = %d\n", puntos[0].x, puntos[0].y);

  // Puntero a estructura
  struct Punto *punto2;
  punto2 = &punto1;

  // Accediendo con operador flecha (->)
  printf("x = %d, y = %d\n", punto2->x, punto2->y);
  // Es equivalente a: (*punto2).x

  return 0;
}