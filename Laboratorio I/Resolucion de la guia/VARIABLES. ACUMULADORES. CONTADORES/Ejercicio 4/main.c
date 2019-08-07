#include <stdio.h>
#include <stdlib.h>

/*4. Escribir un programa que realice las siguientes acciones:
 Limpie la pantalla
 Declare 2 variables y les asigne sendos valores
 Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor que cero
 o "Resultado negativo" si es menor que cero
*/
int main()
{
    int var1 = 3;
    int var2 = 24;
    int resta = var1 - var2;

    printf("Este mensaje ensucia la pantalla!\n");
    system("pause");
    system("cls");

    if(resta > 0)
    {
        printf("Resultado positivo.");
    }
    else if(resta < 0)
    {
        printf("Resultado negativo.");
    }

    return 0;;

}
