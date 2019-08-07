#include <stdio.h>
#include <stdlib.h>

/*54. Escribir un programa que determine si un año es bisiesto. Un año es bisiesto
si es múltiplo de 4. Los años múltiplos de 100 no son bisiestos, salvo si ellos también son múltiplos
de 400 (2000 es bisiesto pero 1900 no)*/

int main()
{
    int year = 0;
    do
    {
        printf("Ingrese un ano para verificar si es bisiesto:\n");
        scanf("%d",&year);
        setbuf(stdin,NULL);
        system("cls");
    }
    while(year < 0);
    if( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
    {
        printf("El ano %d es bisiesto.",year);
    }
    else
    {
        printf("El ano %d NO es bisiesto.",year);

    }
    return 0;
}
