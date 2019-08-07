#include <stdio.h>
#include <stdlib.h>

/*20. Hacer el programa que imprima todos los números naturales que hay desde
la unidad hasta un número que introducimos por teclado */


int main()
{
    int number = 0;
    int i;
    printf("Ingrese un numero:\n");
    scanf("%d",&number);
    setbuf(stdin,NULL);
    printf("Numeros naturales desde 1 a %d.\n",number);
    for(i = 1 ; i < number + 1 ; i++ )
    {
        printf("%d\n",i);
    }
    return 0;
}
