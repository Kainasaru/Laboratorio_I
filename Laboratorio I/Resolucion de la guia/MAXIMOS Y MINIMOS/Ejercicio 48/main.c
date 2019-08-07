#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*48. Escribir un programa que calcule el salario semanal de cada trabajador de una empresa dada la tarifa horaria y
el número de horas trabajadas además del nombre (número de legajo para codificar en C).
Se debe permitir al usuario indicar cuando desea dejar de ingresar datos */

int main()
{
    float hourlyWage = 0;
    float weeklyWage = 0;
    int workHours = 0;
    int fileId = 0;
    char proceed = 'Y';

    while( proceed == 'Y')
    {
        do
        {
            printf("Ingrese legajo del trabajador:\n");
            scanf("%d",&fileId);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(fileId < 1);
        do
        {
            printf("Ingrese tarifa horaria del trabajador:\n");
            scanf("%f",&hourlyWage);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(hourlyWage < 0);
        do
        {
            printf("Ingrese cantidad de horas trabajadas en una semana:\n");
            scanf("%d",&workHours);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(workHours < 0);

        weeklyWage = workHours * hourlyWage;
        printf("Trabajador Nro: %d\n",fileId);
        printf("Horas trabajadas en una semana: %d\n",workHours);
        printf("Salario hora: $%.2f\n",hourlyWage);
        printf("Salario semanal: $%.2f\n",weeklyWage);
        system("pause");
        system("cls");
        printf("Desea cargar otro trabajador?(Y/N):\n");
        proceed = getche();
        printf("\n");
        system("cls");
    }
    return 0;
}
