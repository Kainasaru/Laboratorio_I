#include <stdio.h>
#include <stdlib.h>

/*33. En un restaurante hay 2 mozos; al final del día su dueño entrega un plus al mozo que más
clientes haya atendido, ese plus es de 1/3 de lo que facturó cada mozo. El proceso termina cuando se
 ingresa un número de mozo 0*/

int main()
{
    int waiterNumber = 0;
    float amount = 0;
    short flag = 1;

    float maxAmount = 0;
    int maxWaiterNumber = 0;

    while(1)
    {
        do
        {
            printf("Ingrese numero de mozo:\n");
            scanf("%d",&waiterNumber);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(waiterNumber < 1 && waiterNumber != 0 );

        if(waiterNumber == 0)
        {
            break;
        }

        do
        {
            printf("Ingrese monto facturado:\n");
            scanf("%f",&amount);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(amount < 0 );

        if( amount > maxAmount || flag == 1)
        {
            maxAmount = amount;
            maxWaiterNumber = waiterNumber;
            flag = 0;
        }

    }
    system("cls");
    printf("El mozo que mas clientes atendio fue el Nro %d.\n",maxWaiterNumber);
    printf("El mozo %d facturo $%.2f.\n",maxWaiterNumber,maxAmount);
    printf("El mozo %d se lleva un plus de $%.2f.\n",maxWaiterNumber,maxAmount / 3);

    return 0;
}
