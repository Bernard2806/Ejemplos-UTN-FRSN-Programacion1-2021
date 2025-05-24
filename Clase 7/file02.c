#include <stdio.h>
#include <stdlib.h>
#include "struct_person.h" // Define struct person con id, fname, lname

int main()
{
  FILE *infile;
  struct person input;

  // Abrir archivo "person.dat" para lectura en modo binario
  infile = fopen("person.dat", "rb");
  if (infile == NULL)
  {
    fprintf(stderr, "Error al abrir el archivo 'person.dat' para lectura.\n");
    return 1; // Salir con error
  }

  int size = sizeof(struct person);

  // Leer structs hasta el final del archivo
  // fread devuelve el número de elementos leídos, se espera 1 por lectura correcta
  while (fread(&input, size, 1, infile) == 1)
  {
    printf("id = %d nombre = %s %s\n", input.id, input.fname, input.lname);
  }

  // Cerrar archivo
  fclose(infile);

  return 0;
}