#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Abrir (o crear) archivo "test.txt" en modo escritura ("w")
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL)
    {
        // fopen falló: no se pudo abrir el archivo para escritura
        puts("No se pudo abrir o crear el archivo.");
        return 1; // Salir con código de error
    }
    else
    {
        // Escribir la cadena en el archivo
        fputs("programacion 1, 2021 1 C, v3", fp);

        puts("Archivo creado y contenido escrito correctamente.");
        // Cerrar el archivo para asegurar que se guarden los cambios
        fclose(fp);
    }

    return 0; // Finalizar exitosamente
}