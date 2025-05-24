#include <stdio.h>

// Versión iterativa para calcular la longitud de una cadena de caracteres
int longitud(const char *string)
{
  int i = 0;
  int longitud = 0;

  // Iterar mientras no se encuentre el carácter nulo '\0' que marca el final de la cadena
  while (string[i] != '\0')
  {
    longitud++; // Incrementar contador de longitud
    i++;        // Avanzar al siguiente carácter
  }

  return longitud; // Devolver la longitud calculada
}

// Versión recursiva para calcular la longitud de una cadena de caracteres
// 'i' es el índice actual que se está evaluando
int longitud_rec(const char *string, int i)
{
  // Caso base: si se encontró el carácter nulo, longitud = 0
  if (string[i] == '\0')
  {
    return 0;
  }
  else
  {
    // Sumar 1 por el carácter actual y llamar recursivamente para el siguiente
    return 1 + longitud_rec(string, i + 1);
  }
}

int main(int argc, char const *argv[])
{
  const char *texto = "Hola mundo";

  // Usar versión iterativa
  int len_iter = longitud(texto);
  printf("Longitud (iterativa) de \"%s\" es: %d\n", texto, len_iter);

  // Usar versión recursiva (se inicia en índice 0)
  int len_rec = longitud_rec(texto, 0);
  printf("Longitud (recursiva) de \"%s\" es: %d\n", texto, len_rec);

  return 0;
}