#include <stdio.h>
#include <string.h> // Necesario para usar strcpy

// Creamos un alias para la estructura Dirección
typedef struct Direccion
{
  char calle[50];
  int numero;
  int piso;
  char depto;
} direccion_td;

// Definimos la estructura Persona, que incluye una dirección
typedef struct Persona
{
  char nombre[30];
  long dni;
  direccion_td direccion; // Dirección usando el alias
  struct Direccion dir2;  // Dirección usando el tipo original (sin alias)
} Persona;

// Función que carga datos en una dirección (forma larga con (*d).miembro)
void cargarDireccion1(direccion_td *d)
{
  strcpy((*d).calle, "Mitre");
  (*d).numero = 1210;
  (*d).depto = 'C';
  (*d).piso = 7;
}

// Función que carga datos en una dirección (forma más corta con d->miembro)
void cargarDireccion2(direccion_td *d)
{
  strcpy(d->calle, "Mitre");
  d->numero = 1210;
  d->depto = 'C';
  d->piso = 7;
}

int main()
{
  // Declaramos una variable de tipo Direccion
  direccion_td d;
  strcpy(d.calle, "Av. Siempre viva");
  d.numero = 743;
  d.piso = 12;
  d.depto = 'A';

  // Declaramos una variable de tipo Persona
  Persona p;
  strcpy(p.nombre, "Pablo");
  p.dni = 23354212;
  p.direccion = d; // Asignamos la dirección

  // Mostramos los datos
  printf("Dirección de %s:\n", p.nombre);
  printf("Calle: %s\n", p.direccion.calle);
  printf("Número: %d\n", p.direccion.numero);
  printf("Piso: %d\n", p.direccion.piso);
  printf("Depto: %c\n", p.direccion.depto);

  return 0;
}