#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct_person.h"

// // a struct to read and write
// struct person 
// {
//     int id;
//     char fname[20]; // nombre 
//     char lname[20]; // apellido 
// };
  
int main ()
{
    FILE *outfile;
      
    // abrir archivo para escritura 
    outfile = fopen("person.dat", "w");
    if (outfile == NULL)
    {
        // fprintf(stderr, "\nError al abrir archivo\n");
        // exit (1);
    }
  
    struct person input1 = {1, "juan maria", "traverso"};
    struct person input2 = {2, "guillermo", "ortelli"};
    struct person input3 = {3, "cristian", "ledesma"};
    struct person input4 = {4, "emilio", "satriano"};
      
    // write struct to file
    fwrite(&input1, sizeof(struct person), 1, outfile);
    fwrite(&input2, sizeof(struct person), 1, outfile);
    fwrite(&input3, sizeof(struct person), 1, outfile);
    fwrite(&input4, sizeof(struct person), 1, outfile);
      
    if( fwrite != 0 ) {
      printf("contents to file written successfully !\n");
    } else {
      printf("error writing file !\n");
    }

    // cerrar archivo 
    fclose(outfile);
  
    return 0;
}