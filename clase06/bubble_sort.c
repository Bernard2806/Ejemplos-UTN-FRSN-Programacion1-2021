#include <stdio.h>

// Algoritmos de ordenamiento:
// Bubble Sort 
// Selection Sort
// Insertion Sort
// Shell Sort
// Merge Sort
// Quick Sort

// Bubble Sort o de la Burbuja: 
// El algoritmo entonces será recorrer el array 
// comparando a[i] con a[i+1] para permutarlos si no están en orden.
// El proceso finalizará cuando realicemos una iteración en
// la cual no haya sido necesario realizar ninguna permutación.
void ordenar(int a[], int len)
{

}


void bubble_sort(int a[], int len)
{
  // int ordenado = 0; // bandera o flag. 0: no hubo cambio, 1: hubo cambio

  // // while( !ordenado ) { // ! : not => !false==true , !true==false , false==0 true<>0
  // while( ordenado==0 ) { // ! : not => !false==true , !true==false , false==0 true<>0

  //   ordenado = 1;

  //   // recorrer array 
  //   for(int i=0; i<len-1; i++) {
    
  //     if (a[i+1] > a[i])
  //     {
  //       int aux = a[i];
  //       a[i] = a[i+1];
  //       a[i+1] = aux;
  //       ordenado = 0; // marco que hubo cambio 
  //     }
  //   }

  // }


  // int fin =0;
  // while (fin) {
  //   fin=1;
  //   for(int m=0; m<len-1; m++) {
  //     if (a[m] < a[m+1]) {
  //       int aux = a[m]; 
  //       a[m]=a[m+1];
  //       a[m+1]=aux;
  //       fin=0;
  //     }
  //   }
  // }


int aux;
    int fin = 0;
    while (fin==0)
    {
        fin = 1;
        for (int m = 0; m < len-1; m++)
        {
            if (a[m+1]> a[m])
            {
                aux=a[m+1];
                a[m+1]=a[m];
                a[m]=aux;
                fin = 0;
            }
            
        }
        
    }

  int nota = 0; 
  leer_nota_en_classroom(&nota); 
  if (nota >= 60) {
    printf("Aprobado\n");
  } else {
    printf("Recuperatorio el dia 01/07 \n"); 
  }


}


int main(int argc, char const *argv[])
{
  int a[] = {1,5,3,4,2};
  int len = 5;
  //len = sizeof(a)/sizeof(int);
  // 20/4 = 5 len 

  // 
  bubble_sort(a,len);

  // 
  for(int i=0; i<len; i++) {
    printf("%d\n",a[i]);
  }
  
  return 0;
}
