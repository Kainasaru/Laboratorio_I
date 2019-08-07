#include <stdio.h>
#include <stdlib.h>

/*18. Diseñar en un programa que permita ingresar 10 números, ninguno de ellos igual a cero. Se pide sumar los positivos,
 obtener el producto de los negativos y luego mostrar ambos resultados*/

int main()
{
    float number = 0;
    float positiveSum = 0;
    float negativeMultiplication = 1;
    int i;
    for(i = 0 ; i < 10 ; i++)
    {
        do
        {
            printf("Ingrese un numero(%d):\n",i+1);
            scanf("%f",&number);
            setbuf(stdin,NULL);
            if(number == 0)
            {
                printf("El numero no puede ser 0.\n");
                system("pause");
                system("cls");
            }
        }
        while(number == 0);
        if(number > 0)
        {
            positiveSum += number;
        }
        else
        {
            negativeMultiplication *= number;
        }
        system("cls");
    }
    printf("La suma de los positivos es: %.2f\n",positiveSum);
    printf("El producto de los negativos es: %.2f\n",negativeMultiplication);
    return 0;
}
