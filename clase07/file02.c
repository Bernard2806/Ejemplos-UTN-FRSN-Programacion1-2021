#include <stdio.h>
#include <stdlib.h>
#include "struct_person.h"

// // struct person con 3 campos 
// struct person 
// {
//     int id;
//     char fname[20];
//     char lname[20];
// };
  
// 
int main ()
{
    FILE *infile;
    struct person input;
      
    // Abrir archivo person.dat para lectura 
    infile = fopen ("person.dat", "r");
    if (infile == NULL)
    {
        // fprintf(stderr, "\nError opening file\n");
        // exit (1);
    }
      
    int size = sizeof(struct person); 

    // leer contenido del archivo hasta ultima linea 
    while( fread(&input, size, 1, infile) ) {
      printf ("id = %d nombre = %s %s\n", input.id, input.fname, input.lname);
    }

    // cerrar archivo 
    fclose (infile);
  
    return 0;
}