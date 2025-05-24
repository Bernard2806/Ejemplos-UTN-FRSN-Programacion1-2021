#include <stdio.h>

/*
2. Leer dos valores numéricos enteros e informar su división.
*/

int main()
{
  // Declaramos dos variables enteras para los valores que ingresa el usuario
  int valor1;
  int valor2;

  // Variable flotante para guardar el resultado de la división
  float resultado;

  // Pedimos al usuario el primer número
  printf("Ingrese primer valor: ");
  scanf("%d", &valor1);

  // Pedimos el segundo número
  printf("Ingrese segundo valor: ");
  scanf("%d", &valor2); // ❗ Si el usuario ingresa 0, va a haber un error de división por cero

  // Realizamos una división entera (aunque se guarda en float, se pierde la parte decimal)
  resultado = valor1 / valor2;

  // Comentario útil: la división entre enteros descarta la parte decimal
  // Por más que 'resultado' sea float, lo que se guarda es el entero truncado

  // Mostramos el resultado, pero va a mostrar por ejemplo 2.00 en lugar de 2.50 si los valores eran 5 / 2
  printf("Division = %f \n", resultado);

  // Para ver los decimales correctamente, tenemos que convertir uno de los operandos a float (hacer un casteo)
  // Hay varias formas, esta es una de ellas:
  resultado = valor1 / (float)valor2;

  // Ahora sí, se hace la división con decimales y se muestra con dos cifras decimales
  printf("Division = %6.2f \n", resultado);

  return 0; // Indicamos que el programa terminó correctamente
}