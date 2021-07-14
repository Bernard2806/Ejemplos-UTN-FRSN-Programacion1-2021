#include <stdio.h>

// Lectura de datos desde un archivo de acceso aleatorio
// Lectura secuencial de un archivo de acceso aleatorio

/* definición de la estructura datosCliente */
struct datosCliente
{
  int numCta;        /* número de cuenta */
  char apellido[15]; /* apellido de la cuenta */
  char nombre[10];   /* nombre de la cuenta */
  double saldo;      /* saldo de la cuenta */
};                   /* fin de la estructura datosCliente */

int main()
{
  FILE *ptrCf; /* apuntador al archivo credito.dat */
  /* crea datosCliente con información predeterminada */
  struct datosCliente cliente = {0, "", "", 0.0};

  /* fopen abre el archivo; si no se puede abrir, sale del archivo */
  if ((ptrCf = fopen("credito.dat", "rb")) == NULL)
  {
    printf("No pudo abrirse el archivo.\n");
  } /* fin de if */
  else
  {
    while (!feof(ptrCf))
    {
      fread(&cliente, sizeof(struct datosCliente), 1, ptrCf);

      /* despliega el registro */
      if (cliente.numCta != 0)
      {
        printf( "% -6d % -16s % -11s % 10.2f\n",
                cliente.numCta, cliente.apellido,
                cliente.nombre, cliente.saldo);
      } /* fin de if */
    }

    fclose(ptrCf); /* fclose cierra el archivo */
  }

  return 0;
}