#include <stdio.h>
#include <string.h>  // Necesario para usar strcpy

// Creamos un alias para el tipo de dato long y lo llamamos 'Fecha'
typedef long Fecha;

// Definimos la estructura Empleado
typedef struct Empleado
{
    int matricula;
    char nombre[20];
    Fecha fechaIngreso;
} Empleado;

int main()
{
    // Declaramos una variable de tipo Empleado
    Empleado e;

    // Cargamos los datos del empleado
    e.matricula = 31234;
    strcpy(e.nombre, "Juan");
    e.fechaIngreso = 20000628;  // Formato AAAAMMDD (año, mes, día)

    // Mostramos la información
    printf("Nombre: %s\n", e.nombre);
    printf("Matrícula: %d\n", e.matricula);
    printf("Fecha de ingreso: %ld\n", e.fechaIngreso);

    return 0;
}