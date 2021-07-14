#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[20][20], matriz_2[20][20];
    char valor_archivo;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            matriz[i][j] = rand() % 400 + 100;
        }
    }

    FILE *fhandler;
    fhandler = fopen("matriz.dat","w+");

    for (int r = 0; r < 20; r++)
    {
        for (int s = 0; s < 20; s++)
        {
            // printf("%d ",matriz[r][s]);
            fprintf(fhandler,"%i ", matriz[r][s]);
        }
        // printf("\n");
        fprintf(fhandler,"\n");
    }

    rewind(fhandler); 
    for (int m = 0; m < 20; m++)
    {
        // for (int n = 0; n < 20; n++)
        // {
            fscanf(fhandler,"%d ", matriz_2[m]);
        // }
        // fscanf(fhandler,"%c",valor_archivo);
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            printf("%d ",matriz_2[i][j]);
        }
    }

    fclose(fhandler);
}