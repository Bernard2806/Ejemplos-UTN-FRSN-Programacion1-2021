#include <stdio.h>
#include <string.h>

// Función principal del programa
int main()
{
  // Puntero donde se va a guardar cada línea que se lea del archivo
  char *linea_mostrar = NULL;

  // Variables auxiliares: 'largo' es para getline y 'tamanio' guarda la longitud de la línea
  int largo, tamanio;

  // Puntero al archivo que se va a leer
  FILE *fhandler;

  // Abrimos el archivo "string.txt" en modo lectura
  fhandler = fopen("string.txt", "r");

  // Puntero para guardar la palabra copiada de la línea
  char *palabra;

  // Mientras getline devuelva algo (o sea, mientras haya líneas para leer)
  while (getline(&linea_mostrar, &largo, fhandler) != -1)
  {
    // Calculamos cuántos caracteres tiene la línea leída
    tamanio = strlen(linea_mostrar);

    // Reservamos memoria dinámica para copiar la línea (sin contar el '\0')
    palabra = (char *)malloc(tamanio);

    // Copiamos el contenido de la línea a la memoria reservada
    strcpy(palabra, linea_mostrar);

    // Mostramos la palabra por pantalla
    printf("%s\n", palabra);

    // Liberamos la memoria que reservamos para evitar fugas
    free(palabra);
  }
}