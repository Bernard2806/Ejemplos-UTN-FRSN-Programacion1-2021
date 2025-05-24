// En C, un archivo es simplemente una secuencia de bytes, no tiene estructura fija.
// Para usar un archivo, primero hay que abrirlo. Al abrirlo, se crea un "stream" asociado.
// Si se abre bien, te devuelve un puntero a una estructura FILE que guarda info del archivo.

// La entrada y salida se hacen usando streams. Un stream puede estar conectado a un archivo o a un dispositivo (como un puerto).
// Hay dos tipos de streams en C:
// - Archivos de texto
// - Archivos binarios

// Toda esta info se maneja con la estructura FILE que está en stdio.h.

// Los archivos de texto son líneas de caracteres separadas por '\n' y terminan con '\0'.
// Los archivos binarios guardan datos en el formato interno de la memoria, como números o estructuras.

// C crea automáticamente tres streams para la consola:
// - stdin: para leer datos (entrada)
// - stdout: para mostrar datos (salida)
// - stderr: para mostrar errores y mensajes importantes

#include <stdio.h>

int main()
{
  // fopen("archivo", "modo");
  // - Abre el archivo y conecta el stream
  // - Crea la estructura FILE
  // - Si se abre bien, devuelve un puntero distinto de NULL
  // "archivo" es el nombre o ruta del archivo
  // "modo" es cómo vas a usar el archivo (lectura, escritura, etc)
  // "r" = leer
  // "w" = escribir (borra lo que había)
  // "a" = agregar al final

  // fclose(puntero);
  // Siempre hay que cerrar el archivo cuando terminas.
  // También hay que cerrarlo si querés abrirlo después en otro modo.

  char str[] = "hola mundo\n";
  FILE *fpuntero;

  fpuntero = fopen("hola_mundo4.txt", "a");
  if (fpuntero == NULL)
  {
    printf("Error al intentar abrir el archivo");
    return 1;
  }

  fprintf(fpuntero, "1 Guardamos el string %s", str);
  fprintf(fpuntero, "2 Guardamos el string %s", str);
  fprintf(fpuntero, "3 Guardamos el string %s", str);

  fclose(fpuntero);

  return 0;
}