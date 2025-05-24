#include <stdio.h>
#include <ctype.h>  // Biblioteca para funciones de análisis y conversión de caracteres.
#include <string.h> // Biblioteca para manejo de cadenas (strings).

/*
 Consejos importantes sobre cadenas de texto en C:
 -------------------------------------------------
 - Siempre hay que reservar espacio suficiente para el carácter nulo '\0' que indica el final de una cadena.
 - Si una "cadena" no contiene el carácter '\0', funciones como printf pueden causar errores.
 - No se puede pasar un solo carácter como si fuera una cadena. Por ejemplo: 'A' ≠ "A"
*/

/*
Funciones útiles de <ctype.h>:
------------------------------

  isdigit(c)   → Devuelve verdadero si c es un dígito (0-9)
  isalpha(c)   → Verdadero si c es una letra (a-z o A-Z)
  isalnum(c)   → Verdadero si c es una letra o dígito
  isxdigit(c)  → Verdadero si c es un dígito hexadecimal (0-9, a-f, A-F)
  islower(c)   → Verdadero si c es una letra minúscula
  isupper(c)   → Verdadero si c es una letra mayúscula
  tolower(c)   → Convierte c a minúscula si es mayúscula
  toupper(c)   → Convierte c a mayúscula si es minúscula
  isspace(c)   → Verdadero si c es un carácter de espacio (espacio, tabulación, salto de línea, etc.)
  iscntrl(c)   → Verdadero si c es un carácter de control (como '\n', '\t', etc.)
  ispunct(c)   → Verdadero si c es un signo de puntuación (ni letra, ni número, ni espacio)
  isprint(c)   → Verdadero si c es imprimible, incluyendo el espacio
  isgraph(c)   → Verdadero si c es imprimible pero **excluye** el espacio
*/

int main()
{
  // Comprobación con iscntrl: ¿Es un carácter de control?
  printf("%s\n%s%s%s\n%s%s\n\n", "De acuerdo con iscntrl:",
         "Nueva línea", iscntrl('\n') ? " es un " : " no es un ", "carácter de control",
         iscntrl('$') ? "$ es un " : "$ no es un ", "carácter de control");

  // Comprobación con ispunct: ¿Es un signo de puntuación?
  printf("%s\n%s%s\n%s%s\n%s%s\n\n", "De acuerdo con ispunct:",
         ispunct(';') ? "; es un " : "; no es un ", "carácter de puntuación",
         ispunct('Y') ? "Y es un " : "Y no es un ", "carácter de puntuación",
         ispunct('#') ? "# es un " : "# no es un ", "carácter de puntuación");

  // Comprobación con isprint: ¿Es un carácter visible/imprimible?
  printf("%s\n%s%s\n%s%s%s\n\n", "De acuerdo con isprint:",
         isprint('$') ? "$ es un " : "$ no es un ", "carácter imprimible",
         "Alerta", isprint('\a') ? " es un " : " no es un ", "carácter imprimible");

  // Comprobación con isgraph: ¿Es un carácter imprimible diferente del espacio?
  printf("%s\n%s%s\n%s%s%s\n", "De acuerdo con isgraph:",
         isgraph('Q') ? "Q es un " : "Q no es un ", "carácter gráfico (visible, distinto del espacio)",
         "Espacio", isgraph(' ') ? " es un " : " no es un ", "carácter gráfico");

  return 0;
}