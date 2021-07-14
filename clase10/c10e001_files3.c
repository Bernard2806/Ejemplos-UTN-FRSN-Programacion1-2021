#include <stdio.h>

// Programa de investigación crediticia

/*
Lee un archivo con datos de Clientes. 

El siguiente programa permite a un gerente de crédito obtener las listas de: 
  los clientes con saldos en cero (es decir, clientes que no deben dinero), 
  clientes con saldos a favor (es decir, clientes a quienes la empresa les debe dinero), 
  y clientes con saldos en contra (es decir, clientes que le deben dinero a la empresa por concepto de bienes y servicios recibidos). 
Un saldo a favor es un monto negativo; un saldo en contra es un monto positivo.
*/

int main()
{
  int consulta;    /* número de solicitud */
  int cuenta;      /* número de cuenta */
  double saldo;    /* saldo de la cuenta */
  char nombre[30]; /* nombre de la cuenta */
  FILE *ptrCf;     /* apuntador al archivo clientes.dat */

  /* fopen abre el archivo; si no se puede abrir el archivo, sale del programa */
  if ((ptrCf = fopen("clientes.dat", "r")) == NULL)
  {
    printf("El archivo no pudo abrirse\n");
  } /* fin de if */
  else
  {
    /* despliega las opciones de consulta */
    printf("Introduzca la consulta\n"
           " 1 - Lista las cuentas con saldo cero\n"
           " 2 - Lista las cuentas con saldo a favor\n"
           " 3 - Lista las cuentas con saldo en contra\n"
           " 4 - Fin del programa\n? ");
    scanf("%d", &consulta);

    /* procesa la consulta del usuario */
    while (consulta != 4)
    {
      /* lee la cuenta, el nombre y el saldo del archivo */
      fscanf(ptrCf, "%d%s%lf", &cuenta, nombre, &saldo);

      switch (consulta)
      {
      case 1:
        printf("\nCuentas con saldo cero:\n");

        /* lee el contenido del archivo (hasta eof) */
        while (!feof(ptrCf))
        {

          if (saldo == 0)
          {
            printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);
          } /* fin de if */

          /* lee la cuenta, el nombre y el saldo del archivo */
          fscanf(ptrCf, "%d%s%lf", &cuenta, nombre, &saldo);

        } /* fin de while */

        break;

      case 2:
        printf("\nCuentas con saldos a favor :\n");

        /* lee el contenido del archivo (hasta eof) */
        while (!feof(ptrCf))
        {

          if (saldo < 0)
          {
            printf("%-10d%-13s%7.2f\n",
                   cuenta, nombre, saldo);
          } /* fin de if */

          /* lee la cuenta, el nombre y el saldo del archivo */
          fscanf(ptrCf, "%d%s%lf",
                 &cuenta, nombre, &saldo);
        } /* fin de while */

        break;

      case 3:
        printf("\nCuentas con saldo en contra:\n");

        /* lee el contenido del archivo (hasta eof) */
        while (!feof(ptrCf))
        {

          if (saldo > 0)
          {
            printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);
          } /* fin de if */

          /* lee la cuenta, el nombre y el saldo del archivo */
          fscanf(ptrCf, "%d%s%lf", &cuenta, nombre, &saldo);
        } /* fin while */

        break;

      } /* fin de switch */

      rewind(ptrCf); /* devuelve ptrCf al principio del archivo */

      // printf("\n? ");
      printf("\nIntroduzca la consulta\n"
           " 1 - Lista las cuentas con saldo cero\n"
           " 2 - Lista las cuentas con saldo a favor\n"
           " 3 - Lista las cuentas con saldo en contra\n"
           " 4 - Fin del programa\n? ");
      scanf("%d", &consulta);
    } /* fin de while */

    printf("Fin de la ejecucion.\n");
    fclose(ptrCf); /* fclose cierra el archivo */
  }                /* fin de else */

  return 0; /* indica terminación exitosa */
}

/*
Introduzca la consulta
1 - Lista las cuentas con saldo cero
2 - Lista las cuentas con saldo a favor
3 - Lista las cuentas con saldo en contra
4 - Fin del programa
? 1
Cuentas con saldo cero:
300 Blanco 0.00
? 2
Cuentas con saldos a favor :
400 Martinez -42.16
? 3
Cuentas con saldo en contra:
100 Sanchez 24.98
200 Lopez 345.67
500 Rico 224.62
? 4
Fin de la ejecucion.
*/

/*
los registros de un archivo creados mediante la función de salida con formato fprintf no necesariamente son de la misma longitud.

Aquí, el problema es que los campos (y, por lo tanto, los registros) en el modelo de entrada/salida con formato
de fprintf y fscanf, pueden cambiar de tamaño. Por ejemplo, 7, 14, 117, 2024 y 27383 son enteros
almacenados internamente en el mismo número de bytes, pero son campos de diferente tamaño cuando se despliegan
en la pantalla o se escriben dentro de un archivo de texto.

Por lo tanto, en general, el acceso secuencial con fprintf y fscanf no se utiliza para actualizar datos
en la misma posición. En lugar de eso, usualmente se sobrescribe el archivo completo.
*/
