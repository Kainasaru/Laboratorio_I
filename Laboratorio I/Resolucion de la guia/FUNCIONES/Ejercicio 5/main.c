#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5- Realizar un programa para mostrar en pantalla un menú de opciones como el siguiente:
1- Ingreso de datos.
2- Mostrar
3- Salir
El menú debe ser hecho con una función.
Cuando se elija la opción (dentro de main) se debería llamar a la función que realice la tarea correspondiente.
1- Se carga un vector de 30 enteros.
2- Se muestra el vector.
3- Salir del programa.
*/
int charRepeater(char character, int times);
int displayOptMenu(char* title, char* text);

int main()
{
    displayOptMenu("Menu de trivago","Opcion A\nOpcion B\nOpcion C\nOpcion D");
    return 0;
}

int charRepeater(char character, int times)
{
    int ret = (times > 0)? 1 : 0;
    int i ;
    for(i = 0 ; i < times ; i++)
    {
        printf("%c",character);
    }
    return ret;
}

int displayOptMenu(char* title, char* text)
{
    int optNumber = 0;
    int i = 0;
    if(text != NULL && title != NULL )
    {
        charRepeater('-',80); //Decoracion
        if( title[0] != '\0' && strlen(title) <= 75)
        {
            printf("* %s *\n",title); //Titulo del menu
            charRepeater('-',80); //Decoracion
        }
        while(i < strlen(text) )
        {
            if( i == 0 )
            {
                printf("<%d> ",optNumber+1);
                optNumber++;
            }
            if( text[i] == '\n' && text[i+1] != '\0' )
            {
                optNumber++;
                printf("\n<%d> ",optNumber); //Coloco el salto de linea.
                i++;
            }
            printf("%c",text[i]);
            i++;
        }
        if( text[i-1] != '\n')
        {
            printf("\n");
        }
        charRepeater('-',80);
    }
    return i;
}
