#include <stdio.h>
#include <stdlib.h>

//14. Dise�ar un programa que imprima y sume la serie de n�meros 3,6,9,12,...,99.

int main()
{
    int i = 3;
    printf("Serie de numeros:\n");
    while(i < 100 )
    {
        printf("%d\n",i);
        i+= 3;
    }
    return 0;
}
