#include <stdio.h>
#include <stdlib.h>

/*56. Dise�ar el programa que le presente al usuario un men� de opciones con las cuatro operaciones b�sicas
(suma, resta, multiplicaci�n, divisi�n). Seg�n la operaci�n elegida ingresar� 2 n�meros enteros, se realizar� la misma y se
mostrar� por pantalla el resultado. El usuario podr� trabajar en el programa hasta que indique. lo contrario. Recordar
que la divisi�n por cera es indeterminada*/

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
