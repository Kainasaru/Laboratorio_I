#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include "input.h"
#include "numericstring.h"

/*2- Realizar un programa que lea n�meros enteros hasta que se indique por medio del mensaje �Continua S/N?
que finaliza el ingreso de datos. Obtener la suma de los n�meros ingresados.
Por medio de una funci�n se debe validar el ingreso de opciones, el prototipo de funci�n ser� el siguiente
A la funci�n no le ingresan valores, se lee desde el teclado el car�cter y si es uno de los correctos retorna un valor que ser�
Verdadero si ingres� la letra S
Falso si ingres� la letra N
Caso contrario se pide el reingreso del dato hasta que el mismo sea v�lido.*/

int isContinue(void);

int main()
{
    int sum = 0;
    int number = 0;
    do
    {
        getInt("Ingrese un numero:\n","ERROR!\n",INT_MIN,INT_MAX,-1,&number);
        sum += number;
    }
    while( isContinue());
    printf("La suma de sus numeros es %d.\n",sum);
    return 0;
}

int isContinue(void)
{
    int ret = 0;
    char answer = 0;
    do
    {
        system("cls");
        puts("Continuar? (S/N):");
        answer = getch();
        system("cls");
        if(answer == 'S')
        {
            ret = 1;
        }
    }
    while( answer != 'S' && answer != 'N' );
    return ret;
}
