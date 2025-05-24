#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct_person.h" // Se asume que aquí está definida la estructura 'person'

// Ejemplo de estructura person que se espera en struct_person.h
// struct person {
//     int id;
//     char fname[20];  // nombre
//     char lname[20];  // apellido
// };

int main()
{
  FILE *outfile;

  // Abrir archivo para escritura binaria ("wb" para escritura en modo binario)
  outfile = fopen("person.dat", "wb");
  if (outfile == NULL)
  {
    fprintf(stderr, "Error al abrir archivo para escritura\n");
    exit(1); // Salir si no se puede abrir el archivo
  }

  // Crear varias instancias de struct person con datos de ejemplo
  struct person input1 = {1, "juan maria", "traverso"};
  struct person input2 = {2, "guillermo", "ortelli"};
  struct person input3 = {3, "cristian", "ledesma"};
  struct person input4 = {4, "emilio", "satriano"};

  // Escribir las estructuras al archivo
  // fwrite recibe: puntero a datos, tamaño de cada elemento, cantidad de elementos, archivo
  if (fwrite(&input1, sizeof(struct person), 1, outfile) != 1 ||
      fwrite(&input2, sizeof(struct person), 1, outfile) != 1 ||
      fwrite(&input3, sizeof(struct person), 1, outfile) != 1 ||
      fwrite(&input4, sizeof(struct person), 1, outfile) != 1)
  {
    printf("Error escribiendo en el archivo\n");
    fclose(outfile);
    exit(1);
  }
  else
  {
    printf("Contenido escrito en el archivo correctamente!\n");
  }

  // Cerrar archivo después de escribir
  fclose(outfile);

  return 0;
}