#include <stdio.h>

// Lectura e impresión de un archivo secuencial

/* archivo ejemplo: 
100 Sanchez 24.98
200 Lopez 345.67
300 Blanco 0.00
400 Martinez -42.16
500 Rico 224.62
*/

int main()
{
  int cuenta; /* número de cuenta */
  char nombre[ 30 ]; /* nombre de cuenta */
  double saldo; /* saldo de la cuenta */

  FILE *ptrCf; /* ptrCf = apuntador al archivo clientes.dat */

  /* fopen abre el archivo. Si no es capaz de crear el archivo, sale del programa */
  if ( ( ptrCf = fopen( "clientes.dat", "r" ) ) == NULL ) {
    printf( "El archivo no pudo abrirse\n" );

  } else {
    printf( "%-10s%-13s%s\n", "Cuenta", "Nombre", "Saldo" );
    fscanf( ptrCf, "%d%s%lf", &cuenta, nombre, &saldo );

    /* mientras no sea fin de archivo */
    while ( !feof( ptrCf ) ) {
      printf( "%-10d%-13s%7.2f\n", cuenta, nombre, saldo );
      fscanf( ptrCf, "%d%s%lf", &cuenta, nombre, &saldo );
    } /* fin de while */

    fclose( ptrCf ); /* fclose cierra el archivo */
  } /* fin de else */

  return 0; /* indica terminación exitosa */

}
