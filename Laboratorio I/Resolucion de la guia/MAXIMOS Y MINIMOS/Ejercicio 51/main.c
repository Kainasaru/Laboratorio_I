#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//51. �dem al anterior agregando en el informe final el costo de la empresa en salarios y el salario promedio

int main()
{
    float hourlyWage = 0;
    float weeklyWage = 0;
    int workHours = 0;
    int empCounter = 0;
    int fileId = 0;
    char proceed = 'Y';
    short flag  = 1;

    float wageAccumulator = 0;

    float maxWage = 0;
    int maxWageFile = 0;

    float minWage = 0;
    int minWageFile = 0;

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

        if(flag == 1 || weeklyWage > maxWage )
        {
            maxWage = weeklyWage;
            maxWageFile = fileId;
        }
        if(flag == 1 || weeklyWage < minWage )
        {
            minWage = weeklyWage;
            minWageFile = fileId;
            flag = 0;
        }
        wageAccumulator += weeklyWage;
        empCounter++;
    }
    printf("El costo de los salarios semanales de la empresa es $%.2f\n",wageAccumulator);
    printf("El costo de los salarios (mensualizado) de la empresa es $%.2f\n",wageAccumulator*4.0);
    printf("Se le calculo el salario a %d empleados.\n",empCounter);
    printf("El salario promedio de los empleados (semanal) es $%.2f.\n",wageAccumulator / empCounter);
    printf("El empleado con el mayor salario semanal es el NRO %d.\n",maxWageFile);
    printf("Su salario es %.2f.\n",maxWage);
    printf("El empleado con el menor salario semanal es el NRO %d.\n",minWageFile);
    printf("Su salario es %.2f.\n",minWage);
    return 0;
}