#include <stdio.h>

main() 
{
  // Como los arrays son en el fonde punteros, un string puede declararse de las siguientes maneras:
  // int n = 4; 
  // char *str; //Cuánto espacio tiene?
  // char str[n]; //donde n>0
  // char str[] = "declaracion implicita de la dimension";
  char str[] = {'h','o','l','a'}; // qué pasa con el \0?

  // Longitud de la cadena: Podemos saber a longitud con la función strlen:
  int len = strlen(str);

  // for (int i = 0; i < len; i++)
  // {
  //   printf("%d : %c \n", i, str[i]);
  // }

  
  

  // str, en cualquier caso, es un punter a memoria. Partiularmente apunta a la dirección 
  // donde se encuentre el primer character.
  // El character '\0' (null character) indica el final del string.

  // Si se declara como un puntero, hay que reservar el espacio en memoria
  // char *str = (char *) malloc(sizeof(char)*MAXSTRLEN);
  // Recordar usar free (así como con new se usa delete).

  // Cómo puedo guardar valores en el string?
  // - Fuerza bruta: Copiar char por char, recordar el \0.
  // - La major forma: Usar strcpy. Es más rápido y se encarga de poner el \0 al final. 

  // strcpy
  // strcpy(char*destn, char* source);
  // strcpy(str, “Esto resulta facil.”);

  // strncat

  // strchr
  // Devuelve un puntero a la primer ocurrencia de c en s.
  
  // strrchr
  // Devuelve un puntero a la última ocurrencia de c en s.
  
  // strstr
  // Devuelve un puntero a la primer ocurrencia del string s2 en s1.




}
