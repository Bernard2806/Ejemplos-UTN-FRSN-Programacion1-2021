#include <stdio.h>

char mayuscula_a_minuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    return c; // Si no es mayúscula, devuelve el mismo carácter
}

int main()
{
    char letra;
    printf("Ingrese una letra mayúscula: ");
    scanf(" %c", &letra);

    char resultado = mayuscula_a_minuscula(letra);
    printf("Letra en minúscula: %c\n", resultado);

    return 0;
}
