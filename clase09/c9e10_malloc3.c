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

  // ¿Cuál es la diferencia que existe entre las cadenas a y b?
  
  return 0;
}  




/*
Como vemos s y a están apuntando a diferentes caracteres de una misma cadena en
cambio b apunta al primer carácter de una cadena diferente
*/