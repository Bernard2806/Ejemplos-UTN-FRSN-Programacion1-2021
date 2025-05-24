#include <stdio.h>

// La función main debería devolver un int, no void
int main()
{
  // Imprime dos caracteres: 'a' y el carácter ASCII 65 (que es 'A')
  printf("Caracteres: %c %c \n", 'a', 65); // 'a' y 'A' por código ASCII

  long nro = 6500000L; // Defino una variable long con sufijo L

  // Imprime enteros: 2021 y el long nro con formato adecuado
  printf("Nro Decimal (entero): %d %ld \n", 2021, nro);

  // Imprime números en formato float, notación científica y científica con mayúsculas
  printf("Nro Float (decimal): %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
  printf("\n");

  // Imprime un entero con espacios a la izquierda para completar ancho 10
  printf("Completar con espacios a izquierda: %10d \n", 2021);

  // Imprime un entero con ceros a la izquierda para completar ancho 10
  printf("Completar con ceros a izquierda: %010d \n", 2021);
  printf("\n");

  // Imprime el número 150 en distintos sistemas numéricos:
  printf("150 en Sistema Decimal: %d \n", 150);
  printf("150 en Sistema Hexadecimal: %x \n", 150);
  printf("150 en Sistema Hexadecimal (con prefijo 0x): %#x \n", 150);
  printf("150 en Sistema Octal: %o \n", 150);
  printf("150 en Sistema Octal (con prefijo 0): %#o \n", 150);
  printf("\n");

  // Imprime el número 10 con diferentes anchos de campo usando argumento dinámico (*)
  printf("Espacios a izquierda (ancho 3): %*d \n", 3, 10);
  printf("Espacios a izquierda (ancho 8): %*d \n", 8, 10);
  printf("Espacios a izquierda (ancho 10): %*d \n", 10, 10);
  printf("\n");

  // Imprime una cadena de texto
  printf("Formato para cadenas: %s \n", "Hola string");
  printf("\n");

  return 0;
}