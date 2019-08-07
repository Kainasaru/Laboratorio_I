#include <stdio.h>
#include <stdlib.h>

//15. Escribir en y codificar en C un programa que muestre los múltiplos de 6 comprendidos entre 0 y 100

int main()
{
    int i = 6;
    printf("Multiplos de 6 entre 0 y 100:\n");
    while(i < 100)
    {
        printf("%d\n",i);
        i += 6;

    }
    return 0;
}
