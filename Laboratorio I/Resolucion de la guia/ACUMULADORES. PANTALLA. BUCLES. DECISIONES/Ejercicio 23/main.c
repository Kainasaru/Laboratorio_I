#include <stdio.h>
#include <stdlib.h>

//23. De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor

int main()
{
    float number = 0;
    float max = 0;
    int i;
    for ( i = 0 ; i < 3 ; i++ )
    {
        printf("Ingrese un numero:\n");
        scanf("%f",&number);
        setbuf(stdin,NULL);
        if(number > max || i == 0)
        {
            max = number;
        }
    }
    printf("El numero maximo fue %.2f.", max);
    return 0;
}
