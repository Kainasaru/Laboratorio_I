#include <stdio.h>
#include <stdlib.h>
#include "numstring.h"

int main()
{
    while(1)
    {
        char vec1[1000];
        int d = 0;
        puts("Ingresar numero:");
        scanf("%d",&d);
        setbuf(stdin,NULL);
        printf("Negado: %d\n",!d);
        system("pause");
        system("cls");




    }
    return 0;
}
