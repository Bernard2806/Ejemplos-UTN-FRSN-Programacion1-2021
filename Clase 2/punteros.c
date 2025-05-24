#include <stdio.h>

/*
tipo *var : Declara una variable de tipo "puntero a tipo".
&var : Operador de dirección, devuelve la dirección de memoria en la que vive var.
*var : Operador de indirección, devuelve el valor que está en la dirección de memoria var.

Si var es de tipo "puntero a X ", *var es de tipo X tipo *y = &x : Se dice que " y apunta a x " ( *y : "lo apuntado por y ").
*/
int main()
{

	int i = 5; // i es un numero entero
	int *p; // p es un puntero a un entero
	p = &i; // p ahora contiene la direccion de memoria de i
	// p "apunta a" i
	
	printf("%p, %p, %p \n", &i, p, &p); 
	// 00000000009FFE4C, 00000000009FFE4C, 00000000009FFE40
	
	printf("%d, %d\n", i, *p);  // 5, 5
	
	*p = 4;
	printf("%d, %d\n", i, *p); // 4, 4

}

