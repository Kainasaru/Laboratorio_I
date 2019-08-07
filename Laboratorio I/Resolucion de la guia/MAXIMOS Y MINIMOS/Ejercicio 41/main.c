#include <stdio.h>
#include <stdlib.h>

//41. Hacer un programa que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado

int main()
{
    float number = 0;
    float max = 0;
    float min = 0;
    int i;
    for( i = 0 ; i < 5 ; i++)
    {
        printf("Ingres un numero (%d de %d):\n",i+1,5);
        scanf("%f",&number);
        setbuf(stdin,NULL);
        system("cls");

        if(i == 0 || number > max)
        {
            max = number;
        }
        if(i == 0 || number < min)
        {
            min = number;
        }
    }
    printf("El numero mayor es %.2f.\n",max);
    printf("El numero menor es %.2f.\n",min);
    return 0;
}
