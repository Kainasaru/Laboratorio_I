#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*34. Introducir una letra por teclado.
Imprimirla cinco veces en filas consecutivas, pero en cada impresión ir desplazándola 4 columnas a la derecha*/

int main()
{
    char letter = '\0';
    printf("Ingrese una letra:\n");
    letter = getch();
    int i;
    for(i = 0 ; i < 5 ; i++)
    {
        int j = (5 - i); //Imprimo 4 espacios, primero 0 veces, luego 1 ... hasta 5 veces.
        while( j < 5)
        {
            printf("    ");
            j++;
        }
        printf("%c\n",letter);
    }
    return 0;
}
