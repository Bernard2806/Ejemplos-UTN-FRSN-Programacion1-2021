#include <stdio.h>  // Para usar printf
#include <string.h> // Para usar strcmp (función para comparar strings)

main()
{
  char s1[] = "hola"; // Defino la cadena s1 con el texto "hola"
  char s2[] = "chau"; // Defino la cadena s2 con el texto "chau"

  // Comparo el primer carácter de s1 con el primer carácter de s2
  if (s1[0] == s2[0])
  {
    // ¡ERROR conceptual! Acá sólo comparo el primer carácter de cada cadena,
    // no las cadenas completas ni los punteros a las cadenas.
    printf("s1 y s2 iguales \n"); // Esto sólo se cumple si ambos empiezan con el mismo carácter
  }
  else
  {
    printf("s1 y s2 distintos\n"); // Acá entramos si el primer carácter es distinto
  }

  // Para comparar cadenas completas, hay que usar strcmp
  // strcmp devuelve 0 si las cadenas son iguales
  if (strcmp(s1, s2) == 0)
  {
    printf("strcmp s1 y s2 iguales\n"); // Si las cadenas son iguales, entra acá
  }
  else
  {
    printf("strcmp s1 y s2 distintos\n"); // Si las cadenas son distintas, entra acá
  }
}