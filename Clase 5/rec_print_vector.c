#include <stdio.h>

// Función iterativa que imprime un string carácter por carácter
void imprimir_vector(char *string)
{
  int i = 0;
  // Mientras no lleguemos al carácter nulo '\0'
  while (string[i] != '\0')
  {
    printf(" %c", string[i]);
    i++;
  }
}

// Función recursiva que imprime un string carácter por carácter desde el índice i
void imprimir_vector_rec(const char *string, int i)
{
  // Caso base: si encontramos el carácter nulo '\0', terminamos la recursión
  if (string[i] == '\0')
  {
    return;
  }
  else
  {
    printf(" %c", string[i]);
    imprimir_vector_rec(string, i + 1);
  }
}

// Función recursiva que imprime un string en orden inverso desde el índice i
void imprimir_vector_inv_rec(const char *string, int i)
{
  // Caso base: si encontramos el carácter nulo '\0', terminamos la recursión
  if (string[i] == '\0')
  {
    return;
  }
  else
  {
    imprimir_vector_inv_rec(string, i + 1);
    printf(" %c", string[i]);
  }
}

int main(int argc, char const *argv[])
{
  char str[20] = "programacion1"; // Nota: quité espacio extra al final

  printf("imprimir_vector: ");
  imprimir_vector(str);

  printf("\nimprimir_vector_rec: ");
  imprimir_vector_rec(str, 0);

  printf("\nimprimir_vector_inv_rec: ");
  imprimir_vector_inv_rec(str, 0);

  printf("\n");

  return 0;
}