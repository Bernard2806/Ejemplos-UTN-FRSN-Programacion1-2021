#include <stdio.h>
#define STRSIZE 80
// Clase 8 - ejercicio 6 
// repaso: cadenas de caracteres (strings)

// en C definimos un string como: un array de caracteres que termina con el caracter '\0' 
// cualquier conjunto de caracteres entre comillas dobles 
// cada espacio en blanco y el caracter '\0' se cuentan como caracteres. 

// ejemplos Operaciones primitivas: 
  // strlen() : longitud del string, 
  // strcat() : concatenar 2 strings
  // substr() : recuperar una subcadena del string original 
  // strpos() : busca un string dentro de otro 
// algunas de estas funciones estan presentes en la biblioteca string.h 
  // strlen(s1): returns the length of a string.
  // strcpy(s1, s2): copies string s2 to s1
  // strrev(s1): reverses the given string
  // strcmp(s1, s2): returns 0 if s1 and s2 contain the same string.
  // strcat(s1, s2): concatenates two strings
  // strncat(s2, s1, n) : concatena los primeros n caracteres de s1 en s2

int strlen(char []);  
void strcat(char [], char []); 
void substr(char [], int, int, char []);
int strpos(char [], char []); 

int main()
{
  char string[STRSIZE]; 
  int len1;
  
  len1 = strlen(string); 
  


  return 0;
}

// devuelve la cantidad de caracteres de un string que recibe como parametro
int strlen(char s[]) 
{
  int i; 
  for (i = 0; s[i]!='\0'; i++);
  return i; 
}


// 
void strcat(char s1[], char s2[])
{
  int i,j; 
  
  for (i = 0; s1[i]!='\0'; i++); 

  for (j = 0; s2[i]!='\0'; s1[i++] = s2[j++]);
  
  
}


// copia en s2, j caracteres de s1 a partir de s1[i]
void substr(char s1[], int i, int j, char s2[])
{
  int k, m; 

  for (k=i, m=0; m<j ; s2[m++]=s1[k++]); 
  
  s2[m] = '\0';
}


// Retorna un entero con la posicion donde comienza s2 dentro de s1. 
// Si s2 no existe en s1, retorna -1
int strpos(char s1[], char s2[])
{
  int len1, len2; 
  int i, j, k; 

  len1 = strlen(s1);
  len2 = strlen(s2);

  for (i = 0; i+len2<=len1; i++)
  {
    for (j = i, k = 0; k<=len2 && s1[j]==s2[k]; j++, k++)
    {
      if (k == len2)
      {
        return i; 
      }
      
    }
    
  }
  

  return -1; 
}
