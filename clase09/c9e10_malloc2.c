#include <stdio.h>
#include <stdlib.h>

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
  char* x = "Esto es una cadena";
  printf("%s\n",substring(x,0,4)); // imprime "esto"
  printf("%s\n",substring(x,8,11)); // imprime "una"

  return 0;
}