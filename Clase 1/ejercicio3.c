#include <stdio.h>

/*
3. Dado un valor numérico entero, informar si es par o impar.
*/

int main()
{
  // Variable para guardar el número ingresado por el usuario
  int valor1;

  // Variable para guardar el resto de la división por 2
  int resto;

  // Pedimos al usuario que ingrese un número entero
  printf("Ingrese numero entero: ");
  scanf("%d", &valor1);

  // Calculamos el resto de dividir el número por 2
  // Si el resto es 0 → es par; si no → es impar
  resto = valor1 % 2;

  // Si el resto es distinto de cero, el número es impar
  if (resto != 0)
  {
    // También podríamos haber escrito directamente: if (resto) o if (valor1 % 2)
    printf("Numero IMPAR");
  }
  else
  {
    // Si el resto es cero, es par
    printf("Numero PAR");
  }

  return 0; // Indicamos que el programa terminó correctamente
}