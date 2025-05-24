#include <stdio.h>
#include <string.h> // Para poder usar strcpy

// Creamos un alias 'Fecha' para el tipo long (representa una fecha como AAAAMMDD)
typedef long Fecha;

// Definimos una estructura para representar un empleado
typedef struct Empleado
{
  int matricula;
  char nombre[20];
  Fecha fechaIngreso;
} Empleado;

// Función para agregar un empleado al arreglo
void agregarEmpleado(Empleado emps[], int *len, int leg, char *nom, Fecha f)
{
  emps[*len].matricula = leg;
  strcpy(emps[*len].nombre, nom);
  emps[*len].fechaIngreso = f;
  (*len)++; // Corregido: hay que incrementar el valor apuntado
}

int main()
{
  Empleado aEmp[100]; // Arreglo para guardar hasta 100 empleados
  int len = 0;        // Cantidad actual de empleados cargados

  // Agregamos algunos empleados al arreglo
  agregarEmpleado(aEmp, &len, 23213, "Juan", 20101202);
  agregarEmpleado(aEmp, &len, 11243, "Pablo", 20081005);
  agregarEmpleado(aEmp, &len, 10021, "Pedro", 20050422);

  // Mostramos los empleados cargados
  for (int i = 0; i < len; i++)
  {
    printf("Empleado #%d\n", i + 1);
    printf("  Matrícula: %d\n", aEmp[i].matricula);
    printf("  Nombre: %s\n", aEmp[i].nombre);
    printf("  Fecha de ingreso: %ld\n\n", aEmp[i].fechaIngreso);
  }

  return 0;
}