#include <string.h>
#include <stdio.h>

int main()
{
   char str[80] = "Esto es - un string para - probar strtok";
   const char s[2] = "-"; // delimitador: el carácter '-'
   char *token;

   // obtener el primer token (parte de la cadena antes del primer '-')
   token = strtok(str, s);

   // recorrer todos los tokens mientras no sea NULL
   while (token != NULL)
   {
      printf(" %s\n", token);

      // obtener siguiente token usando NULL para indicar que seguimos con la misma cadena
      token = strtok(NULL, s);
   }

   return 0;
}
