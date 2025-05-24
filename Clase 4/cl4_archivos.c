// En C, cada archivo es una simple secuencia de bytes (stream). C no impone estructura alguna.
// Antes de poder utilizar un archivo, primero debe abrirse. Al abrirlo se crea un stream asociado al archivo.
// Si el archivo se abre exitosamente, se obtiene un puntero a una estructura file que contiene un descriptor del archivo y un bloque de control.

// La entrada y salida se hace a través de streams. Un stram se puede asociar a un dispositivo (p.e. puerto serie) o a un archivo. Existen dos tipos de streams en C:
// • Text Stream Files
// • Binary Stream Files

// maneja toda esta información en una estructura FILE definida en stdio.h.

// Los Text streams consisten en 0 o más líneas separadas por un caracter '\n' y 
// una secuencia de caracteres dentro de cada una de ellas. El text stream finaliza en '\0'
// Binary streams son datos como integers, floats o estructuras pero utilizando su misma 
// representación como se hace en memoria.

// C crea tres streams automáticamente para comunicarnos con las terminales:
// –Stdin: un stream de entrada
// –Stdout: un stream de salida
// –Stderr: standard error stream es la salida por defecto para mensajes de error y advertencias del compilador.

#include <stdio.h>

int main() 
{
  // fopen(“filename”, “modo”);
  // – Conecta al archivo lógico con el stream
  // – Crea la estructura “file”
  // - Si la apertura fue exitosa se devuelve un valor distinto de NULL.
  // filename : indica el path y el nombre del archivo.
  // modo : describe cómo el programa usará el archivo (lectura, escritura, etc).
    // r : read mode 
    // w : write mode
    // a : append mode 

  // fclose(fpuntero);
  // Siempre se debe cerrar el archivo antes de cerrar el programa.
  // También se debe cerrar el stream si se quiere abrir el mismo archivo en un modo distinto.

  char str[] = "hola mundo\n"; 
  FILE *fpuntero; 

  fpuntero = fopen("hola_mundo4.txt", "a");
  if (fpuntero == NULL) {
    printf("Error al intentar abrir el archivo");
    return 1;
  }

  fprintf(fpuntero, "1 Guardamos el string %s", str );
  fprintf(fpuntero, "2 Guardamos el string %s", str );
  fprintf(fpuntero, "3 Guardamos el string %s", str );

  fclose(fpuntero);
  // printf("Pulse una tecla para salir del programa\n");

  return 0;

}


