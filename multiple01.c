/* NOTA: en C no existen las asignaciones multiples, por ende no podemos darle un cierto valor a dos variables en una misma linea, como por ejemplo en el siguiente caso:

{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}

La forma "correcta" de este programa seria de la pinta:

{Pre: x = X, y = Y}
y = x + y
x = x + 1
{Post: x = X + 1, y = X + Y}

Donde claramente vemos que asignamos un cierto valor por linea, a cada variable. */

#include <stdio.h>
#include <assert.h>

int pedirNumero (void) {

    int numero;
    printf("\nPor favor ingrese un valor entero\n");
    scanf("%d",&numero);
    return numero;

} /*NOTA: voy a utilizar esta funcion del proyecto anterior para pedir un numero,y posteriormente realizar las asignaciones correspondientes*/

int main () {

    int x,y;
    x = pedirNumero();
    y = pedirNumero(); /*Aqui solicito los enteros para x e y*/
    
    int X = x;
    int Y = y; /*Aqui dejo explicitamente la precondicion*/

    assert(X == x); 
    assert(Y == y);

    x = X + 1; /* Aqui dejo explicitamente la postcondicion*/
    y = X + Y;

    assert(x == X + 1); 
    assert(y == X + Y);

    printf("\n%d\n",x);
    printf("\n%d\n",y);

    return 0;

}
