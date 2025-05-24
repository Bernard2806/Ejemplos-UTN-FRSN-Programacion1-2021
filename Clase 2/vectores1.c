#include <stdio.h> 
#include "saltear_linea.c"; 

// declaracion o prototipo 
// int sumar(int,int); 
// definicion 
int sumar(int valor1, int valor2)
{
  int sumando = 0;  // variable auxliar de la funcion 
  // solo visible aca adentro
  sumando = valor1+valor2; 
  return sumando; 
}

// void saltear_linea() // procedimiento 
// {
//   printf("\n");  
// }


void main()
{
  // declaracion y definicion 
  // int valores[] = {10, 20, 30, 40, 50}; // 5 elementos 
  // indice: 0..n-1
  
  int suma = 0; // acumulador 
  int cant_elementos = 0;
  
  // printf("Elemento 3: %d \n", valores[3]);
  printf("ingrese tama%co del vector: ", 164);
  scanf("%d", &cant_elementos); 

  int valores[cant_elementos]; 

  for (int i = 0; i < cant_elementos; i++)
  {
    printf("ingrese elemento %d: ", i);
    scanf("%d", &valores[i]) ; 
    // valores[i] = 0;
    printf("posicion %d = %d ", i, valores[i]); 
    saltear_linea(); 
    // suma = suma + valores[i] ; 
    suma = sumar(suma, valores[i]); 
     
  }

  printf("Suma de elementos: %d ", suma);
  saltear_linea(); 
  saltear_linea(); 
  saltear_linea(); 
  
  printf("en orden inverso: ");
  saltear_linea(); 

  for (int i = cant_elementos-1; i >= 0; i--)
  {
    printf("posicion %d = %d ", i, valores[i]);
    saltear_linea(); 
  }

  // int v[3]; 
  // indice: 0..n-1 
  // v[0], v[1], v[2] 
  // v[3] NO existe 



}

