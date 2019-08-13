#include <stdio.h>
#include <stdlib.h>
#include "input.h"

/*4- Cargar un vector de 20 elementos con n�meros reales. Usar una funci�n para ver la cantidad de veces que se repite
un n�mero en el vector. La funci�n debe tener el siguiente prototipo. Donde num es el n�mero a buscar dentro del vector.
La funci�n retorna un int que indica la cantidad de veces que se encontr� num.
De no encontrarse el n�mero se debe retornar 0 (cero) e informar desde el main que el n�mero no se encontr�.*/

int find(float num, float array[], int size);

int main()
{
    float array[20] = {};
    float numberToSeek = 0;
    int repeats = -1;
    int i;
    for(i = 0 ; i < 20 ; i++)
    {
        printf("Ingrese un numero(%d):\n",i+1);
        getFloat("","ERROR.\n",-16777215,16777215,-1,&array[i]);
        system("cls");
    }
    getFloat("Ingrese el numero que desea buscar:\n","ERROR.\n",-16777215,16777215,-1,&numberToSeek);
    repeats = find(numberToSeek,array,20 );
    printf("El numero %.2f se encontro %d veces.\n",numberToSeek,repeats);
    return 0;
}

int find(float num, float array[], int size)
{
    int repeats = 0;
    int i;
    for(i = 0 ; i < size ; i++)
    {
        if(num == array[i])
        {
            repeats++;
        }
    }
    return repeats;
}
