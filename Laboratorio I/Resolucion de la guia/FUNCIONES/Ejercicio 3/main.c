#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "input.h"

/*3- Realizar un programa que por medio de una función calcule la intersección con el eje x de la parábola a x²+bx+c.
En el caso de que las raíces sean complejas conjugadas no se calculan ,
 pero se le deberá informar al usuario por medio de un mensaje como el siguiente “Las raíces son complejas conjugadas”*/

int xaxisIntersection(float a, float b, float c, float* intersection1, float* intersection2 );

int main()
{
    float intersection1 = 0;
    float intersection2 = 0;
    float a = 0;
    float b = 0;
    float c = 0;

    getFloat("Ingrese el valor de a:\n","ERROR.\n",-16777215,16777215,-1, &a);
    getFloat("Ingrese el valor de b:\n","ERROR.\n",-16777215,16777215,-1, &b);
    getFloat("Ingrese el valor de c:\n","ERROR.\n",-16777215,16777215,-1, &c);
    if( xaxisIntersection(a,b,c,&intersection1,&intersection2))
    {
        printf("Primer punto de interseccion con eje x: (x;y)=(%.2f;0)\n",intersection1);
        printf("Segundo punto de interseccion con eje x: (x;y)=(%.2f;0)\n",intersection2);
    }
    else
    {
        printf("Las raices son complejas conjugadas.\n");
    }

    return 0;
}

int xaxisIntersection(float a, float b, float c, float* intersection1, float* intersection2 )
{
    int ret = ( (pow(b,2) - 4 * a * c) < 0 )? 0 : 1 ;
    if(ret)
    {
        *intersection1 = ( (-1 * b) +  sqrt( pow(b,2) - 4 * a * c  ) ) / 2*a;
        *intersection2 = ((-1 * b) -  sqrt( pow(b,2) - 4 * a * c  ) ) / 2*a;
    }
    return ret;
}
