#include <stdio.h>

// Inicializa el array con el valor 1 en cada posición
void inicio_array(int a[])
{
  for (size_t i = 0; i < 10; i++)
  {
    a[i] = 1;
  }
}

// Cambia el valor de la variable que apunta el puntero a 20190101 (paso por referencia)
void devuelve_ultimo_dia(int *d)
{
  *d = 20190101;
}

// Recibe un valor (paso por valor), cambia localmente y lo devuelve
int devuelve_nueva_fecha(int d)
{
  d = 20190101;
  return d;
}

int main()
{
  int ausencias[7];
  inicio_array(ausencias); // llena el array con unos

  int fecha = 20210429;
  printf("fecha antes: %d\n", fecha);

  // Paso por valor: si descomentás esta línea, no cambia la variable 'fecha' afuera
  // devuelve_ultimo_dia(fecha);

  // Paso por referencia: le paso la dirección de fecha, así la función puede modificarla directamente
  devuelve_ultimo_dia(&fecha);

  // Paso por valor con retorno: la función devuelve una nueva fecha, pero no modifica la original
  int nueva_fecha = devuelve_nueva_fecha(fecha);

  printf("fecha despues de modifica por referencia: %d\n", fecha);
  printf("nueva fecha que devuelve la funcion: %d\n", nueva_fecha);

  return 0;
}