#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*24. Diseñar en un programa que permita registrar de los empleados de una fábrica (no se sabe cuántos) su peso y
saber cuántos pesan hasta 80 kg. inclusive y cuantos pesan más de 80 kg.*/

int main()
{
    float weight  = 0;
    int moreThan80  = 0;
    int upTo80 = 0;
    char proceed = 'y';
    int i = 0;

    while(proceed == 'y')
    {
        i++;
        do
        {
            printf("Ingrese peso del empleado %d:\n",i);
            scanf("%f",&weight);
            setbuf(stdin,NULL);
            if(weight < 1)
            {
                printf("ERROR - El peso debe ser mayor que cero. REINGRESAR.\n");
                system("pause");
            }
            system("cls");

        }
        while(weight < 1);

        if(weight > 80)
        {
            moreThan80++;
        }
        else
        {
            upTo80++;
        }

        printf("Desea ingresar mas empleados? ( y/n ):\n");
        proceed = getch();
        system("cls");
    }
    printf("Hay %d empleados que pesan 80 kg o menos.\n", upTo80);
    printf("Hay %d empleados que pesan mas de 80 kg.\n", moreThan80);
    return 0;
}
