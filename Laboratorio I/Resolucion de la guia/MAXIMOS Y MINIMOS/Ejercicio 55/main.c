#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*55. Un profesor de matemática de un establecimiento educativo registra de cada alumno N° de legajo y promedio.
Según el promedio desea saber cuántos alumnos aprobaron (promedio mayor o igual a 7),
 cuantos rinden en diciembre (promedio menor a 7 y mayor o igual a 4) y
  cuantos rinden examen en marzo (promedio menor a 4). Además desea conocer el N° de legajo del alumno con mejor promedio*/

int main()
{
    int approvedPupils = 0;
    int decemberPupils = 0;
    int marchPupils = 0;
    float bestAverage = 0;
    int bestAverageFileId = 0;
    float average = 0;
    int fileId = 0;

    char proceed = 'Y';
    short flag = 1;

    while( proceed == 'Y')
    {
        do
        {
            printf("Ingrese legajo del alumno:\n");
            scanf("%d",&fileId);
            setbuf(stdin,NULL);
            system("cls");
        }
        while( fileId < 1);
        do
        {
            printf("Ingrese promedio del alumno LEGAJO NRO %d:\n",fileId);
            scanf("%f",&average);
            setbuf(stdin,NULL);
            system("cls");
        }
        while( average < 1 || average > 10);

        if(flag || average > bestAverage)
        {
            bestAverage = average;
            bestAverageFileId = fileId;
            flag = 0;
        }
        if(average >= 7)
        {
            approvedPupils++;
        }
        else if( average >= 4)
        {
            decemberPupils++;
        }
        else
        {
            marchPupils++;
        }

        printf("Ingresar otro alumno?(Y/N):\n");
        proceed = getch();
        system("cls");
    }
    printf("El mejor promedio obtuvo un %.2f y tiene legajo Nro %d.\n",bestAverage,bestAverageFileId);
    printf("Han aprobado %d alumnos (Nota mayor o igual a 7).\n",approvedPupils);
    printf("Hay %d alumnos que van a diciembre (Nota menor a 7 y mayor o igual a 4).\n",decemberPupils);
    printf("Hay %d alumnos que van a marzo (Nota menor a 4).\n",marchPupils);
    return 0;
}
