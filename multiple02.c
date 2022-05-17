/* NOTA: en C no existen las asignaciones multiples, por ende no podemos darle un cierto valor a dos variables en una misma linea, como por ejemplo en el siguiente caso:

{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}

La forma "correcta" de este programa seria de la pinta:

{Pre: x = X, y = Y, z = Z}
x = y
y = y + x + z
z = y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}


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

    int x,y,z;

    x = pedirNumero();
    y = pedirNumero();
    z = pedirNumero();

    int X = x;
    int Y = y;
    int Z = z;

    assert (X == x);
    assert (Y == y);
    assert (Z == z);

    x = Y;
    y = Y + X + Z;
    z = Y + X;

    assert (x == Y);
    assert (y == Y + X + Z) ;
    assert (z == Y + X);

    printf("\n%d\n",x);
    printf("\n%d\n",y);
    printf("\n%d\n",z);
    
    return 0;
}































#include <stdio.h>
