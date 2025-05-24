#include <stdio.h>
#include <ctype.h>  
#include <string.h>

// - Tips :
// No almacenar suficiente espacio en un arreglo de caracteres para almacenar el carácter nulo que termina una cadena, 
// es un error.
// Imprimir una "cadena" que no contiene el carácter de terminación nulo, es un error.
// Pasar un carácter como argumento a una función cuando se espera una cadena, es un error de sintaxis.

// La biblioteca de manipulación de caracteres
/*
int isdigit( int c );   Devuelve un valor verdadero si c es un dígito; 
                        de lo contrario devuelve 0 (falso).
int isalpha( int c );   Devuelve un valor verdadero si c es una letra; 
                        de lo contrario devuelve 0 (falso).
int isalnum( int c );   Devuelve un valor verdadero si c es un dígito o una letra; de lo contrario devuelve 0 (falso).
int isxdigit( int c );  Devuelve un valor verdadero si c es un dígito hexadecimal; de lo contrario devuelve 0 (falso). (Revise el apéndice E, Sistemas de numeración, para una explicación detallada acerca de los números binarios, números octales, números decimales y números hexadecimales.)
int islower( int c );   Devuelve un valor verdadero si c es una letra minúscula; de lo contrario devuelve 0 (falso).
int isupper( int c );   Devuelve un valor verdadero si c es una letra mayúscula; 
                        de lo contrario devuelve 0 (falso).
int tolower( int c );   Si c es una letra mayúscula, tolower devuelve c como una letra minúscula.
                        De lo contrario, tolower devuelve el argumento sin modificación.
int toupper( int c );   Si c es una letra minúscula, toupper devuelve c como una letra mayúscula.
                        De lo contrario, toupper devuelve el argumento sin modificación.
int isspace( int c );   Devuelve un valor verdadero si c es un carácter de espacio en blanco (nueva línea
('\n'), espacio (' '), avance de página ('\f'), retorno de carro ('\r'),
tabulador horizontal ('\t') o tabulador vertical ('\v'); de lo contrario devuelve 0.
int iscntrl( int c );   Devuelve un valor verdadero si c es un carácter de control; 
                        de lo contrario devuelve 0 (falso).
int ispunct( int c );   Devuelve un valor verdadero si c es un carácter de impresión diferente de
                        un espacio, un dígito o una letra; de lo contrario devuelve 0.
int isprint( int c );   Devuelve un valor verdadero si c es un carácter de impresión, 
                        incluso el espacio (' '); de lo contrario devuelve 0.
int isgraph( int c );   Devuelve un valor verdadero si c es un carácter de impresión diferente 
                        del espacio (' '); de lo contrario devuelve 0.
*/

