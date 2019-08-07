#include <stdio.h>
#include <stdlib.h>

/*25. En una tienda de art�culos para caballeros al final del d�a se carga en la computadora las boletas que confeccionaron
los distintos vendedores para saber cu�nto fue la comisi�n del d�a de cada uno de ellos. Los datos que se ingresan (por boleta)
son: el n�mero de vendedor y el importe. Cuando no hay m�s boletas para cargar se ingresa 0. Teniendo en cuenta que el negocio
tiene 3 vendedores y que el porcentaje sobre las ventas es del 5%, indicar cu�nto gan� cada vendedor en el d�a.
*/

int main()
{
    int vendorId = 0;
    float amount = 0;
    float salesCommision = 0;

    while( 1 )
    {
        printf("Ingrese numero de vendedor de la boleta:\n");
        scanf("%d",&vendorId);
        setbuf(stdin,NULL);

        if(vendorId == 0 )
        {
            break;
        }

        while(vendorId < 1 )
        {
            if(vendorId < 1 && vendorId != 0)
            {
                printf("El numero de vendedor ingresado no es correcto. REINGRESE.\n");
                system("pause");
                system("cls");
            }
            printf("Ingrese numero de vendedor de la boleta:\n");
            scanf("%d",&vendorId);
            setbuf(stdin,NULL);
        }

        do
        {
            printf("Ingrese importe de ventas del vendedor de la boleta:\n");
            scanf("%f",&amount);
            setbuf(stdin,NULL);
            if(amount < 0)
            {
                printf("El importe de ventas ingresado no es correcto. REINGRESE.\n");
                system("pause");
                system("cls");
            }
        }
        while( amount < 0 );

        salesCommision = amount * 0.05;
        system("cls");
        printf("-- Vendedor %d --\n\n",vendorId);
        printf(" * Importe de ventas (100%%): $%.2f\n", amount);
        printf(" * Comision obtenida hoy (5%%): $%.2f\n", salesCommision);
        system("pause");
        system("cls");

    }
    return 0;
}
