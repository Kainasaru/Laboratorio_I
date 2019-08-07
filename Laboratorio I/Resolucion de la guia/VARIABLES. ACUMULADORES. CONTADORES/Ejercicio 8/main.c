#include <stdio.h>
#include <stdlib.h>

//Diseñar un programa que calcule la superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado.
int main()
{
    float base = 0;
    float height = 0;
    float surface = 0;

    printf("Ingrese base del triangulo:\n");
    scanf("%f",&base);
    setbuf(stdin, NULL);
    printf("Ingrese altura del triangulo:\n");
    scanf("%f",&height);
    setbuf(stdin,NULL);
    surface = base * height / 2;
    printf("La superficie del triangulo es %.2f",surface);
    return 0;
}
