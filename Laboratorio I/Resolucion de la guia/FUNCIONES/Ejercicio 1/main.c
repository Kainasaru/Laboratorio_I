#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "input.h"
#include "numericstring.h"

float getRectangleSurface(float base, float height );

/*1- Escribir un programa que por medio de una función calcule la superficie de un rectángulo.
El programa continúa calculando superficies hasta que se ingresen ambos lados con valor cero.*/


int main()
{
    float base = 0;
    float height = 0;
    float surface = 0;
    do
    {
        printf("%d",numStrCmp("1","2"));
        getFloat("Ingrese base del rectangulo:\n","ERROR.\n",0,16777215,-1,&base);
        system("cls");
        getFloat("Ingrese altura del rectangulo:\n","ERROR.\n",0,16777215,-1,&height);
        if( !(base == 0 && height == 0) )
        {
            surface = getRectangleSurface(base,height);
            printf("La superficie de su rectangulo es %.2f.\n",surface );
            system("pause");
        }
        system("cls");
    }
    while( !(base == 0 && height == 0) );
    return 0;
}

float getRectangleSurface(float base, float height )
{
    return base * height;
}
