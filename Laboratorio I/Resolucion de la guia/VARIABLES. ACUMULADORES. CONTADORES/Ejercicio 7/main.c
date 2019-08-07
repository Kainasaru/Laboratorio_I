#include <stdio.h>
#include <stdlib.h>

//Diseñar un programa que calcule la longitud de la circunferencia y el área del círculo de radio dado.

int main()
{
    float radius = 0;
    float area = 0;
    float circumference = 0;

    printf("Ingrese el radio del circulo:\n");
    scanf("%f",&radius);
    setbuf(stdin,NULL);
    area = 3.14 * radius * radius ;
    circumference = 2 * 3.14 * radius;
    printf("El area del circulo es %.2f y la longitud de la circunferencia %.2f", area , circumference ) ;
    return 0;
}
