#include <stdio.h>
#include <string.h>

void guardar_archivo(int m[5][5]) 
{ 
  FILE* fichero;
  fichero = fopen("matriz.txt", "w");    
  
  for (int i=0; i<5; i++)
  {
    for (int j=0; j<5; j++)
    {
        fprintf(fichero,"%i \t", m[i][j]);
    }
    fprintf(fichero, "\n");
  }
   
  fclose(fichero);

}

struct Alumnos
{
    char nombre[50];
    char apellido[50];
};


int main()
{
  // struct Alumnos matriz[2][10];
  int matriz[5][5]; // = { {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5} }; 

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      matriz[i][j] = 0;
    }
    
  }
  
  guardar_archivo(matriz); 

  return 0;
}



