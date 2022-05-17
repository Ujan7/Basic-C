#include <stdio.h>

int suma_hasta (int n) {

    int suma;
    suma = ((1 + n) * n) / 2;  
    printf("\n%d\n",suma);

    return 0;     
}

int main () {

    int n;
    printf("\nPor favor ingrese un valor hasta el cual realizar la suma de sus primeros elementos\n");
    scanf("%d",&n);

    if (n< 0) {

        printf("\nError (Por favor vuelva a ingresar un numero positivo)\n");

    } else {

        suma_hasta(n);
    }
    return 0;
}


