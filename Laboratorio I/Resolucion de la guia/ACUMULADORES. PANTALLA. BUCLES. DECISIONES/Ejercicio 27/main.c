#include <stdio.h>
#include <stdlib.h>

/*27. Ingresar por teclado 3 números correspondientes a los lados de un triángulo. Teniendo en cuenta
que la suma de los dos lados menores tiene que ser superior al lado mayor
 para que formen un triángulo, indicar si los números indicados forman un triángulo y si lo forman que tipo de triángulo es*/

int main()
{
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    do
    {
        printf("Ingrese el lado mayor de su triangulo:\n");
        scanf("%d",&side1);
        setbuf(stdin,NULL);
        system("cls");
    }
    while( side1 < 1);

    do
    {
        printf("Ingrese el lado menor 1 de su triangulo:\n");
        scanf("%d",&side2);
        setbuf(stdin,NULL);
        system("cls");
    }
    while( side2 < 1);

    do
    {
        printf("Ingrese el lado menor 2 de su triangulo:\n");
        scanf("%d",&side3);
        setbuf(stdin,NULL);
        system("cls");
    }
    while( side3 < 1);


    if( side2 + side3 > side1 )
    {
        printf("Los numeros que ingreso forman un triangulo!\n");
        if( side1 == side2 && side2 == side3 )
        {
            printf("Su triangulo es equilatero.\n");
        }
        else if( side1 != side2 && side1 != side3 && side2 != side3)
        {
            printf("Su triangulo es escaleno.\n");
        }
        else
        {
            printf("Su triangulo es isosceles.\n");
        }
    }
    else
    {
        printf("Los numeros que ingreso no forman un triangulo!");
    }

    return 0;
}
