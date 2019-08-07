#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Escribir un programa que realice lea por teclado 20 caracteres. Luego de la lectura indicar cuantas "a" se ingresaron,
 cuantas "e, i, o, u"*/
int main()
{
    char character = '\0';
    int aCounter = 0;
    int eCounter = 0;
    int iCounter = 0;
    int oCounter = 0;
    int uCounter = 0;
    int i;
    for(i = 0 ; i < 20 ; i++)
    {
        printf("Ingrese un caracter (%d):\n",i+1);
        character = getche();
        printf("\n");
        if( character == 'a')
        {
            aCounter++;
        }
        else if( character == 'e')
        {
            eCounter++;
        }
        else if( character == 'i')
        {
            iCounter++;
        }
        else if( character == 'o')
        {
            oCounter++;
        }
        else if( character == 'u')
        {
            uCounter++;
        }
    }
    printf("Se ingresaron %d letras a.\n",aCounter);
    printf("Se ingresaron %d letras e.\n",eCounter);
    printf("Se ingresaron %d letras i.\n",iCounter);
    printf("Se ingresaron %d letras o.\n",oCounter);
    printf("Se ingresaron %d letras u.\n",uCounter);
    return 0;
}
