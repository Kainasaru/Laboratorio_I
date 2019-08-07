#include <stdio.h>
#include <stdlib.h>

/*22. Diseñar el programa necesario para que habiéndose leído el valor de
2 variables NUM1 y NUM2 se intercambien los valores de las variables, es decir que el valor que tenía NUM1
ahora lo contenga NUM2 y viceversa*/

int main()
{
    float num1 = 1.0/2.0;
    float num2 = 2;
    float auxiliar = 0;

    printf("NUM1 %.2f -- NUM2 %.2f\n",num1,num2);
    auxiliar = num2;
    num2 = num1;
    num1 = auxiliar;
    printf("SWAPPING...\n");
    system("pause");
    system("cls");
    printf("NUM1 %.2f -- NUM2 %.2f\n",num1,num2);
    printf("SWAPPED\n");

    return 0;
}