int main()
{
  // (condicion) ? verdadero : falso 
  // if (condicion) {
  //   verdadero
  // } else {
  //   falso 
  // }
  // isdigit, isalpha, isalnum y isxdigit

  // int f = 57;  // = 9  valor 57 en tabla ASCII 

  // printf("%c\n", f); // 9  
  // printf("%i\n", f); // 57 

  // char cArr[40]; 
  // if (isdigit( f )) {
  //   strcpy(cArr, "XX es un ");
  // } else {
  //   strcpy(cArr, "XX no es un ");
  // }

  // printf( "%s\n%s%s\n%s%s\n\n", 
  //   "De acuerdo con isdigit: ",
  //   cArr,
  //   // isdigit( f ) ? "XX es un " : "XX no es un ", 
  //   "digito",
  //   isdigit( '#' ) ? "# es un " : "# no es un ", 
  //   "digito" );
  // printf( "De acuerdo con isdigit: \n %s digito\n %s digito\n\n",
  //   isdigit( f ) ? "XX es un " : "XX no es un ",
  //   isdigit( '#' ) ? "# es un " : "# no es un " );

  // printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "De acuerdo con isalpha:",
  //   isalpha( 'A' ) ? "A es una " : "A no es una ", "letra",
  //   isalpha( 'b' ) ? "b es una " : "b no es una ", "letra",
  //   isalpha( '&' ) ? "& es una " : "& no es una ", "letra",
  //   isalpha( '4' ) ? "4 es una " : "4 no es una ", "letra" );

  // printf( "%s\n%s%s\n%s%s\n%s%s\n\n", "De acuerdo con isalnum:",
  //   isalnum( 'A' ) ? "A es un " : "A no es un ", "digito o una letra",
  //   isalnum( '8' ) ? "8 es un " : "8 no es un ", "digito o una letra",
  //   isalnum( '#' ) ? "# es un " : "# no es un ", "digito o una letra" );

  // printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "De acuerdo con isxdigit:",
  //   isxdigit( 'F' ) ? "F es un " : "F no es un ", "digito hexadecimal",
  //   isxdigit( 'J' ) ? "J es un " : "J no es un ", "digito hexadecimal",
  //   isxdigit( '7' ) ? "7 es un " : "7 no es un ", "digito hexadecimal",
  //   isxdigit( '$' ) ? "$ es un " : "$ no es un ", "digito hexadecimal",
  //   isxdigit( 'f' ) ? "f es un " : "f no es un ", "digito hexadecimal" );

  // // islower, isupper, tolower y toupper
  // printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "De acuerdo con islower:",
  //   islower( 'p' ) ? "p es una " : "p no es una ", "letra minuscula",
  //   islower( 'P' ) ? "P es una " : "P no es una ", "letra minuscula",
  //   islower( '5' ) ? "5 es una " : "5 no es una ", "letra minuscula",
  //   islower( '!' ) ? "! es una " : "! no es una ", "letra minuscula" );

  // printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "De acuerdo con isupper:",
  //   isupper( 'D' ) ? "D es una " : "D no es una ", "letra mayuscula",
  //   isupper( 'd' ) ? "d es una " : "d no es una ", "letra mayuscula",
  //   isupper( '8' ) ? "8 es una " : "8 no es una ", "letra mayuscula",
  //   isupper( '$' ) ? "$ es una " : "$ no es una ", "letra mayuscula" );

  // printf( "%s%c\n%s%c\n%s%c\n%s%c\n", 
  //   "u convertida a mayuscula es ", toupper( 'u' ),
  //   "7 convertida a mayuscula es ", toupper( '7' ),
  //   "$ convertida a mayuscula es ", toupper( '$' ),
  //   "L convertida a minuscula es ", tolower( 'L' ) );

  // isspace, iscntrl, ispunct, isprint e isgraph
  // printf( "%s\n%s%s%s\n%s%s%s\n%s%s\n\n", "De acuerdo con isspace:",
  //   "Nueva linea", 
  //   isspace( '\n' ) ? " es un " : " no es un ", "caracter espacio en blanco", 
  //   "Tabulador horizontal",
  //   isspace( '\t' ) ? " es un " : " no es un ", "caracter espacio en blanco",
  //   isspace( '%' ) ? "% es un " : "% no es un ", "caracter espacio en blanco" );

  printf( "%s\n%s%s%s\n%s%s\n\n", "De acuerdo con iscntrl:",
    "Nueva linea", 
    iscntrl( '\n' ) ? " es un " : " no es un ", "caracter de control", 
    iscntrl( '$' ) ? "$ es un " : "$ no es un ", "control character" );
 
  printf( "%s\n%s%s\n%s%s\n%s%s\n\n", "De acuerdo con ispunct:",
    ispunct( ';' ) ? "; es un " : "; no es un ", "caracter de puntuacion",
    ispunct( 'Y' ) ? "Y es un " : "Y no es un ", "caracter de puntuacion ",
    ispunct( '#' ) ? "# es un " : "# no es un ", "caracter de puntuacion" );
 
  printf( "%s\n%s%s\n%s%s%s\n\n", "De acuerdo con isprint:",
    isprint( '$' ) ? "$ es un " : "$ no es un ", "caracter de impresion",
    "Alerta", 
    isprint( '\a' ) ? " es un " : " no es un ", "caracter de impresion" );
 
  printf( "%s\n%s%s\n%s%s%s\n", "De acuerdo con isgraph:",
    isgraph( 'Q' ) ? "Q es un " : "Q no es un ", "caracter de impresion diferente a un espacio",
    "Espacio", 
    isgraph( ' ' ) ? " es un " : " no es un ", "caracter de impresion diferente a un espacio" );



  return 0;
}
