#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include "numstring.h"

int isSignedSHORT(char* num);
int isSignedINT(char* num);
int isSignedLONG(char* num);
int isSignedFLOAT(char* num);
int isSignedDOUBLE(char* num);
void showbits( unsigned int x );

int main()
{
    float num = 1.00000000000000000000000001;
    int i = INT_MAX;
    printf("%d",i & 1000);
    //showbits(i);
    system("pause");
    /*while(1)
    {
        char vec1[1000];
        int d = 0;
        puts("Ingresar numero:");
        scanf("%d",&d);
        setbuf(stdin,NULL);
        printf("Negado: %d\n",!d);
        system("pause");
        system("cls");
    }*/
    return 0;
}

void showbits( unsigned int x )
{
    for (int i = (sizeof(int) * 8) - 1; i > 30; i--)
    {
        printf("I es %d\n",i);
        printf("X es %d\n",x);
       putchar(x & (1u << i) ? '1' : '0');
    }
    printf("\n");
}
int isSignedSHORT(char* num);
int isSignedINT(char* num);
int isSignedLONG(char* num);
int isSignedFLOAT(char* num);
int isSignedDOUBLE(char* num);

