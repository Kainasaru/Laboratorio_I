#include <stdio.h>
#include <stdlib.h>
//11. Hacer el programa que imprima los números pares entre el 1 y el 100
int main()
{
    int i;
    printf("Numeros pares:\n");
    for(i = 1 ; i < 100 ; i++ )
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
