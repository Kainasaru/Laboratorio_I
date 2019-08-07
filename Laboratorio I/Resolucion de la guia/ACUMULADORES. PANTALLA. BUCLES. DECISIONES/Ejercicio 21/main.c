#include <stdio.h>
#include <stdlib.h>

/*21. Hacer el programa que nos permita contar los múltiplos de 3 desde la unidad hasta un número que introducimos por teclado*/

int main()
{
    int number;
    int multiplesOf3 = 0;

    printf("Ingrese un numero:\n");
    scanf("%d",&number);
    setbuf(stdin,NULL);

    int i;
    for(i = 3 ;i <= number ; i+=3)
    {
        multiplesOf3++;
    }
    printf("Hay %d multiplos de tres desde 1 a %d.",multiplesOf3, number);
    return 0;
}
