#include <stdio.h>
#include <stdbool.h>
#define tamanio 5

bool existe_positivo (int a[], int tam) {

    bool prop;
    int contador; 
    contador = 0;
    prop = 0; /*NOTA: prop es mi "propocision" booleana, y la defino como false para luego negarla en el ciclo, para que a la primera que se haga true salga del mismo*/

    while (contador < tam && !prop) {

        prop = (a[contador] > 0);
        contador = contador + 1;
       
    }
    return prop;
}

bool todos_positivos(int a[], int tam) {

    bool prop;
    int contador;
    contador = 0;
    prop = 1;

    while (contador < tam && prop) {

        prop = (a[contador] > 0);
        contador = contador + 1;
       
    }
    return prop;    
}

int main () {

    int c;
    int a[tamanio];
    int i;
    i = 0;
    
    while (i < tamanio) {

        printf("\nIngrese porfavor el valor en cada pocision del arreglo.\n");
        scanf("%d",&a[i]);
        i = i + 1;
    }
    printf("\nAhora, si usted quiere comprobar si existen enteros positivos en su arreglo,presione 0.Por otro lado, si quiere comprobar que todos los elementos de su arreglo sean positivos, presione 1.\n");
    scanf("%d",&c);

    if (c == 0) {

        existe_positivo(a,tamanio);
        printf("\n%d\n",existe_positivo(a,tamanio));
   
    } else {

        todos_positivos(a,tamanio);
        printf("\n%d\n",todos_positivos(a,tamanio));
    
    }


    return 0;
}