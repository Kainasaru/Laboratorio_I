#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*38. Se registran de los empleados de una empresa Número de legajo, sueldo y sexo (1 femenino y 2 masculino).
 Diseñar en un programa que permita informar cuantas mujeres ganan más de á 500 y cuantos hombres ganan menos de $ 400*/

int main()
{
    int womenMoreThan500 = 0;
    int menLessThan400 = 0;

    int fileId = 0;
    float salary = 0;
    char gender = 'F';
    char proceed = 'S';

    while(proceed == 'S')
    {
        do
        {
            printf("Ingrese numero de legajo del empleado:\n");
            scanf("%d",&fileId);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(fileId < 1);
        do
        {
            printf("Legajo Nro: %d.\n",fileId);
            printf("Ingrese sueldo:\n");
            scanf("%f",&salary);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(salary < 0);
        do
        {
            printf("Legajo Nro: %d.\n",fileId);
            printf("Ingrese genero (F/M):\n");
            gender = getche();
            printf("\n");
            setbuf(stdin,NULL);
            system("cls");
        }
        while(gender != 'F' && gender != 'M');

        if(gender == 'F' && salary > 500 )
        {
            womenMoreThan500++;
        }
        else if( gender == 'M' && salary < 400 )
        {
            menLessThan400++;
        }
        printf("Ingresar mas empleados? (S/N):\n");
        proceed = getch();
        system("cls");
    }

    printf("Hay %d mujeres que ganan mas de $500.\n",womenMoreThan500);
    printf("Hay %d hombres que ganan menos de $400.\n",menLessThan400);
    return 0;
}
