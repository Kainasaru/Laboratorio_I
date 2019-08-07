#include <stdio.h>
#include <stdlib.h>

//16. Hacer el programa que nos permita introducir un número por teclado y nos informe si es positivo o negativo

int main()
{
    float number = 0;
    printf("Ingrese un numero:\n");
    scanf("%f",&number);
    setbuf(stdin,NULL);
    if(number > 0 )
    {
        printf("El numero es positivo.");
    }
    else if(number < 0)
    {
        printf("El numero es negativo.");
    }
    return 0;
}
