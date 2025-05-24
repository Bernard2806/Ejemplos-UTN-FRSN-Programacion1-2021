#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LINE 256
#define ARCHIVO "canciones.csv"

/*
1) Crear un algoritmo que le permita al usuario cargar todas sus canciones en un archivo.
   Tener en cuenta que debe haber una canción por línea.
   Debe ser un archivo csv en el cual cada línea tenga: nombre;artista;puntaje

2) Crear una función que devuelva true si la canción elegida ya está o false si no.

3) Crear un procedimiento que dado el nombre de una canción, el artista y su puntaje,
   agregue esta misma al final del archivo de canciones.
   Ojo, si la canción ya está en el archivo no se debe hacer nada.
*/

// Esta función devuelve true si la canción ya está cargada en el archivo, o false si no está.
bool cancionExiste(const char *nombre, const char *artista)
{
    FILE *archivo = fopen(ARCHIVO, "r"); // Abrimos el archivo en modo lectura
    if (archivo == NULL)
    {
        return false; // Si el archivo no existe aún, claramente no está la canción
    }

    char linea[MAX_LINE];
    while (fgets(linea, MAX_LINE, archivo))
    { // Leemos cada línea del archivo
        char nombreArchivo[100], artistaArchivo[100];
        int puntaje;

        // Extraemos los datos de la línea: nombre, artista y puntaje
        if (sscanf(linea, "%99[^;];%99[^;];%d", nombreArchivo, artistaArchivo, &puntaje) == 3)
        {
            // Comparamos nombre y artista con los pasados por parámetro
            if (strcmp(nombre, nombreArchivo) == 0 && strcmp(artista, artistaArchivo) == 0)
            {
                fclose(archivo); // Cerramos el archivo antes de salir
                return true;     // La canción ya está
            }
        }
    }

    fclose(archivo); // Cerramos el archivo si no encontramos la canción
    return false;
}

// Esta función agrega una canción al archivo si no está ya cargada
void agregarCancion(const char *nombre, const char *artista, int puntaje)
{
    // Primero verificamos si la canción ya existe
    if (cancionExiste(nombre, artista))
    {
        printf("La canción ya está en el archivo.\n");
        return;
    }

    // Abrimos el archivo en modo agregar (append)
    FILE *archivo = fopen(ARCHIVO, "a");
    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    // Escribimos la nueva canción en el archivo con formato CSV
    fprintf(archivo, "%s;%s;%d\n", nombre, artista, puntaje);
    fclose(archivo); // Cerramos el archivo
    printf("Canción agregada con éxito.\n");
}

// Función principal para probar el código
int main()
{
    char nombre[100];
    char artista[100];
    int puntaje;

    printf("Ingrese el nombre de la canción: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = 0; // Quitamos el salto de línea

    printf("Ingrese el nombre del artista: ");
    fgets(artista, sizeof(artista), stdin);
    artista[strcspn(artista, "\n")] = 0;

    printf("Ingrese el puntaje de la canción: ");
    scanf("%d", &puntaje);

    // Llamamos a la función para agregar la canción
    agregarCancion(nombre, artista, puntaje);

    return 0;
}