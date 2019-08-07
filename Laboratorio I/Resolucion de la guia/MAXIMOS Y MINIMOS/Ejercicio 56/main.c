#include <stdio.h>
#include <stdlib.h>

/*56. Diseñar el programa que le presente al usuario un menú de opciones con las cuatro operaciones básicas
(suma, resta, multiplicación, división). Según la operación elegida ingresará 2 números enteros, se realizará la misma y se
mostrará por pantalla el resultado. El usuario podrá trabajar en el programa hasta que indique. lo contrario. Recordar
que la división por cera es indeterminada*/

int main()
{
    int option = 0;
    int number1 = 0;
    int number2 = 0;
    int result = 0;

    do
    {
        //Impresion de menu y solicitud de opcion
        printf("MENU DE OPERACIONES:\n\n");
        printf("* 1-Suma.\n* 2-Resta.\n* 3-Multiplicacion.\n* 4-Division.\n* 5-Salir.\n");
        printf("\nSELECCIONAR OPCION:\n");
        scanf("%d",&option);
        setbuf(stdin,NULL);
        system("cls");

        //Carga de numeros a operar solo si la opcion de menu elegida  es correcta y no es salir.
        if(option > 0 && option < 5)
        {
            printf("Ingrese el primer numero:\n");
            scanf("%d",&number1);
            setbuf(stdin,NULL);
            printf("Ingrese el segundo numero:\n");
            scanf("%d",&number2);
            setbuf(stdin,NULL);
        }
        //Redireccionamiento del flujo segun opcion de menu seleccionada
        switch(option)
        {
        case 1:
            result = number1 + number2;
            printf("Resultado: %d\n",result);
            break;
        case 2:
            result = number1 - number2;
            printf("Resultado: %d\n",result);
            break;
        case 3:
            result = number1 * number2;
            printf("Resultado: %d\n",result);
            break;
        case 4:
            if(number2 != 0)
            {
                result = number1 / number2;
                printf("Resultado: %d\n",result);
            }
            else
            {
                printf("Resultado: INDETERMINADO.\n");
            }
            break;
        case 5:
            printf("Programa finalizado.\n");
            break;
        default:
            printf("Ingreso una opcion incorrecta.\n");
            break;
        }
        system("pause");
        system("cls");
    }
    while(option != 5);
    return 0;
}
