#include <stdio.h>
#include <stdlib.h>

/*19. Ingresar un número entero por consola y efectuar la suma
 de todos los números que le anteceden, comenzando desde 0 y mostrar el resultado por pantalla*/

int main()
{
    int number = 0;
    int sum = 0;
    int i;
    printf("Ingrese un numero entero:\n");
    scanf("%d",&number);
    setbuf(stdin,NULL);
    //sum = ( (number -1) * number ) / 2; //Con formula de sumatoria :
    for(i = 0 ; i < number ; i++ )
    {
        sum += i;
    }
    printf("La sumatoria da: %d",sum);
    return 0;
}
