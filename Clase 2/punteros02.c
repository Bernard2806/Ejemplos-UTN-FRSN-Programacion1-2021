#include <stdio.h>

// Función que recibe un puntero a entero
// y asigna el valor 5 a la dirección que apunta ese puntero
void asignar(int *v)
{
	*v = 5; // Modifica el valor donde apunta v (o sea, cambia el valor original)
}

int main()
{
	int i = 4; // Declaro un entero i con valor 4

	asignar(&i); // Le paso la dirección de i a la función asignar
				 // Así asignar puede modificar directamente a i

	printf("i= %d\n", i); // Imprime i, que ahora es 5 porque la función la modificó

	return 0;
}