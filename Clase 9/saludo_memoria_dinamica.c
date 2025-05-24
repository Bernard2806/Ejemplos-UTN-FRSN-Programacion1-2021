#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// malloc() y free() permiten reservar y liberar memoria dinámica en tiempo de ejecución

char *obtenerSaludo()
{
  // Cadena local en el stack (memoria automática)
  int elementos = 100;
  char a[elementos];
  strcpy(a, "Hola, Mundo");

  // Largo de la cadena incluyendo el terminador '\0'
  int n = strlen(a) + 1;
  printf("longitud: %d\n", n);

  // Reservo memoria dinámica para copiar la cadena
  char *r = (char *)malloc(n);
  if (r == NULL)
  {
    printf("Error: no se pudo reservar memoria\n");
    return NULL;
  }

  // Copio la cadena local 'a' a la memoria dinámica 'r'
  strcpy(r, a);

  // NO se puede hacer r = &a; porque 'a' es local y desaparece al salir de la función

  return r; // devuelvo el puntero a memoria dinámica que quedó válida fuera de la función
}

int main()
{
  // Invoco la función que me devuelve un saludo en memoria dinámica
  char *s = obtenerSaludo();

  if (s != NULL)
  {
    // Muestro la cadena completa
    printf("%s\n", s);

    // Muestro el cuarto caracter (índice 3)
    printf("%c\n", s[3]);
    printf("%c\n", *(s + 3));

    // Libero la memoria dinámica para evitar fuga
    free(s);
  }

  return 0;
}