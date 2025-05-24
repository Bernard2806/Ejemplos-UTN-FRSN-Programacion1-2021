#include <stdio.h>

int main()
{
  int x = 3;
  float y = 8.5;
  int z = x + y; // Acá suma x (int) con y (float). Como z es int, el resultado float se trunca a entero.

  printf("%d \n", z); // Imprime el valor entero de la suma (3 + 8.5 = 11.5, pero trunca a 11)

  int a, b;
  double cociente;
  a = 10;
  b = 3;

  // División entera: a y b son int, entonces el resultado es int (3),
  // que después se convierte automáticamente a double (3.0) al asignar a cociente.
  cociente = a / b;
  printf("conversion automatica: %f \n", cociente); // Imprime 3.000000

  // Casteo explícito para que la división sea con decimales
  cociente = (double)a / b;          // Ahora 'a' se convierte a double, así la división es flotante
  printf("casteo: %f \n", cociente); // Imprime 3.333333

  cociente = a / (double)b;          // Igual que antes, pero casteo a 'b'
  printf("casteo: %f \n", cociente); // Imprime 3.333333

  // Truncado al asignar valores con distinto tipo

  char c = 100;
  int i = 8.5; // 8.5 es float/double, pero se asigna a int, se trunca a 8

  printf("truncado char: %d \n", c); // Imprime 100 (no -127, ese sería overflow o valor distinto)
  printf("truncado int: %d \n", i);  // Imprime 8

  // Promoción automática de tipos:
  // Cuando asignás un tipo más chico a uno más grande, se convierte automáticamente.
  float nf = 30;                          // 30 es int, se convierte automáticamente a float (30.0)
  printf("promocion a float: %f \n", nf); // Imprime 30.000000

  return 0;
}