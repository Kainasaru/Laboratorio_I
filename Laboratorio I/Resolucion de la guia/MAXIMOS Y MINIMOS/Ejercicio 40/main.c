#include <stdio.h>
#include <stdlib.h>

/*40. Se ingresa por consola la cantidad de agua caída, en milímetros día a día durante un mes.
 Se pide determinar el día de mayor lluvia, el de menor y el promedio*/

int main()
{
    float rainWater  = 0;
    float accumulator = 0;

    float maxValue = 0;
    float minValue = 0;

    int maxDayNumber = 0;
    int minDayNumber = 0;

    int i;
    for(i = 0 ; i < 30 ; i++)
    {
        do
        {
            printf("Ingrese cantidad de lluvia caida en mm del dia %d del mes:\n",i+1);
            scanf("%f",&rainWater);
            setbuf(stdin,NULL);
            system("cls");
        }
        while(rainWater < 0);

        accumulator += rainWater;
        if(i == 0 || rainWater > maxValue)
        {
            maxValue = rainWater;
            maxDayNumber = i+1;
        }
        if(i == 0 || rainWater < minValue)
        {
            minValue = rainWater;
            minDayNumber = i+1;
        }
    }
    printf("El promedio de lluvia caida fue %.2f.\n",accumulator / 30.0);
    printf("El dia de mayor lluvia fue el dia %d del mes.\n",maxDayNumber);
    printf("El dia de mayor lluvia cayeron %.2f mm de lluvia.\n",maxValue);
    printf("El dia de menor lluvia fue el dia %d del mes.\n",minDayNumber);
    printf("El dia de menor lluvia cayeron %.2f mm de lluvia.\n",minValue);
    return 0;
}
