#include <stdio.h>

struct div_t {
int cociente;
int resto;
};

struct div_t division (int x, int y) {

    struct div_t p;

    p.cociente = x / y;
    p.resto = x % y;

    printf("\nEl cociente de la division es %d\n",p.cociente);
    printf("\nEl resto de la division es %d\n",p.resto);

}

int main () {

    int x,y;

    printf("\nIngrese un valor para el dividendo\n");
    scanf("%d",&x);

    printf("\nIngrese un valor para el divisor\n");
    scanf("%d",&y);

    if (y == 0) {

        printf("\nError, el divisor no puede ser cero.\n");
    
    } else {

        division(x,y);

    }

    return 0;
}