#include <stdio.h>

/*
4. Se ingresa un valor numérico de 8 dígitos que representa una fecha con el 
siguiente formato: aaaammdd 
Se pide informar por separado el día, el mes y el año de la fecha ingresada.
*/
void main() {
  int fecha; 
  int anio, mes, dia;
  int auxiliar; 
  

  printf("Ingrese fecha (aaaammdd): ");
  scanf("%d", &fecha); 

  anio = fecha / 10000; 
  auxiliar = fecha % 10000; 
  mes = auxiliar / 100; 
  dia = auxiliar % 100; 
  
  printf("%d/%d/%d", dia, mes, anio);
}