#include <stdio.h>
#include <stdlib.h>

//Calcular y generar los primeros 100 números múltiplos de 5, de 7 y de ambos

int main()
{
    int i;
    printf("Primeros 100 multiplos de 5:\n");
    for(i = 0 ; i < 101 ; i++)
    {
        printf(" %d -",5*i);
    }
    printf("\nPrimeros 100 multiplos de 7:\n");
    for(i = 0 ; i < 101 ; i++)
    {
        printf(" %d -",7*i);
    }
    printf("\nPrimeros 100 multiplos de 5 y 7:\n");
    for(i = 0 ; i < 101 ; i++)
    {
        printf("(5*%d)%d - ",i,5*i);
        printf("(7*%d)%d\n",i,7*i);
    }
    return 0;
}
