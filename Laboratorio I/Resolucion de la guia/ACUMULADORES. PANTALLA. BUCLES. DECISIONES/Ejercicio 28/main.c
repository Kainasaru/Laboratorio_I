#include <stdio.h>
#include <stdlib.h>

//28. Escribir en y codificar en C un programa que muestre los números primos comprendidos entre 0 y 100

int main()
{
    int prime;
    printf("Numeros primos entre 0 y 100:\n");
    for(prime = 2 ; prime < 101 ; prime++)
    {
        int isPrime = 1;
        int divider = 2;
        while( divider < prime && isPrime )
        {
            if(prime % divider == 0)
            {
                isPrime = 0;
            }
            divider++;
        }
        if( isPrime )
        {
            printf("%d\n",prime);
        }
    }
    return 0;
}
