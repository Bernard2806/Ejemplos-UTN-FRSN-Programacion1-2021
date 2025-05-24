#include <stdio.h>
#include <stdlib.h>

// Función que devuelve un substring de s desde índice 'desde' hasta 'hasta' (sin incluir 'hasta')
char* substring(char* s, int desde, int hasta)
{
  int n = hasta - desde; // cantidad de caracteres a copiar
  char* ret = (char*) malloc(n + 1); // reservo memoria para el substring + '\0'
  int j = 0;

  for (int i = desde; i < hasta; i++)
  {
    ret[j] = s[i];  // copio caracter por caracter
    j++;
  }
  ret[j] = '\0';  // corto la cadena con el caracter nulo

  return ret;
}

int main()
{
  char* x = "Esto es una cadena";

  // Imprime "Esto"
  char* sub1 = substring(x, 0, 4);
  printf("%s\n", sub1);
  free(sub1);  // libero memoria

  // Imprime "una"
  char* sub2 = substring(x, 8, 11);
  printf("%s\n", sub2);
  free(sub2);  // libero memoria

  return 0;
}