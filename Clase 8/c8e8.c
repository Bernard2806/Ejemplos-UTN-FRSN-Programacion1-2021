#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "Esto es - un string para - probar strtok";
   const char s[2] = "-";
   char *token;
   
   /* optener primera parte, primer token */
   token = strtok(str, s);
   
   /* recorrer todos los tokens */
   while( token != NULL ) {
      printf( " %s\n", token );
    
      token = strtok(NULL, s);
   }
   
   return(0);
}