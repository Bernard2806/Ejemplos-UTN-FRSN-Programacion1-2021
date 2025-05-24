# Ejercicios Práctica 2

1. Crear una función que reciba un carácter en minúscula y devuelva su conversión a mayúscula.  
2. Crear la función inversa del punto anterior: mayúscula a minúscula.  
3. Realizar un programa que solicite 20 números y los almacene en un array (vector).  
   Posteriormente se pedirá el ingreso de un número y se debe informar si el mismo se encuentra en el vector o no.  
   En caso que se encuentre, informar cuántas veces figura.  
4. *(vacío)*  

---

# Ejemplos

**funcion obtener_cuadrado**  
**funcion calcular_hipotenusa**  

**Sumar números de un array:**

```c
int a[] = {1, 2, 3, 4, 5};

long suma(int *datos, int largo)
// long suma(int datos[], int largo)
{
  long res = 0;
  for(int i = 0; i < largo; i++) {
    res += datos[i];
  }
  return res;
}

suma(a, 5);