#include <stdio.h>

/*
LEER UN ARCHIVO DE TEXTO LÍNEA POR LÍNEA

La función fgets lee hasta 100 caracteres o hasta que encuentra un salto de línea o el final del archivo.
Guarda lo que leyó en "buffer".
Si llega al final del archivo, devuelve NULL.
*/

int main()
{
  FILE *fpuntero;   // Puntero para manejar el archivo
  char *pc;         // Puntero para saber si fgets leyó algo o llegó al final
  char buffer[100]; // Lugar donde guardamos cada línea leída

  fpuntero = fopen("hola_mundo4.txt", "r"); // Abrir archivo en modo lectura
  if (fpuntero == NULL)
  {
    perror("Error al intentar abrir el archivo"); // Si falla, muestra error
    return 1;
  }

  do
  {
    pc = fgets(buffer, 100, fpuntero); // Leer una línea (hasta 99 caracteres o salto de línea)

    if (pc != NULL)
    {
      printf("%s", buffer); // Si leyó algo, lo muestro por pantalla
    }
    else
    {
      printf("null"); // Si no leyó nada (fin de archivo), muestro "null"
    }

  } while (pc != NULL); // Repetir hasta que no quede nada por leer

  fclose(fpuntero); // Cerrar el archivo cuando terminamos

  return 0; // Fin del programa
}