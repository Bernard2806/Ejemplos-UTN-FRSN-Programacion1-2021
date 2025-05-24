#include <stdio.h>

int main(int argc, char const *argv[])
{
  // Variable para guardar el resultado de la división
  float division = 0;

  // Dos números enteros que vamos a dividir
  int num1 = 100;
  int num2 = 3;

  // Primera división sin casteo: se hace división entera, el resultado es 33
  // Como se asigna a un float, queda 33.0 → se imprime como 33.00
  division = num1 / num2;
  printf("division: %.2f\n", division); // 33.00

  // Segunda división con casteo: convertimos num1 a float
  // Esto obliga a que la división sea con coma flotante (decimal), y da 33.33...
  division = (float)num1 / num2;
  printf("division: %.2f\n", division); // 33.33

  return 0;
}