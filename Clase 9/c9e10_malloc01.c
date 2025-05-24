#include <stdio.h>


void main()
{
  int n;
  int *pi; 

  printf ("Número de elementos del array: ") ;
  scanf ("%d", &n) ;

  pi = (int*)malloc(n*sizeof(int)); 

  for (int i = 0; i < n-1; i++)
  {
    // scanf(...)
    // pi[i] = ...
  }
  

}