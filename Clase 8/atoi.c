#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int val;
  char str[20];

  // Convertir string que representa un número a entero
  strcpy(str, "98993489");
  val = atoi(str); // convierte "98993489" a entero 98993489
  printf("String value = %s, Int value = %d\n", str, val);

  // Si la cadena no comienza con dígitos, atoi devuelve 0
  strcpy(str, "tutorialspoint.com");
  val = atoi(str);
  printf("String value = %s, Int value = %d\n", str, val);

  // Uso de strtol para convertir números al inicio de una cadena
  char str2[30] = "2030300 This is test";
  char *ptr;
  long ret;

  // strtol convierte la parte inicial numérica y ptr apunta al resto
  ret = strtol(str2, &ptr, 10);
  printf("The number (long integer) is %ld\n", ret);
  printf("String part is |%s|\n", ptr);

  return 0;
}