/* PRE Y POSTCONDICION :
      {TRUE}
       ....
      {r = abs x} */

#include <stdio.h>
#include <math.h> /*NOTA: necesario para la segunda forma*/

int main () {

    int x,negativo;
    printf("\nIngrese un numero el cual quieras conocer su valor absoluto\n");
    scanf("%d",&x);
    

    if (x < 0) {

        negativo = x * (-1);
        printf("\nEl valor absoluto es : %d\n",negativo);

    } else {

        printf("\nEl valor absoluto es : %d\n",x);
    }

    return 0;

}

/* OTRA FORMA : 

    int main (void) {
    int x;
    printf("\nIngrese un numero el cual quieras conocer su valor absoluto\n");
    scanf("%d",&x);

    printf("/nEl valor absoluto corresponde a : %d/n",fabs(x));

    return 0;
} */
