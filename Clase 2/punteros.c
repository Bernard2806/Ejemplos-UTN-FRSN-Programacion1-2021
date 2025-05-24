#include <stdio.h>

/*
tipo *var : Declara una variable que es un puntero a ese tipo. Ej: int *p es un puntero a int.
&var : El operador "dirección de", devuelve la dirección en memoria donde está guardada la variable var.
*var : El operador "indirección", devuelve el valor que está guardado en la dirección que apunta var.

Si var es un puntero a X, entonces *var es del tipo X.
Ejemplo:
int x;
int *y = &x;   // y apunta a x, o sea guarda la dirección de x
* y es "lo que apunta y", es decir, el valor de x.
*/

int main()
{
	int i = 5; // declaro un int llamado i y le asigno 5
	int *p;	   // declaro un puntero a int llamado p
	p = &i;	   // p ahora guarda la dirección de memoria de i (apunta a i)

	// Imprimo 3 direcciones de memoria:
	// &i  -> dirección donde está i
	// p   -> valor del puntero p, que es la dirección de i
	// &p  -> dirección donde está guardado el puntero p
	printf("%p, %p, %p \n", &i, p, &p);

	// Imprimo el valor de i y el valor al que apunta p (que es i)
	printf("%d, %d\n", i, *p); // ambos son 5

	// Cambio el valor al que apunta p (o sea i) a 4
	*p = 4;
	// Ahora imprimo i y *p que cambiaron a 4
	printf("%d, %d\n", i, *p); // ambos son 4

	return 0;
}