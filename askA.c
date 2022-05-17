/*EJERCICIO 5*/
#include <stdio.h>

void pedirArreglo (int a[], int n_max) {

    int i;
    for (i = 0; i < n_max; i ++) {

        scanf("%d",&a[i]);
    }
}

void imprimeArreglo (int a[], int n_max) {

    int i;
    for (i = 0; i < n_max; i ++) {

        printf("%d ",a[i]);
    }

    printf("\n"); /*SALTO DE LINEA PARA QUE QUEDE MAS PROLIJO*/
}

int main () {

    int n; /*TAMANO DEL ARREGLO*/
    int a[n];
    
    printf("\nIngrese porfavor, el tamano del arreglo y posteriormente el arrgelo\n");
    scanf("%d",&n);
    
    pedirArreglo(a,n);
    imprimeArreglo(a,n);

    return 0;
}

