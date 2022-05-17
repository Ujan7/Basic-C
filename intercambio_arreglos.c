#include <stdio.h>
#define tamanio 5

void pedirArreglo (int a[], int n_max) {

    int i;
    for (i = 0; i < n_max; i ++) {

        printf("\nIngrese la pocision %d del arreglo\n",i);
        scanf("%d",&a[i]);
    }
}

void imprimeArreglo (int a[], int n_max) {

    int i;
    for (i = 0; i < n_max; i ++) {

        printf("%d ",a[i]);
    }

    printf("\n");
}

void intercambiar (int a[], int tam, int i, int j) {

    int aux = a[i];
    
    a[i] = a[j];
    a[j] = aux; 
    
} /*En este caso como no tenemos el contador i, nuestra funcion no recorre el arreglo, por lo que tam no es necesario como parametro*/

int main () {

    int a[tamanio];
    int i;
    int j;

    pedirArreglo(a,tamanio);

    printf("\nAhora ingrese la primera pocision que desee intercambiar: \n");
    scanf("%d",&i);
    printf("\nAhora ingrese la segunda pocision que desee intercambiar: \n");
    scanf("%d",&j);

    if (i > tamanio || j > tamanio || i < 0 || j < 0) {

        printf("\nLas pocisiones son erroneas.Por favor vuelva a ingresar nuevamente las mismas.\n");
    } else {

        intercambiar(a,tamanio,i,j);
        imprimeArreglo(a,tamanio);

    }

    return 0;
}

