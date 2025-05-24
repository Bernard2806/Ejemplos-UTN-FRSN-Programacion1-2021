#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // para malloc()

// Función que devuelve un substring dinámico de s desde 'desde' hasta 'hasta' (sin incluir 'hasta')
char* substring(char* s, int desde, int hasta)
{
  int n = hasta - desde;
  char* ret = (char*) malloc(n + 1);  // reservo memoria para el substring + '\0'
  int j = 0;

  for (int i = desde; i < hasta; i++)
  {
    ret[j] = s[i];  // copio caracter a caracter
    j++;
  }
  ret[j] = '\0';  // cierro con terminador de cadena

  return ret;  // devuelvo el puntero a la nueva cadena dinámica
}

int main()
{
  char s[50];
  char *a;
  char *b;

  strcpy(s, "Esto es una cadena");
  
  a = s + 5;  // a apunta al carácter 5 de s (es un puntero dentro de s)
  b = substring(s, 5, strlen(s));  // b apunta a una copia nueva de s desde el carácter 5 hasta el final
  
  printf("a = [%s]\n", a);
  printf("b = [%s]\n", b);

  // Diferencia entre a y b:
  // a es un puntero que apunta directamente dentro de la cadena original 's'
  // b es un puntero a una nueva cadena que fue creada con malloc, es independiente de 's'

  free(b); // liberamos la memoria asignada dinámicamente
  
  return 0;
}

/*
Comentario:

- 'a' no crea copia, solo apunta a una posición interna de 's'. Si modificás s, 'a' lo verá.
- 'b' es un bloque de memoria nuevo, con una copia exacta de esa parte de la cadena.
- Esto permite manipular 'b' sin afectar 's' ni viceversa.
*/