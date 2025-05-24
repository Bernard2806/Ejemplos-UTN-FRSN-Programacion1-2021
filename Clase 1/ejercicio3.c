#include <stdio.h>

/*
3. Dado un valor numérico entero, informar si es par o impar.
*/
void main() {
  int valor1; 
  int resto;

  printf("Ingrese numero entero: ");
  scanf("%d", &valor1); 

  resto = valor1 % 2; 

  if (resto != 0) {
  // if (resto) {
  // if (valor1 % 2) {
    printf("Numero IMPAR");

  } else {
    printf("Numero PAR");
    
  }

  
}