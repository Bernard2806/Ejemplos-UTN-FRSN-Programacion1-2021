#include <stdio.h> 

void main() {
  int x = 3;
  float y = 8.5;
  int z = x + y; // ??

  printf("%d \n", z); 

  int a,b; 
  double cociente; 
  a=10;
  b=3;

  // conversion automatica con operador /
  cociente = a/b;
  printf("conversion automatica: %f \n", cociente); // 3.000000

  // casteo 
  cociente = (double)a / b;
  printf("casteo: %f \n", cociente); // 3.333333
  cociente = a / (double)b;
  printf("casteo: %f \n", cociente); // 3.333333

  // truncado 
  char c = 100; 
  int i = 8.5; 
  printf("truncado char: %d \n", c); // -127
  printf("truncado int: %d \n", i);  // 8

  // promocion
  // Cuando un tipo "más chico" se asigna en uno "más grande" 
  // ej: (un short en un int , un int en un double , etc.). 
  float nf = 30; // nf = 30.0
  printf("promocion a float: %f \n", nf);  // 30.000000

}