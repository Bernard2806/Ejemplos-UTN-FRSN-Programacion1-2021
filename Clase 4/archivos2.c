#include <stdio.h>

/*
Lectura de un Archivo de Texto Caracter Por Caracter
En este ejemplo, se abre un archivo de texto en modo lectura y se leen sus caracteres uno por uno.
*/

int main()
{
  FILE *fpuntero; // Declaro un puntero a archivo
  char c;         // Variable para guardar cada caracter leído

  // Abro el archivo "hola_mundo3.txt" en modo lectura ("r")
  fpuntero = fopen("hola_mundo3.txt", "r");
  if (fpuntero == NULL)
  {
    // Si no se pudo abrir el archivo, aviso el error y corto el programa
    printf("Error al intentar abrir el archivo");
    return 1;
  }

  do
  {
    c = getc(fpuntero); // Leo un caracter del archivo y lo guardo en c
    printf("%c ", c);   // Lo imprimo en pantalla seguido de un espacio

  } while (c != EOF);
  // getc() devuelve el caracter leído, pero si llegó al final del archivo devuelve EOF (fin de archivo)

  fclose(fpuntero); // Cierro el archivo para liberar recursos

  return 0; // Fin del programa
}