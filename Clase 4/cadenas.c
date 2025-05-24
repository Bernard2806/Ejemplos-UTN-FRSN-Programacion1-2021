#include <stdio.h>
#include <string.h> // Para usar strlen, strcpy y otras funciones de strings
#include <stdlib.h> // Para usar malloc y free

int main()
{
  // Ejemplos de cómo declarar strings en C:

  // 1) Declaración explícita con tamaño fijo:
  // char str1[5];  // Reservo espacio para 5 chars (4 + '\0')

  // 2) Declaración con inicialización implícita del tamaño:
  char str2[] = "hola"; // El compilador reserva 5 chars: 'h', 'o', 'l', 'a', '\0'

  // 3) Declaración como arreglo de chars sin '\0':
  char str3[] = {'h', 'o', 'l', 'a'};
  // Atención: acá NO hay terminador '\0', por eso no se comporta como string en C

  // Para que str3 sea un string válido, debería ser:
  char str4[] = {'h', 'o', 'l', 'a', '\0'};

  // Calcular la longitud de un string con strlen:
  int len = strlen(str2); // strlen cuenta hasta el '\0', no incluye el '\0'

  printf("La palabra '%s' tiene %d caracteres.\n", str2, len);

  // Recorrer un string y mostrar cada caracter con su índice:
  for (int i = 0; i < len; i++)
  {
    printf("Posición %d : %c\n", i, str2[i]);
  }

  // str2 es un puntero al primer caracter del arreglo. El '\0' indica el final del string.

  // Si queremos usar un puntero para string y reservar memoria dinámicamente:
  char *str_dynamic = (char *)malloc(sizeof(char) * 100); // Reservo espacio para 100 chars
  if (str_dynamic == NULL)
  {
    printf("Error reservando memoria\n");
    return 1;
  }

  // Copiar un texto en el string reservado:
  strcpy(str_dynamic, "Esto es un string copiado con strcpy.");

  printf("%s\n", str_dynamic);

  // Al terminar, liberar la memoria:
  free(str_dynamic);

  return 0;
}