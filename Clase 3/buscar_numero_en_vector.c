#include <stdio.h>

int main()
{
    int numeros[20];
    int i, num, contador = 0;

    printf("Ingrese 20 números:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Ingrese un número para buscar en el vector: ");
    scanf("%d", &num);

    for (i = 0; i < 20; i++)
    {
        if (numeros[i] == num)
        {
            contador++;
        }
    }

    if (contador > 0)
    {
        printf("El número %d se encuentra en el vector.\n", num);
        printf("Aparece %d veces.\n", contador);
    }
    else
    {
        printf("El número %d no se encuentra en el vector.\n", num);
    }

    return 0;
}