#include <stdio.h>
#define tamanio 5

struct datos_t {
float maximo;
float minimo;
float promedio;
};

/* NOTA: defino auxSUM como funcion que sume los valores del arreglo*/

float auxSUM (float a[], int tam) {

    float s = 0;
    tam = tam -1;

    while (0 <= tam) {

        s = s + a[tam];
        tam = tam - 1;
    }

    return s;
}

struct datos_t stats (float a[], int tam) {

    int i = 0;
    float pro,min,max;
    tam = tam-1; /*NOTA: es muy importante que le reste 1 al tamano ya que voy a comparar los valores con el contador i siguiente (i + 1)*/
    struct datos_t resultado;
    pro = 0; /*NOTA: r me va almacenar la suma de los valores del arreglo*/
    min = a[i];
    max = a[i];
    

    while (i < tam) {

        if (max >= a[i+1]) {    
        
        } else {

            max = a[i+1]; /*NOTA: si mi valor en i es  menor que el minimo, es mi nuevo minimo.Analogo con el maximo*/
        
        }

        if (min >= a[i+1]) {

            min = a[i+1];

        } else {
        
        }
        
        i = i + 1;
    }

    pro = auxSUM (a, (float)tam) / (float)tam;
    resultado.maximo = max;
    resultado.minimo = min;
    resultado.promedio = pro;
    
    return resultado;
}

/*NOTA: Reutilizo mi funcion pedirArreglo, pero esta vez como parametro deberia pasarle un arreglo de tipo float*/

void pedirArreglo (float a[], int n_max) {

    int i;
    for (i = 0; i < n_max; i ++) {

        printf("\nIngrese la pocision %d del arreglo\n",i);
        scanf("%f",&a[i]);
    }
}

int main () {


    float a[tamanio];
    struct datos_t resultado;

    printf("\nBienvenido al programa, si usted desea conocer el minimo,maximo, y el promedio de un arreglo, esta en el lugar correcto.\n");
    
        pedirArreglo (a,tamanio);
        resultado = stats (a,tamanio);

        printf("\nEl valor maximo del arreglo es: %f\n",resultado.maximo);
        printf("\nEl valor minimo del arreglo es: %f\n",resultado.minimo);
        printf("\nEl valor del promedio del arreglo es: %f\n",resultado.promedio);

    return 0;   
}

