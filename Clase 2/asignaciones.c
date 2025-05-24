#include <stdio.h> // Incluye la librería estándar para poder usar funciones como printf

int main()
{
  int e, f; // Declaramos dos variables enteras: e y f
  e = f;    // Le asignamos a e el valor que tenga f (¡ojo! f no tiene valor aún)
  e += f;   // Le sumamos a e el valor de f (lo mismo que escribir e = e + f)
  e -= f;   // Le restamos a e el valor de f (e = e - f)
  e *= f;   // Multiplicamos e por f (e = e * f)

  // Ahora declaramos más variables
  int a, b, c, d;
  a = 0; // Inicializamos a en 0
  b = 0; // Inicializamos b en 0
  c = 0; // Inicializamos c en 0
  d = 0; // Inicializamos d en 0

  // Probamos los operadores de incremento y decremento

  e = a++; // Post-incremento: primero e toma el valor de a (0), y después a se incrementa (a queda en 1)
  e = ++b; // Pre-incremento: primero b se incrementa (b queda en 1), y después ese valor se asigna a e (e = 1)
  e = c--; // Post-decremento: primero e toma el valor de c (0), y después c se decrementa (c queda en -1)
  e = --d; // Pre-decremento: primero d se decrementa (d queda en -1), y luego ese valor se asigna a e (e = -1)

  // Asignamos el valor 1 a todas las variables de una sola vez
  a = b = c = d = e = f = 1; // Esto es una forma rápida de igualar muchas variables al mismo valor

  return 0;
}