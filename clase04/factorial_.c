#include <stdio.h>

long factorial(int n) {

  if ( n <= 1 ) {
    return 1; // corte 
  } else {
    return n * factorial(n-1); // llamado a si misma 
  }
  
}

main() 
{
  int nro = 0; 
  int result = 0; 

  // - opcion 1 Iterativa 
  nro = 0; 
  result = 1; 
  for (int i=1; i<=nro; i++) {
    result = result * i; 
  }
  printf( "f(%d) : %d\n", nro, result ); 

  nro = 4; 
  result = 1;
  for (int i=1; i<=nro; i++) {
    result = result * i; 
  }
  printf( "f(%d) : %d\n", nro, result ); 


  // - opcion 2 
  // nro = 0; 
  // result = factorial( nro );
  // printf( "f(%d) : %d\n", nro, result ); 

  // nro = 3; 
  // result = factorial( nro );
  // printf( "f(%d) : %d\n", nro, result ); 

  // nro = 6; 
  // result = factorial( nro );
  // printf( "f(%d) : %d\n", nro, result ); 

  // // - opcion 3 
  // for (int i = 0; i<=5; i++ ) {
  //   printf( "f(%d) : %d\n", i, factorial( i ) ); 
  // }



}
