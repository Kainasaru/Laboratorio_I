#include <stdio.h>
#include <stdlib.h>

//17. Hacer el programa que nos permita introducir un número por teclado y nos informe si es par o impar

int main()
{
    int number = 0;
    printf("Ingrese un numero:\n");
    scanf("%d",&number);
    setbuf(stdin,NULL);
    if(number % 2 == 0)
    {
        printf("El %d es par.",number);
    }
    else
    {
        printf("El %d es impar.",number);
    }
    return 0;
}
