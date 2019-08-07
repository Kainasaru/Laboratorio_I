#include <stdio.h>
#include <stdlib.h>

//39. Diseñar un programa que lea 4 números e imprima el mayor de los cuatro

int main()
{
    float number = 0;
    float max = 0 ;
    int i;
    for(i = 0 ; i < 4 ; i++)
    {
        printf("Ingrese un numero (%d):\n",i+1);
        scanf("%f",&number);
        setbuf(stdin,NULL);
        system("cls");
        if(i == 0 || number > max )
        {
            max = number;
        }
    }
    printf("El mayor numero ingresado fue: %.2f\n",max);
    return 0;
}
