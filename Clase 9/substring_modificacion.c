#include <stdio.h>
#include <string.h>
#include <stdlib.h> // para malloc()

// Función que devuelve un substring dinámico de s desde 'desde' hasta 'hasta' (sin incluir 'hasta')
char *substring(char *s, int desde, int hasta)
{
  int n = hasta - desde;
  char *ret = (char *)malloc(n + 1); // reservo memoria para el substring + '\0'
  int j = 0;

  for (int i = desde; i < hasta; i++)
  {
    ret[j] = s[i]; // copio caracter a caracter
    j++;
  }
  ret[j] = '\0'; // cierro con terminador de cadena

  return ret; // devuelvo el puntero a la nueva cadena dinámica
}

int main()
{
  char s[50];
  char *a;
  char *b;

  strcpy(s, "Esto es una cadena");

  a = s + 5;                      // 'a' apunta al 6º carácter de s (el espacio después de "Esto")
  b = substring(s, 5, strlen(s)); // 'b' apunta a una copia nueva desde el 6º carácter hasta el final

  printf("a = [%s]\n", a); // imprime desde el 6º carácter de s
  printf("b = [%s]\n", b); // imprime la copia

  printf("\n");

  // Ahora modificamos algunos caracteres:
  a[3] = 'X'; // modifico el carácter índice 3 de a, que es realmente s[8]
  b[3] = 'Y'; // modifico el carácter índice 3 de b (cadena nueva)
  s[5] = 'Z'; // modifico el carácter índice 5 de s (primer carácter de a)

  // Imprimo para ver qué pasó con cada cadena
  printf("s = [%s]\n", s);
  printf("a = [%s]\n", a);
  printf("b = [%s]\n", b);

  free(b); // libero la memoria dinámica reservada para b

  return 0;
}

/*
Explicación:

- 'a' apunta a una posición dentro de 's', o sea que si modificás 's' o 'a', afecta a la misma cadena.
- 'b' es una copia independiente creada con malloc, así que sus modificaciones no afectan a 's'.
- Cuando hacemos a[3] = 'X', estamos modificando s[8].
- Cuando hacemos s[5] = 'Z', también se refleja en 'a', porque 'a' apunta dentro de 's'.
- 'b' mantiene su independencia y no se ve afectada por cambios en 's' ni en 'a'.

Esto muestra la diferencia entre usar punteros que apuntan dentro de la cadena original y crear copias dinámicas independientes.
*/