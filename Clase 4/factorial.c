#include <stdio.h>

// Función recursiva que calcula el factorial de un número entero n
// El factorial de n se define como n * (n-1) * (n-2) * ... * 1
// Caso base: si n es 0 o 1, devuelve 1
long factorial(int n)
{
    if (n <= 1)
    {
        return 1; // caso base: factorial de 0 o 1 es 1
    }
    else
    {
        return n * factorial(n - 1); // se llama a sí misma con n-1
    }
}

int main()
{
    int nro = 0;
    long result = 0; // usar long porque el factorial crece rápido

    // Opción 1: calcular factorial de forma iterativa
    nro = 0;
    result = 1;
    for (int i = 1; i <= nro; i++)
    {
        result = result * i;
    }
    printf("f(%d) = %ld\n", nro, result);

    nro = 4;
    result = 1;
    for (int i = 1; i <= nro; i++)
    {
        result = result * i;
    }
    printf("f(%d) = %ld\n", nro, result);

    // Opción 2: calcular factorial usando la función recursiva
    nro = 0;
    result = factorial(nro);
    printf("f(%d) = %ld\n", nro, result);

    nro = 3;
    result = factorial(nro);
    printf("f(%d) = %ld\n", nro, result);

    nro = 6;
    result = factorial(nro);
    printf("f(%d) = %ld\n", nro, result);

    // Opción 3: calcular factorial con recursión para varios valores
    for (int i = 0; i <= 5; i++)
    {
        printf("f(%d) = %ld\n", i, factorial(i));
    }

    return 0;
}