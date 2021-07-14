#include <stdio.h>
#include <string.h>


//:
char* substring(char* s,int desde,int hasta)
{
  int n = hasta-desde;
  char* ret = (char*) malloc(n+1);
  int j=0;

  for(int i=desde; i<hasta; i++)
  {
    ret[j]=s[i];
    j=j+1;
  }
  ret[j]='\0';

  return ret;
}


int main()
{
  char s[50];
  char *a;
  char *b;

  strcpy(s,"Esto es una cadena");
  
  a = s+5;
  b = substring(s,5,strlen(s));
  
  printf("a = [%s]\n",a);
  printf("b = [%s]\n",b);
  printf("\n"); 

  // modif:
  a[3] = 'X'; // modifico un caracter de a
  b[3] = 'Y'; // modifico un caracter de b
  s[5] = 'Z'; // modifico un caracter de s

  printf("s = [%s]\n",s);
  printf("a = [%s]\n",a);
  printf("b = [%s]\n",b);
  
  return 0;

  // ejercicio: Definir una función 'ltrim' cuyo objetivo será retornar una cadena idéntica a la que
  // reciba como parámetro, pero sin espacios en blanco a la izquierda.
  /*
  int main()
  {
    char* x = "       Esto es una cadena       ";
    printf("[%s]\n",ltrim(x));  // -> [Esto es una cadena]
    return 0;
  }
  */

  // Eliminar los espacios ubicados a la derecha (función rtrim)

  // Eliminar los espacios en ambos extremos de la cadena (función trim)
}