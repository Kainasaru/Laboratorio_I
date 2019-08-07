#include <stdio.h>
#include <stdlib.h>

/*3. Escribir un programa que realice las siguientes acciones
 Limpie la pantalla
 Asigne a 2 variables numero1 y numero2 valores distintos de cero
 Efectúe el producto de dichas variables
 Muestre el resultado pos pantalla
 Obtenga el cuadrado de numero1 y lo muestre par pantalla
*/
int main()
{
    int numero1;
    int numero2;
    int multiplicacion;
    int cuadrado;

    printf("Este mensaje esta ensuciando la pantalla!\n");
    system("pause");
    system("cls");

    numero1 = 5;
    numero2 = 10;

    multiplicacion = numero1 * numero2;
    printf("El resultado de la multiplicacion es: %d\n", multiplicacion);
    cuadrado = numero1 * numero1;
    printf("El cuadrado del numero 1 (El numero 1 es %d) es: %d\n", numero1,cuadrado);
    return 0;
}
