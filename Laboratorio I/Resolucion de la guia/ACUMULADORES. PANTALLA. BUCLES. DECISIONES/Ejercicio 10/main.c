#include <stdio.h>
#include <stdlib.h>

//10. Escribir en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay

int main()
{
    int oddNumbers = 0;
    int i;
    printf("Numeros impares:\n");
    for(i = 1 ; i < 100 ; i++)
    {
        if( i % 2 != 0)
        {
            printf("%d\n",i);
            oddNumbers++;
        }
    }
    printf("Hay %d numeros impares entre 0 y 100.\n",oddNumbers);
    return 0;
}
