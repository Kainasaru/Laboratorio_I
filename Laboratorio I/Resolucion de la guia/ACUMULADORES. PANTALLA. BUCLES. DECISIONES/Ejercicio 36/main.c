#include <stdio.h>
#include <stdlib.h>

//36. Realizar la tabla de multiplicar de un número entre 0 y 10 de forma que se visualice de la siguiente forma: 4x1= 4 4x2= 8

int main()
{
    int i;
    for(i = 0 ; i < 11 ; i++)
    {
        printf("9x%d= %d ",i,9*i);
    }
    return 0;
}
