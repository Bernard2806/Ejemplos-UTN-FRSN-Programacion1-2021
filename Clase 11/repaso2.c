#include <stdio.h>

int main(int argc, char const *argv[])
{
  // Declaramos una constante para la cantidad de caracteres que se van a ingresar
  const int elementos;

  // Le pedimos al usuario que ingrese un número y lo guardamos en 'elementos'
  scanf("%d", &elementos);

  // En vez de usar un array de tamaño fijo, usamos memoria dinámica
  char *palabra;

  // Reservamos memoria dinámica para almacenar una palabra del largo indicado
  palabra = (char *)malloc(elementos);

  // Verificamos si malloc funcionó bien o no
  palabra ? printf("reservado.\n") : printf("error al reservar con malloc.\n");

  // Pedimos al usuario que escriba una palabra del tamaño indicado
  printf("ingresar palabra de %d caracteres:", elementos);
  scanf("%s", palabra);

  // Mostramos la palabra que ingresó el usuario
  printf("palabra leida: %s", palabra);

  // Liberamos la memoria que habíamos reservado con malloc
  free(palabra);

  return 0;
}