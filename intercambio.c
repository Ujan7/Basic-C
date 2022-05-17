/* PRE Y POSTCONDICION :
    {true}
     ....
    {x = y, y = x} */

#include <stdio.h>

int main () {

    int x,y,w;

    printf("\nBienvenido, este programa lo que hace es interambiar el valor de dos variables.\n");

    printf("\nIngrese por favor un numero para la variable x.\n");
    scanf("%d",&x);

    printf("\nAhora ingrese por favor un numero para la variable y.\n");
    scanf("%d",&y);

    w = x;
    x = y;
    y = w;

    printf("\nLuego del intercambio de variables  x es %d e y es %d\n",x,y);

    return 0;

}