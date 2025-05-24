#include <stdio.h>  // Librería para entrada y salida (printf, putchar, etc.)
#include <string.h> // Librería para manejar strings (strlen, etc.)

// Función que recibe una cadena de caracteres (array de char)
void imprimir(char s[])
{
  // Recorremos la cadena carácter por carácter
  for (int i = 0; s[i] != '\0'; i++)
  {                     // Mientras no sea el carácter nulo (fin de cadena)
    printf("%c", s[i]); // Imprime el carácter actual
    // putchar(s[i]);  // Alternativa para imprimir un solo carácter
    // puts(s[i]);     // No se puede usar acá porque pone un salto de línea y espera un string
  }
}

int main()
{
  char s[] = "hola"; // Definimos una cadena de texto que termina con '\0'

  // printf recibe el puntero al inicio de la cadena y la imprime hasta '\0'
  printf("%s \n", s); // Imprime "hola" y salto de línea

  // Comentarios sobre formatos de printf:
  // %u : para imprimir un entero sin signo
  // %d : para imprimir un entero con signo (int)

  printf("%d \n", sizeof(s)); // sizeof mide el tamaño en bytes del array s. Como "hola" tiene 4 letras + '\0', da 5

  // strlen mide la longitud de la cadena sin contar el '\0'
  printf("%d \n", strlen(s)); // Da 4, porque "hola" tiene 4 caracteres

  printf("imprimir:\n");
  imprimir(s); // Llamamos a la función que imprime la cadena carácter por carácter

  return 0; // Terminamos el programa devolviendo 0 (todo bien)
}