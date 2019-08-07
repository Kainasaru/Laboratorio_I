#include <stdio.h>
#include <stdlib.h>


//ngresar 5 números y calcular su media

int main()
{
    float number = 0;
    float accumulator = 0;
    int i;
    for( i = 0 ; i < 5 ; i++)
    {
        printf("Ingrese un numero(%d):\n",i+1);
        scanf("%f",&number);
        setbuf(stdin, NULL);
        accumulator += number;
    }
    printf("La media de los numeros ingresados es: %.2f\n", accumulator / 5);
    return 0;
}
