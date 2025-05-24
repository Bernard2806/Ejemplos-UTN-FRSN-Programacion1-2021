#include <stdio.h>

// Función recursiva para calcular el número Fibonacci
// Recibe un entero 'numero' y devuelve un long int con el resultado
long int fibonacci(int numero)
{
  if (numero < 2) // Caso base: fibonacci(0) = 0, fibonacci(1) = 1
    return numero;

  // Llamada recursiva: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
  return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main(int argc, char const *argv[])
{
  int numero;

  printf("Ingrese un número para calcular su Fibonacci: ");
  scanf("%d", &numero);

  // Validar que el número no sea negativo para evitar resultados indefinidos
  if (numero < 0)
  {
    printf("Error: el número debe ser mayor o igual a 0.\n");
    return 1;
  }

  long int resultado = fibonacci(numero);
  printf("El Fibonacci de %d es %ld\n", numero, resultado);

  return 0;
}