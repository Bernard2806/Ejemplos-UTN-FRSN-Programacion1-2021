#include <stdio.h>

char minuscula_a_mayuscula(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - ('a' - 'A');
    }
    return c; // Si no es minúscula, devuelve el mismo carácter
}

int main()
{
    char letra;
    printf("Ingrese una letra minúscula: ");
    scanf(" %c", &letra);

    char resultado = minuscula_a_mayuscula(letra);
    printf("Letra en mayúscula: %c\n", resultado);

    return 0;
}