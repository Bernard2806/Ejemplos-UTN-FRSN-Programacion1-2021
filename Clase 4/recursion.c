#include <stdio.h>

// Función recursiva para calcular el factorial de un número
// El factorial de n (n!) es n * (n-1) * (n-2) * ... * 1
// Por definición: 0! = 1 y 1! = 1
int calcular_factorial(int nro)
{
  if (nro > 1)
  {
    // Caso recursivo: multiplica nro por el factorial de (nro-1)
    return nro * calcular_factorial(nro - 1);
  }
  // Caso base: si nro es 0 o 1, retorna 1
  return 1;
}

int main()
{
  int nro = 0;
  int resultado = 0;

  // Leemos el número para calcular su factorial
  scanf("%d", &nro);

  // Cálculo del factorial usando un bucle (forma iterativa)
  resultado = 1;
  for (int i = 1; i <= nro; i++)
  {
    resultado = resultado * i;
  }
  printf("factorial de %d (iterativo): %d\n", nro, resultado);

  // Cálculo del factorial usando la función recursiva
  int rec_resultado = calcular_factorial(nro);
  printf("factorial de %d (recursivo): %d\n", nro, rec_resultado);

  return 0;
}