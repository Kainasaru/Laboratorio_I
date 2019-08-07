#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
26. Hacer el programa ante la pregunta desea continuar sólo nos permita introducir como respuesta 'S' o'N'
*/

int main()
{
    char answer = 'N';
    do
    {
        printf("Continuar? (S/N)\n");
        answer = getche();
        printf("\n");
        if( answer != 'S' && answer != 'N' )
        {
            printf("Por favor ingrese S o N .\n");
        }
        system("pause");
        system("cls");
    }
    while( answer == 'S' || (answer != 'S' && answer != 'N') );
    printf("Salio del programa!\n");
    return 0;
}
