#include <stdio.h>
#define tamanio 5

struct comp_t {
int menores;
int iguales;
int mayores;
};


void pedirArreglo (int a[], int n_max) {

    int i;
    for (i = 0; i < n_max; i ++) {

        printf("\nIngrese la pocision %d del arreglo\n",i);
        scanf("%d",&a[i]);
    }
}

struct comp_t cuantos(int a[], int tam, int elem) {

    int i = 0;
    struct comp_t cuants;
    
    cuants.iguales = 0; /*NOTA: inicializo en cero todos ellos asi cuentan sin problemas los elementos*/
    cuants.menores = 0;
    cuants.mayores = 0;

    while (i < tam) {

        if (a[i] < elem) {

            cuants.menores ++; /*NOTA: lo que estoy codeando aca basicamente es como un contador, ira recorriendo el arreglo hasta que el if salte de guarda*/
        
        } else if (a[i] > elem) {

            cuants.mayores ++;
        
        } else {

            cuants.iguales ++;
        }

        i ++;
    }

    return cuants;
}

int main () {

    int a[tamanio];
    int x;
    int elem;
    struct comp_t cuants;
    cuants = cuantos(a,tamanio,elem);


    printf("\nBienvenido al programa, si quiere saber cuantos elementos de un arreglo, son iguales,mayores o menores a un cierto valor, presione 1.\n");
    scanf("%d",&x);

    if (x == 1) {

        pedirArreglo(a,tamanio);
        
        printf("\nAhora ingrese porfavor, el elemento el cual desea comparar con los valores del arreglo\n");
        scanf("%d",&elem);
        
        cuants = cuantos(a,tamanio,elem);

        printf("\nNumeros menores a %d : %d\n",elem,cuants.menores);
        printf("\nNumeros mayores a %d : %d\n",elem,cuants.mayores);
        printf("\nNumeros iguales a %d : %d\n",elem,cuants.iguales);
        

    } else {

        printf("\nNos vemos pronto!\n");
    }

    return 0;
}
