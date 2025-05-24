#include <stdio.h>

// Prototipos de las funciones
void suma1PorValor(int);
void suma1PorRef(int *);

int main()
{
  int x = 10;
  int y = 5;
  printf("X= %d \n", x);

  // Paso por valor: la función recibe una copia, no cambia la variable original
  suma1PorValor(x);
  printf("X= %d \n", x); // sigue siendo 10

  // Paso por referencia: le paso la dirección de x para modificar el valor original
  suma1PorRef(&x);
  printf("X= %d \n", x); // ahora sí se incrementa y cambia el valor de x

  return 0;
}

// Recibe el valor, lo incrementa pero solo en la copia local (no afecta al original)
void suma1PorValor(int x)
{
  x++;                                              // x = x + 1
  printf("en funcion suma1PorValor, x = %d \n", x); // imprime 11

  return; // sale de la función
}

// Recibe un puntero a int y modifica el valor que apunta
void suma1PorRef(int *x)
{
  (*x)++;                                          // incrementa el valor al que apunta el puntero
  printf("en funcion suma1PorRef, x = %d \n", *x); // imprime el valor incrementado

  return; // sale de la función
}
