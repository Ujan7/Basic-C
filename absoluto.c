#include <stdio.h>
#include <math.h> 

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

/* Another way: 

    int main (void) {
    int x;
    printf("\nIngrese un numero el cual quieras conocer su valor absoluto\n");
    scanf("%d",&x);

    printf("/nEl valor absoluto corresponde a : %d/n",fabs(x));

    return 0;
} */
