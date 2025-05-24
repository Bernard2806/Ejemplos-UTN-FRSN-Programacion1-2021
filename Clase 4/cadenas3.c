#include <stdio.h>

// Función que copia el contenido de la cadena s en la cadena t
void copiarCadena(char t[], char s[])
{
  int i = 0;
  // Mientras no llegue al final de s (carácter '\0')
  while (s[i] != '\0')
  {
    t[i] = s[i]; // Copio carácter por carácter
    i = i + 1;   // Paso al siguiente carácter
  }
  t[i] = '\0'; // Al final, pongo el fin de cadena '\0' en t
}

int main()
{
  char nom[15]; // Declaro un arreglo para guardar un nombre (hasta 14 chars + '\0')

  printf("nom = %s\n", nom); // Muestro contenido inicial de nom (indefinido)

  copiarCadena(nom, "Pablo"); // Copio la cadena "Pablo" dentro de nom usando la función

  printf("nom = %s\n", nom); // Muestro el contenido actualizado de nom (ahora "Pablo")

  return 0;
}