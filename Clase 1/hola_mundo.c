#include <stdio.h>   // Librería estándar para entrada/salida
#include <stdbool.h> // Librería para usar el tipo bool (true/false)

// Definición correcta de una constante
#define PI 3.14159 // Definimos PI como constante (sin el signo igual)

// Función principal del programa
int main()
{
  /*
    Esto es un comentario de varias líneas.
    `int` representa un número entero.
  */

  int dia = 1; // Variable entera llamada 'dia', inicializada en 1

  // Estructura condicional múltiple (switch)
  // Muestra un mensaje dependiendo del valor de 'dia'
  switch (dia)
  {
  case 1:
    printf("Este es día 1\n");
    break; // Salimos del switch una vez que se ejecuta este caso

  case 2:
    printf("Este es día 2\n");
    break;

  case 3:
    printf("Este es día 3\n");
    break;

  case 4:
    printf("Este es día 4\n");
    break;

  default:
    printf("Ninguno de los anteriores\n");
    break;
  }

  // Bucle for: se repite mientras i < 10
  for (int i = 0; i < 10; i++) // i++ es lo mismo que i = i + 1
  {
    printf("%d\n", i); // Imprime los números del 0 al 9
  }

  // Cambiamos el valor de 'dia' para probar los bucles
  dia = 3;

  // Bucle while: evalúa la condición antes de ejecutar
  while (dia < 5)
  {
    printf("while: día %d es menor que 5\n", dia);
    dia = dia + 1;
  }

  // Bucle do-while: ejecuta al menos una vez, evalúa después
  do
  {
    printf("do-while: día %d es menor que 5\n", dia);
    dia = dia + 1;
  } while (dia < 5);

  // Constantes no se deben modificar
  // PI es constante definida por #define, no necesita declaración adicional

  // Saludo simple (podés descomentarlo si querés imprimir algo)
  // printf("Hola Mundo\n");
  // printf("Saludos\n");

  return 0; // Fin del programa
}