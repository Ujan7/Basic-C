#include <stdio.h>
#define tamanio 5

int sumatoria (int a[], int tam) {

    int suma = 0; /*SUMA ME ALMACENA EL VALOR DE LOS INDICES SUMADOS, ARRANCA EN CERO*/
    int i; /*i ES MI CONTADOR*/

    for (i = 0; i < tam; i++) {

        suma += a[i];
        
        
    }

    return suma;
}

int main () {


    int a[tamanio];
    int i;
    i = 0;

    while (i < tamanio) {

        printf("\nIngrese porfavor el valor en cada pocision del arreglo.\n");
        scanf("%d",&a[i]);
        i = i + 1;
    }

     sumatoria(a,tamanio);
     printf("\nEl resultado de la suma de los elementos del arreglo es : %d\n",sumatoria(a,tamanio));


    return 0;
}
