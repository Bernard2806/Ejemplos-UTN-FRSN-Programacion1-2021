#include <stdio.h>

main()
{
  int e,f; 
  e = f; // asigna el valor de f a e
  e += f; // e = e + f
  e -= f; // e = e - f
  e *= f; // e = e * f

  int a, b, c, d; 
  a = 0; b = 0; c = 0; d = 0;
  e = a++; // a = a + 1, Post incremento, e = 0, a = 1
  e = ++b; // b = b + 1, Pre incremento, e = 1, b = 1
  e = c--; // c = c - 1, Post decremento, e = 0, c = -1
  e = --d; // d = d - 1, Pre decremento, e = -1, d = -1

  a = b = c = d = e = f = 1; // usa la propagación para asignar varias
                             // variables a la vez.
  
}