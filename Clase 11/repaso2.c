#include <stdio.h>


int main(int argc, char const *argv[])
{
  const int elementos; 

  scanf("%d", &elementos); 
  
  //char otra_palabra[elementos]; 
  char *palabra; 
  palabra = (char *) malloc(elementos); 
  
  palabra ? printf("reservado.\n") : printf("error al reservar con malloc.\n") ; 

  printf("ingresar palabra de %d caracteres:", elementos); 
  scanf("%s", palabra); 

  printf("palabra leida: %s", palabra);

  free(palabra); 


  return 0;
}
