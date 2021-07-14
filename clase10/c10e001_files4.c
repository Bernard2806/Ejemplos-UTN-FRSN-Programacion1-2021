#include <stdio.h>

// - Archivo de acceso aleatorio:
// los registros individuales son de la misma longitud
// se puede acceder a ellos de modo directo (y por lo tanto, más rápido), sin buscar en otros registros.
// Los datos pueden insertarse en el archivo de acceso aleatorio, sin destruir otros datos del archivo.

/*
cuando se escribe un entero, en lugar de utilizar
    fprintf( ptrF, "%d", numero );
lo que podría imprimir un solo dígito o hasta 11 (10 dígitos más un signo, cada uno de los cuales requiere 1 byte
de almacenamiento) para un entero de 4 bytes, puede utilizarse
    fwrite( &numero, sizeof( int ), 1, ptrF );
lo que siempre escribe 4 bytes (o 2 bytes en un sistema con enteros de 2 bytes).

fwrite() transfiere un número específico de bytes que comienzan en una ubicación específica de la
memoria hacia un archivo. Los datos se escriben al principio de la ubicación del archivo indicada por la posición
del apuntador. 
fread() transfiere un número específico de bytes desde la ubicación especificada
en el archivo por medio del apuntador de posición del archivo, hacia un área en memoria que comienza con la
dirección especificada.

Aunque fread y fwrite leen y escriben datos, tales como enteros, de tamaño fijo en lugar de formatos de tamaño variable, los datos que
manipulan se procesan en el formato fuente la computadora (es decir, bytes o datos), en lugar del formato de printf y scanf legible para el humano.

Las funciones fwrite y fread son capaces de leer y escribir arreglos de datos desde y hacia un disco.
El tercer argumento tanto de fread como de fwrite es el número de elementos del arreglo que debe leerse
desde el disco o escribirse en el disco. La llamada anterior a la función fwrite escribe un solo entero en disco,
así que el tercer argumento es 1 (como si escribiera uno de los elementos del arreglo).
*/

/*
Elabore un sistema de procesamiento de créditos capaz de almacenar hasta 100 registros de longitud fija. Cada
registro debe consistir en un número de cuenta que se utilizará como clave de registro, un apellido, un nombre y
un saldo. El programa resultante debe poder actualizar una cuenta, insertar un nuevo registro de cuenta, eliminar
una cuenta y listar todos los registros de cuentas en un archivo de texto con formato para impresión. Utilice un
archivo de acceso aleatorio.
*/

// Creación secuencial de un archivo de acceso aleatorio

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
  int i; /* contador utilizado para contar de 1 a 100 */

  /* crea datosCliente con información predeterminada */
  struct datosCliente clienteEnBlanco = {0, "", "", 0.0};

  FILE *ptrCf; /* apuntador al archivo credito.dat */

  /* fopen abre el archivo; si no se puede abrir, sale del archivo */
  if ((ptrCf = fopen("credito.dat", "wb")) == NULL)
  {
    printf("No pudo abrirse el archivo.\n");
  } /* fin de if */
  else
  {

    /* escribe 100 registros en blanco en el archivo */
    for (i = 1; i <= 100; i++)
    {
      fwrite(&clienteEnBlanco, sizeof(struct datosCliente), 1, ptrCf);
    } /* fin de for */

    fclose(ptrCf); /* fclose cierra el archivo */
  }                /* fin de else */

  return 0; /* indica terminación exitosa */
}

/*
Este programa inicializa
con estructuras vacías los 100 registros del archivo “creditos.dat”, usando la función fwrite. Cada
estructura vacía contiene 0 para el número de cuenta, “ ” (cadena vacía) para el apellido, “” para el nombre,
y 0.0 para el saldo. El archivo se inicializa de esta manera para crear espacio en el disco en el que se almacenará
el archivo y para poder determinar si un registro contiene datos.
*/

/*
fwrite( &clienteEnBlanco, sizeof( struct datosCliente ), 1, ptrCf );

La función fwrite realmente puede utilizarse para escribir varios elementos de un arreglo de objetos. Para
escribir varios elementos de un arreglo, el programador proporciona un apuntador a un arreglo como el primer
argumento en la llamada a fwrite, y especifica el número de elementos a escribirse como el tercer argumento
de la llamada a fwrite. En la instrucción anterior, fwrite se utilizó para escribir un objeto sencillo, el cual
no era un elemento del arreglo. Escribir un objeto individual es equivalente a escribir un elemento de un arreglo,
como el 1 en la llamada a fwrite.
*/