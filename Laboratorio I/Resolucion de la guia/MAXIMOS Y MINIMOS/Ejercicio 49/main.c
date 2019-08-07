#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*49. ídem al anterior pera informando al finalizar (el ingreso de datos y los cálculos correspondientes) la cantidad
de empleados 3 los que se les calculó el Salario*/

int main()
{
    float hourlyWage = 0;
    float weeklyWage = 0;
    int workHours = 0;
    int empCounter = 0;
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
        empCounter++;
    }
    printf("Se le calculo el salario a %d empleados.",empCounter);
    return 0;
}
