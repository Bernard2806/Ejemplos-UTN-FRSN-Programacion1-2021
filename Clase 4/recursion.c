#include <stdio.h>

// factorial 4! = 4 * 3 * 2 * 1
// 1! = 1
// 0! = 1

int calcular_factorial(int nro) 
{
  if (nro>1) {
    return nro * calcular_factorial(nro-1);
  }
  return 1; 

  // int resultado = 0; 
  // if ( nro > 1 ) {
  //   resultado = nro * calcular_factorial(nro-1); 
  // } else {
  //   resultado = 1; 
  // }
  // return resultado; 

}

void main() {

  int nro = 0; 
  int resultado = 0; 

  scanf("%d", &nro); 

  // calcular factorial 
  resultado = 1; 
  for (int i = 1; i <= nro; i++)
  {
    resultado = resultado * i;
  }
  printf("factorial de %d: %d\n", nro, resultado); 


  int rec_resultado = calcular_factorial(nro) ; 
  printf("Funcion factorial de %d: %d", nro, rec_resultado); 

}
