#include <stdio.h>
#define STRSIZE 80
// Clase 8 - ejercicio 6
// repaso: cadenas de caracteres (strings)

// en C definimos un string como: un array de caracteres que termina con el caracter '\0'
// cualquier conjunto de caracteres entre comillas dobles
// cada espacio en blanco y el caracter '\0' se cuentan como caracteres.

// ejemplos Operaciones primitivas:
// strlen() : longitud del string,
// strcat() : concatenar 2 strings
// substr() : recuperar una subcadena del string original
// strpos() : busca un string dentro de otro

// algunas de estas funciones están en la biblioteca string.h, aquí las definimos manualmente para repaso.

int strlen(char[]);
void strcat(char[], char[]);
void substr(char[], int, int, char[]);
int strpos(char[], char[]);

int main()
{
  char string1[STRSIZE] = "Hola ";
  char string2[] = "Mundo";
  char subcadena[STRSIZE];
  int len1, pos;

  // Longitud de string1
  len1 = strlen(string1);
  printf("Longitud de string1: %d\n", len1);

  // Concatenar string2 a string1
  strcat(string1, string2);
  printf("Concatenado: %s\n", string1);

  // Obtener subcadena de string1, desde índice 2, longitud 4
  substr(string1, 2, 4, subcadena);
  printf("Subcadena: %s\n", subcadena);

  // Buscar posición de string2 en string1
  pos = strpos(string1, string2);
  printf("Posición de '%s' en '%s': %d\n", string2, string1, pos);

  return 0;
}

// devuelve la cantidad de caracteres de un string que recibe como parametro
int strlen(char s[])
{
  int i;
  for (i = 0; s[i] != '\0'; i++)
    ;
  return i;
}

// concatena s2 al final de s1
void strcat(char s1[], char s2[])
{
  int i, j;

  // buscar el final de s1
  for (i = 0; s1[i] != '\0'; i++)
    ;

  // copiar caracteres de s2 al final de s1
  for (j = 0; s2[j] != '\0'; j++, i++)
  {
    s1[i] = s2[j];
  }

  s1[i] = '\0'; // añadir terminador de cadena
}

// copia en s2, j caracteres de s1 a partir de s1[i]
void substr(char s1[], int i, int j, char s2[])
{
  int k, m;

  for (k = i, m = 0; m < j && s1[k] != '\0'; m++, k++)
  {
    s2[m] = s1[k];
  }

  s2[m] = '\0'; // terminar la subcadena
}

// Retorna un entero con la posición donde comienza s2 dentro de s1.
// Si s2 no existe en s1, retorna -1
int strpos(char s1[], char s2[])
{
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int i, j, k;

  for (i = 0; i + len2 <= len1; i++)
  {
    for (j = i, k = 0; k < len2 && s1[j] == s2[k]; j++, k++)
      ;

    if (k == len2) // coincidencia completa
    {
      return i;
    }
  }
  return -1;
}