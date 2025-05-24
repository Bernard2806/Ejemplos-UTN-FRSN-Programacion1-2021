#include <stdio.h> 
#define PI = 3.14159
#include <stdbool.h> 

void main()
{
  /* 
  int : integer = entero 
  son comentarios de mas 
  de una linea   
  */  
 
  int dia = 1;

  // switch (dia)
  // {
  //   case 1:
  //     printf("este es dia 1\n"); // esto es un comentario
  //     // break;
  //   case 2:
  //     printf("este es dia 2\n"); // esto es un comentario
  //     break;
  //   case 3:
  //     printf("este es dia 3\n"); // esto es un comentario
  //     break;
  //   case 4:
  //     printf("este es dia 4\n"); // esto es un comentario
  //     break;

  //   default:
  //     printf("ninguno de los anteriores\n"); // esto es un comentario
  //     break;
  // }

  // i++ => i = i + 1; 
  for (int i = 0; i < 10; i++)
  {
    // printf("%d\n", i); 
  }

  dia = 30;

  // primero evalua la condicion 
  while (dia < 5)
  {
    printf("dia %d menor que 5\n", dia); 
    dia = dia + 1;
  }

  // primero ejecuta el bloque y luego evalua 
  do
  {
    printf("dia %d menor que 5\n", dia); 
    dia = dia + 1;
  } while (dia < 5);
  
  
  

  //const float PI = 3.14159; 
  //pi = 4; 

  // printf("Hola Mundo\n"); // comentario linea 
  // printf("saludos");
  //return 0;
}