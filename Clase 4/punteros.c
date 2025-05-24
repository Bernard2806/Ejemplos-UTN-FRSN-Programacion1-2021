#include <stdio.h>

// inicializar el contenido del array con unos  
void inicio_array(int a[] ) {
  for (size_t i = 0; i < 10; i++)
  {
    a[i] = 1; 
  }
  
}

void devuelve_ultimo_dia(int *d) {
  *d = 20190101; 
}
int devuelve_nueva_fecha(int d) {
  d = 20190101;
  return d; 
}

main() 
{
  int ausencias[7];
  inicio_array(ausencias); 

  int fecha = 20210429; 
  printf("fecha antes : %d\n", fecha);
  
  // parametro por valor 
  // devuelve_ultimo_dia(fecha);

  // parametro por referencia 
  devuelve_ultimo_dia(&fecha);
  
  // funcion retorna parametro 
  int nueva_fecha = devuelve_nueva_fecha(fecha); 

  printf("fecha despues : %d\n", fecha);
  // printf("fecha despues : %d\n", d);


}
