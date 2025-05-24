#include <stdio.h>

int main()
{
    FILE *fhandler;
    char *linea_mostrar = NULL; // ?
    char *fin; // ?
    int largo = 0; // ?
    fhandler = fopen("numeros.txt", "r");
    int valor_inicial,valor_final, contador = 0;

    while (getline(&linea_mostrar,&largo,fhandler) != -1) //linea_mostrar es la linea que se extrae del texto
    {
        if (contador == 0)
        {
          valor_inicial = strtol(linea_mostrar,&fin,10);
        }
        printf("%s",linea_mostrar);
        contador += 1;
        valor_final = strtol(linea_mostrar,&fin,10);
    }
    printf("\nvalores ingresados por el usuario: %i  %i\n",valor_inicial, valor_final);
    fclose(fhandler);
}
