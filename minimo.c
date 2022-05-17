/* PRE Y POSTCONDICION :
    {true}
     ....
    {t = min x,y} */

#include <stdio.h>

int main () {

     int x;
     int y; 
     
     printf("\nIngrese por favor, el primer numero\n");
     scanf("%d",&x);

     printf("\nIngrese por favor, el segundo numero\n");
     scanf("%d",&y);

     if (x > y) {
         printf("\nEl minimo de ambos numeros, es %d\n",y);
     } else if (y > x) {
         printf("\nEl minimo de ambos numeros, es %d\n",x);
     } else {
         printf("\nError: se debe ingresar dos numeros distintos\n");
     }

     return 0;

 }