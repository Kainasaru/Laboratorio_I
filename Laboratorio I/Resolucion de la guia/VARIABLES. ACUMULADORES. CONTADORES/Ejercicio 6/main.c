#include <stdio.h>
#include <stdlib.h>

//6. De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero
int main()
{
    float number = 0;
    int greaterThanZero = 0;
    int lessThanZero = 0;
    int i;
    for(i = 0 ; i < 10 ; i++)
    {
        printf("Ingrese un numero:\n");
        scanf("%f",&number);
        setbuf(stdin , NULL);
        if(number > 0)
        {
            greaterThanZero++;
        }
        else if( number < 0)
        {
            lessThanZero++;
        }
    }
    printf("Hay %d numeros menores que cero y %d numeros mayores que cero.",lessThanZero , greaterThanZero);
    return 0;
}
