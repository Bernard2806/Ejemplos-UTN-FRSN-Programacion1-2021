#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  int val;
  char str[20];
  
  strcpy(str, "98993489"); // copiamos string a str 
  val = atoi(str);  // devuelve el entero representado en el string 
  printf("String value = %s, Int value = %d\n", str, val);
  
  strcpy(str, "tutorialspoint.com");
  val = atoi(str);
  printf("String value = %s, Int value = %d\n", str, val);


  char str2[30] = "2030300 This is test";
  char *ptr;
  long ret;

  ret = strtol(str2, &ptr, 10);
  printf("The number(unsigned long integer) is %ld\n", ret);
  printf("String part is |%s|", ptr);   


   return(0);
}