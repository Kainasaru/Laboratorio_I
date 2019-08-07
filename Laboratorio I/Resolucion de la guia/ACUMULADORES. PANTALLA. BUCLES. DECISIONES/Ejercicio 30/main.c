#include <stdio.h>
#include <stdlib.h>

//30. Dados 3 números donde el primero y el último son límites de un intervalo, indicar si el segundo pertenece a dicho intervalo.

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    printf("Ingrese el primer numero:\n");
    scanf("%d",&number1);
    setbuf(stdin,NULL);
    printf("Ingrese el segundo numero:\n");
    scanf("%d",&number2);
    setbuf(stdin,NULL);
    printf("Ingrese el tercer numero:\n");
    scanf("%d",&number3);
    setbuf(stdin,NULL);

    if( number1 < number2 && number2 < number3 )
    {
        printf("El %d pertenece al intervalo (%d;%d)",number2, number1 , number3);

    }
    else
    {
        printf("El intervalo esta mal planteado o %d no pertenece al mismo.", number2);
    }
    return 0;
}
