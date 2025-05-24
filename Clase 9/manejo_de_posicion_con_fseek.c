#include <stdio.h>

/*
fseek() : permite mover el cursor (puntero) del archivo a una posición específica.
Recibe tres argumentos:
• El archivo (de tipo FILE*).
• El desplazamiento (número de bytes a mover).
• El punto de referencia, que puede ser:
    SEEK_SET — desde el inicio del archivo (byte 0).
    SEEK_CUR — desde la posición actual.
    SEEK_END — desde el final del archivo.
*/

int main()
{
    FILE *arch;
    char c;

    // Abrimos el archivo en modo lectura/escritura binario ("r+b")
    arch = fopen("DEMO.dat", "r+b");

    if (arch == NULL)
    {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    int n = sizeof(char); // Tamaño de un carácter (1 byte)

    // 1. Mover el puntero al final del archivo
    fseek(arch, 0, SEEK_END);

    // Retrocedemos 1 byte para leer el último carácter
    fseek(arch, -1, SEEK_CUR);
    fread(&c, n, 1, arch);
    printf("Última letra: %c\n", c);

    // Retrocedemos 2 bytes desde el final para obtener el anteúltimo
    fseek(arch, -2, SEEK_END);
    fread(&c, n, 1, arch);
    printf("Anteúltima letra: %c\n", c);

    // 2. Mover el puntero al tercer byte (posición 2 desde el inicio)
    fseek(arch, 2, SEEK_SET);
    fread(&c, n, 1, arch);
    printf("Tercera letra (posición 2): %c\n", c);

    // Cerramos el archivo
    fclose(arch);

    return 0;
}