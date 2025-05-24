#include <stdio.h>

/*
LEER UN ARCHIVO PALABRA POR PALABRA

fscanf es parecido a scanf, pero lee de un archivo abierto.
Lee cada palabra hasta encontrar un espacio, salto de línea o el final del archivo.
*/

int main() 
{
  FILE *fpuntero;       // Puntero para manejar el archivo
  char str[100];        // Variable para guardar cada palabra leída
  
  fpuntero = fopen("archivo1.txt", "r"); // Abrir archivo en modo lectura
  if(fpuntero == NULL) {
    perror("Error al intentar abrir el archivo");  // Si no se puede abrir, muestra error
    return 1;
  }

  int total_palabras = 0;  
  while (fscanf(fpuntero, "%s", str) != EOF)  // Leer palabra por palabra hasta el final del archivo
  {
    total_palabras++;  
    printf("%s\n", str);  // Mostrar cada palabra en una línea nueva
  }

  printf("total palabras: %d\n", total_palabras);  // Mostrar cuántas palabras se leyeron
  
  fclose(fpuntero);  // Cerrar el archivo cuando terminamos

  return 0;  
}