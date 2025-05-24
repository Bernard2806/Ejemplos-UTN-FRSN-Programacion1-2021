#include <stdio.h>

// Función que suma dos valores enteros y devuelve el resultado
int sumar(int valor1, int valor2)
{
  int sumando = 0; // variable auxiliar, solo visible dentro de esta función
  sumando = valor1 + valor2;
  return sumando;
}

int main()
{
  int suma = 0; // acumulador para ir sumando los elementos del vector
  int cant_elementos = 0;

  // Pedimos al usuario el tamaño del vector
  printf("ingrese tamaño del vector: ");
  scanf("%d", &cant_elementos);

  int valores[cant_elementos]; // declaramos el vector con el tamaño indicado

  // Leemos los valores del usuario y los vamos sumando
  for (int i = 0; i < cant_elementos; i++)
  {
    printf("ingrese elemento %d: ", i);
    scanf("%d", &valores[i]);

    printf("posicion %d = %d \n", i, valores[i]); // mostramos el valor ingresado con salto de línea

    suma = sumar(suma, valores[i]); // usamos la función sumar para acumular
  }

  printf("Suma de elementos: %d \n\n\n", suma); // mostramos la suma total y varios saltos de línea

  printf("en orden inverso: \n");

  // Mostramos los elementos del vector en orden inverso
  for (int i = cant_elementos - 1; i >= 0; i--)
  {
    printf("posicion %d = %d \n", i, valores[i]);
  }

  // Comentarios sobre índices de vectores:
  // Los índices van de 0 a n-1
  // Por ejemplo, para un vector de 3 elementos: v[0], v[1], v[2]
  // v[3] no existe, acceder a esa posición genera error

  return 0;
}