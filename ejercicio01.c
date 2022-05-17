#include <stdio.h>
#include <assert.h>

void hastaN (int n) {

    while (n > 0) {

        printf("%d Hola\n",n);
        -- n;
        
    }
    return 0;
}
int pedirNumero(void){

    int x;
    assert(x >= 0);
    printf("\nPor favor ingrese un numero mayor que 0\n");
    scanf("%d",&x);
    return x;
    
}
int main () {
    
    hastaN(pedirNumero());


    return 0;
}