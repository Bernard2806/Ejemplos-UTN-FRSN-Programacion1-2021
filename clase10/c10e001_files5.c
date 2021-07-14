#include <stdio.h>

/*
int fseek( FILE *flujo, long int desplazamiento, int en Donde );

desplazamiento es el número de bytes a buscar, desde la ubicación enDonde del archivo al que apunta flujo. 
El argumento enDonde puede tener uno de tres valores, SEEK_SET, SEEK_CUR o SEEK_END
(todos definidos dentro de <stdio.h>), los cuales indican la ubicación en el archivo desde donde comienza la búsqueda; 
SEEK_SET indica que la búsqueda comienza al inicio del archivo; 
SEEK_CUR indica que la búsqueda inicia desde la ubicación actual en el archivo; 
y SEEK_END indica que la búsqueda inicia al final del archivo.

*/


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
  long desplazamiento = 0;

  /* fopen abre el archivo; si no se puede abrir, sale del archivo */
  if ((ptrCf = fopen("credito.dat", "rb+")) == NULL)
  {
    printf("No pudo abrirse el archivo.\n");
  } /* fin de if */
  else
  {
    /* se requiere que el usuario especifique el número de cuenta */
    printf("Introduzca el numero de cuenta"
           " ( 1 a 100, 0 para terminar la entrada )\n? ");
    scanf("%d", &cliente.numCta);

    /* el usuario introduce la información, la cual se copia dentro del archivo */
    while (cliente.numCta != 0)
    {

      /* el usuario introduce el apellido, el nombre y el saldo */
      printf("Introduzca el apellido, el nombre, el saldo\n? ");

      /* establece los valores para apellido, nombre y saldo del registro */
      fscanf(stdin, "%s%s%lf", cliente.apellido,
             cliente.nombre, &cliente.saldo);

      /* localiza la posición de un registro específico en el archivo */
      desplazamiento = (cliente.numCta - 1) * sizeof(struct datosCliente);
      fseek(ptrCf, desplazamiento, SEEK_SET);
      // SEEK_SET indica que el apuntador de posición de archivo se ubica en una posición relativa al inicio del archivo

      /* escribe en el archivo la información especificada por el usuario */
      fwrite(&cliente, sizeof(struct datosCliente), 1, ptrCf);

      /* permite al usuario introducir otro número de cuenta */
      printf("Introduzca el numero de cuenta\n? ");
      scanf("%d", &cliente.numCta);
    } /* fin de while */

    fclose(ptrCf); /* fclose cierra el archivo */
  }                /* fin de else */

  return 0; /* indica terminación exitosa */
}

/*
Introduzca el numero de cuenta ( 1 a 100, 0 para terminar la entrada )
? 37
Introduzca el apellido, el nombre, el saldo
? Baez Daniel 0.00
Introduzca el numero de cuenta
? 29
Introduzca el apellido, el nombre, el saldo
? Brito Nancy -24.54
Introduzca el numero de cuenta
? 96
Introduzca el apellido, el nombre, el saldo
? Sanchez Samuel 34.98
Introduzca el numero de cuenta
? 88
Introduzca el apellido, el nombre, el saldo
? Santos David 258.34
Introduzca el numero de cuenta
? 33
Introduzca el apellido, el nombre, el saldo
? Roberto Fernandez 314.33
Introduzca el numero de cuenta
? 0447
*/
