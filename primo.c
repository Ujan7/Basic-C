#include <stdio.h>
#include <stdbool.h>

int nesimo_primo (int N) {

int i,k,n;
int prs[N];
prs[0] = 2;
bool esPRIMO;
i = 1;
n = 2;


while (i < N) {

    n ++;

    k = 0;
    esPRIMO = true;

    while (esPRIMO && k < i ) {

        if (n % prs[k] == 0) {

        esPRIMO = false;
    }

    k ++;
    
    }
    
    if (esPRIMO) {

    prs[i] = n;
    i ++;
}
}


return prs[N-1];
}

int main () {

    int n;

    printf("\nBienvenido al programa, para saber el n-esimo primo de un cierto n, por favor ingrese el valor del mismo\n");
    scanf("%d",&n);

    while (n < 0) {

        printf("\nEl n ingresado debe ser positivo, por favor intente de nuevo\n");
        scanf("%d",&n);
    }

    printf("\nTu primo es %d\n",nesimo_primo(n));

    return 0;
    

}