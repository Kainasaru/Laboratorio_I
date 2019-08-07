#include <stdio.h>
#include <stdlib.h>

//13. Hacer el programa que imprima los números del 100 al 0 en orden decreciente

int main()
{
    int i;
    printf("Numeros del 100 al 0 (Orden decreciente):\n");
    for(i = 100 ; i >= 0; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
