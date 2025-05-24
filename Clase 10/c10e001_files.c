#include <stdio.h>

// Crea un archivo secuencial

int main()
{
  int cuenta; /* número de cuenta */
  char nombre[ 30 ]; /* nombre de cuenta */
  double saldo; /* saldo de la cuenta */

  FILE *ptrCf; /* ptrCf = apuntador al archivo clientes.dat */
  // El apuntador de posición de archivo en realidad no es un apuntador; es un valor entero que especifica la ubicación
  // del byte en el que ocurrirá la siguiente lectura o escritura dentro del archivo. En ocasiones, a esto se le
  // llama desplazamiento de archivo. El apuntador de posición de archivo es un miembro de la estructura FILE
  // asociada con cada archivo.


  /* fopen abre el archivo. Si no es capaz de crear el archivo, sale del programa */
  if ( ( ptrCf = fopen( "clientes.dat", "w" ) ) == NULL ) {
    printf( "El archivo no pudo abrirse\n" );

  } else {
    printf( "Introduzca la cuenta, el nombre, y el saldo.\n" );
    printf( "Introduzca EOF al final de la entrada.\n" );
    printf( "? " );
    scanf( "%d%s%lf", &cuenta, nombre, &saldo );

    /* escribe la cuenta, el nombre y el saldo dentro del archivo con fprintf */
    // hasta Ctrl+Z (en windows)
    // while ( !feof( stdin ) ) {
    while ( cuenta != 0  ) {
      fprintf( ptrCf, "%-10d %s %.2f\n", cuenta, nombre, saldo );
      printf( "? " );
      scanf( "%d%s%lf", &cuenta, nombre, &saldo );
    } /* fin de while */

    fclose( ptrCf ); /* fclose cierra el archivo */
  } /* fin de else */

  return 0; /* indica terminación exitosa */

}

/*
Introduzca la cuenta, el nombre, y el saldo.
Introduzca EOF al final de la entrada.
? 100 Sanchez 24.98
? 200 Lopez 345.67
? 300 Blanco 0.00
? 400 Martinez -42.16
? 500 Rico 224.62
? ^Z
*/


/*
# Modos de apertura de un archivo: 
Para crear un archivo, o para descartar el contenido de un archivo antes de escribir datos, abra el archivo para escritura (“w”). 
Para leer un archivo existente, ábralo para lectura (“r”). 
Para agregar registros al final de un archivo existente, abra el archivo para agregar (“a”). 
Para abrir el archivo de tal manera que pueda escribir en él o leer desde él, abra el archivo para actualización con uno de los siguientes modos, “r+”, “w+” o “a+”. 
El modo “r+” abre el archivo para lectura y escritura. 
El modo “w+” crea un archivo para lectura y escritura. Si el archivo ya existe, el archivo se abre y el contenido se descarta. 
El modo “a+” abre el archivo para lectura y escritura; toda la escritura se hace al final del archivo. Si el archivo no existe, se crea. 
Observe que cada modo de apertura de archivo tiene un modo binario correspondiente (que contiene la letra b)

r   Abre un archivo para lectura.
w   Crea un archivo para escritura. Si el archivo ya existe, descarta el contenido actual.
a   Agrega; abre o crea un archivo para escritura al final del archivo.
r+  Abre un archivo para actualización (lectura y escritura).
w+  Crea un archivo para actualización. Si el archivo ya existe, descarta el contenido actual.
a+  Agrega; abre o crea un archivo para actualización; la escritura se hace al final del archivo.
rb  Abre un archivo para lectura en modo binario.
wb  Crea un archivo para escritura en modo binario. Si el archivo ya existe, descarta el contenido actual.
ab  Agrega; abre o crea un archivo para escritura al final del archivo en modo binario.
rb+ Abre un archivo para actualización (lectura y escritura) en modo binario.
wb+ Crea un archivo para actualización en modo binario. Si el archivo ya existe, descarta el contenido actual.
ab+ Agrega; abre o crea un archivo para actualización en modo binario; la escritura se hace al final del archivo.

*/ 