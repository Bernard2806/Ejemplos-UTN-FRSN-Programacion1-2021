#include <stdio.h>

/*
4. Se ingresa un valor numérico de 8 dígitos que representa una fecha con el
siguiente formato: aaaammdd
Se pide informar por separado el día, el mes y el año de la fecha ingresada.
*/

int main()
{
  // Variable donde se guarda la fecha completa (en formato entero: aaaammdd)
  int fecha;

  // Variables para almacenar el año, mes y día por separado
  int anio, mes, dia;

  // Variable auxiliar para ayudar en la separación de los componentes de la fecha
  int auxiliar;

  // Pedimos al usuario que ingrese la fecha con el formato específico
  printf("Ingrese fecha (aaaammdd): ");
  scanf("%d", &fecha);

  // Obtenemos el año: como los primeros 4 dígitos representan el año,
  // al dividir por 10000 nos quedamos con esa parte
  anio = fecha / 10000;

  // Calculamos el resto (los últimos 4 dígitos: mmdd)
  auxiliar = fecha % 10000;

  // De esos 4 dígitos, los primeros 2 (mm) se obtienen dividiendo por 100
  mes = auxiliar / 100;

  // Y los últimos 2 (dd) se obtienen con el módulo 100
  dia = auxiliar % 100;

  // Mostramos la fecha en formato dd/mm/aaaa
  printf("%d/%d/%d", dia, mes, anio);

  return 0; // Indicamos que el programa terminó correctamente
}