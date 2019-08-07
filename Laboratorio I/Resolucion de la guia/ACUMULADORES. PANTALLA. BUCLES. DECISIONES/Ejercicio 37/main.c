#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//37. Hacer un programa que simule el funcionamiento de un reloj digital y que permita ponerlo en hora

int main()
{
    short option = 0;
    int hour = 0;
    int minute = 0;
    int second = 0;

    while(option != 4)
    {
        printf("-----------------\n");
        printf("|  HORA: %d:%d:%d  |\n",hour,minute,second);
        printf("-----------------\n");
        printf("* 1-Cambiar horas.\n");
        printf("* 2-Cambiar minutos.\n");
        printf("* 3-Cambiar segundos.\n");
        printf("* 4-Apagar.\n\n");
        printf("SELECCIONAR OPCION:\n");
        scanf("%hi",&option);
        system("cls"); //Borro el menu y hago aparecer la opcion elegida
        switch(option)
        {
        case 1:
            do
            {
                printf("Ingrese valor de la hora (0 a 23):\n");
                scanf("%d",&hour);
                setbuf(stdin,NULL);
                system("cls");
            }
            while(hour > 23 || hour < 0);
            break;
        case 2:
            do
            {
                printf("Ingrese valor de los minutos (0 a 59):\n");
                scanf("%d",&minute);
                setbuf(stdin,NULL);

                system("cls");
            }
            while(minute > 59 || minute < 0);
            break;
        case 3:
             do
            {
                printf("Ingrese valor de los segundos (0 a 59):\n");
                scanf("%d",&second);
                setbuf(stdin,NULL);
                system("cls");
            }
            while(second > 59 || second < 0);
            break;
        case 4:
            printf("Reloj apagado!\n");
            break;
        default:
            printf("Ingreso un valor incorrecto.\n");
            system("pause");
            system("cls");
            break;
        }
    }
    return 0;
}
