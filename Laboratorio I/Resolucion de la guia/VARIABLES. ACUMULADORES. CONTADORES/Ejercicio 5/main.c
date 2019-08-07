#include <stdio.h>
#include <stdlib.h>
/*5. Escribir el programa necesario para calcular y mostrar el cuadrado de un número.
El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"
*/
int main()
{
    float number = 0;
    float square = 0;
    do
    {
        printf("Ingrese un numero:\n");
        scanf("%f",&number);
        setbuf(stdin, NULL);
        if(number <= 0)
        {
            printf("ERROR, el numero debe ser mayor que cero.\n");
        }
    }
    while(number <= 0);

    square = number * number;
    printf("El cuadrado de %.2f es %.2f .\n", number , square);
    return 0;
}
