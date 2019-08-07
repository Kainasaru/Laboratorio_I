#include <stdio.h>
#include <stdlib.h>

/*57. Realizar un programa que convierta el tiempo de una carrera en tiempo para correr un kil�metro y en promedio de velocidad en
 kil�metros por hora. Se deber� ingresar: la distancia recorrida en kil�metros y el tiempo en minutos y segundos.
 Se mostrar� por pantalla un texto como el siguiente: "Ha recorrido 10 Km, en 36 min. 23 seg.
 Su velocidad promedio fue de 16.49 km/h."*/

int main()
{
    float distance = 0;
    int minutes = 0;
    int seconds = 0;
    float averageSpeed = 0;

    printf("Ingrese distancia recorrida en km:\n");
    scanf("%f",&distance);
    setbuf(stdin,NULL);

    printf("Ingrese minutos tardados:\n");
    scanf("%d",&minutes);
    setbuf(stdin,NULL);

    printf("Ingrese segundos tardados:\n");
    scanf("%d",&seconds);
    setbuf(stdin,NULL);
    system("cls");

    averageSpeed = (minutes + seconds / 60.0) / 60.0 ; //Convierto las magnitudes de tiempo a horas.
    averageSpeed = 1.0 / averageSpeed; // Obtengo porcentage que representa una hora por sobre el tiempo tardado.
    averageSpeed *= distance; //Multiplico la distancia por dicho porcentaje para obtener la distancia recorrida en una hora.

    printf("Ha recorrido %.2f Km, en %d min. y %d seg.\n",distance,minutes,seconds);
    printf("Su velocidad promedio %.2f km/h.\n",averageSpeed);
    return 0;
}
