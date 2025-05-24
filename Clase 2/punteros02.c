#include <stdio.h>

void asignar(int *v) 
{
	*v = 5;
}

int main() 
{
	int i = 4;
	
	asignar(&i);
	printf("i= %d\n", i); // 5
	
	return 0;
}


