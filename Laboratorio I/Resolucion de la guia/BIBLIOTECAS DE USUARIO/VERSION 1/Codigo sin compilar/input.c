#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "numericstring.h"
#include "input.h"

/* Prototipos de funciones privadas */

static int requestInteger(int* result);
static int requestFloat(float* result);

/* Fin prototipos */

/* Funciones privadas */

/** \brief Solicita un numero y verifica si es entero.
 *
 * \param result: Puntero a entero a cargar en caso de ser un entero el numero ingresado.
 * \return Devuelve [1] si el numero ingresado es entero o [0] en caso contrario.
 *
 */

static int requestInteger(int* result)
{
    char buffer[12] = "";
    int ret = 0;

    fgets(buffer,sizeof(buffer),stdin);
    buffer[strlen(buffer)-1] = (buffer[strlen(buffer) - 1] == '\n')? '\0' : buffer[strlen(buffer)-1];
    fflush(stdin);
    if( isSignedINT(buffer))
    {
        *result = atoi(buffer);
        ret = 1;
    }
    return ret;
}

/** \brief Solicita un numero y verifica si es un float entre -16777215 y  16777215 (Margen de error menor).
 *
 * \param result: Puntero a flotante a cargar en caso de ser un flotante valido el numero ingresado.
 * \return Devuelve [1] si el numero ingresado es un flotante valido o [0] en caso contrario.
 *
 */

static int requestFloat(float* result)
{
    char buffer[17] = "";
    int ret = 0;
    fgets(buffer,sizeof(buffer),stdin);
    buffer[strlen(buffer)-1] = (buffer[strlen(buffer) - 1] == '\n')? '\0' : buffer[strlen(buffer)-1];
    fflush(stdin);
    if( isFLOAT(buffer))
    {
        *result = atof(buffer);
        ret = 1;
    }
    return ret;
}

/* Fin funciones privadas */

/** \brief Solicita al usuario un numero entero.
 *
 * \param message: Mensaje a ser mostrado.
 * \param eMessage: Mensaje de error en caso de ingresarse un numero invalido.
 * \param min: Valor minimo del entero a solicitar.
 * \param max: Valor maximo del entero a solicitar.
 * \param Retries: Cantidad de intentos en caso de error. Setear en -1 para infinito.
 * \param input: Puntero a entero donde cargar el numero en caso de ser valido.
 * \return Devuelve [1] si el numero cargado es valido o [0] en caso contrario.
 *
 */

int getInt(char* message, char* eMessage, int min, int max, int retries,int* input  )
{
    int ret = 0;
    int infinite = 0;
    if( message != NULL && eMessage != NULL && input != NULL )
    {
        infinite = (retries == -1)? 1 : 0; //Si el usuario eligio iteraciones infinitas asigno un 1 a infinite.
        while( retries > 0  || infinite )
        {
            retries--;
            printf(message);
            if( requestInteger(input) && *input >= min && *input <= max )
            {
                ret = 1;
                break;
            }
            printf(eMessage);
            system("pause");
            system("cls");
        }
    }
    return ret;
}

/** \brief Solicita al usuario una cadena de caracteres.
 *
 * \param message: Mensaje a ser mostrado.
 * \param eMessage: Mensaje de error en caso de ingresarse una cadena de longitud invalida.
 * \param min: Valor minimo de la longitud de la cadena.
 * \param max: Valor maximo de la longitud de la cadena.
 * \param Retries: Retries: Cantidad de intentos en caso de error. Setear en -1 para infinito.
 * \param input: Puntero a caracter donde cargar la cadena en caso de ser valida.
 * \return Devuelve [1] si la cadena ingresada es valida o [0] en caso contrario.
 *
 */

int getString(char* message, char* eMessage, unsigned short min, unsigned short max, int retries,char* input )
{
    int infinite = 0;
    int ret = 0;
    char str[65535] = "";
    if( input != NULL && message != NULL && eMessage != NULL )
    {
        infinite = (retries == -1)? 1 : 0; //Si el usuario eligio iteraciones infinitas asigno un 1 a infinite.
        while( retries > 0 || infinite )
        {
            retries--;
            printf(message);
            fgets(str,sizeof(str),stdin);
            str[strlen(str)-1] = (str[strlen(str) - 1] == '\n')? '\0' : str[strlen(str)-1];
            fflush(stdin);
            if( strlen(str) >=  min && strlen(str) <= max )
            {
                strcpy(input,str);
                ret = 1;
                break;
            }
            printf(eMessage);
            system("pause");
            system("cls");
        }
    }
    return ret;
}

/** \brief Solicita al usuario un numero flotante.
 *
 * \param message: Mensaje a ser mostrado.
 * \param eMessage: Mensaje de error en caso de ingresarse un flotante invalido.
 * \param min: Valor minimo del flotante a solicitar.
 * \param max: Valor maximo del flotante a solicitar.
 * \param Retries: Retries: Cantidad de intentos en caso de error. Setear en -1 para infinito.
 * \param input: Puntero a flotante donde cargar el numero en caso de ser valido.
 * \return Devuelve [1] si el numero ingresado es valido o [0] en caso contrario.
 *
 */

int getFloat(char* message, char* eMessage, float min, float max, int retries,float* input  )
{
    int infinite = 0;
    int ret = 0;
    if( message != NULL && eMessage != NULL && input != NULL )
    {
        infinite = (retries == -1)? 1 : 0; //Si el usuario eligio iteraciones infinitas asigno un 1 a infinite.
        while( retries > 0 || infinite )
        {
            retries--;
            printf(message);
            if( requestFloat(input) && *input >= min && *input <= max )
            {
                ret = 1;
                break;
            }
            printf(eMessage);
            system("pause");
            system("cls");
        }
    }
    return ret;
}

/** \brief Solicita al usuario un caracter.
 *
 * \param message: Mensaje a ser mostrado.
 * \param eMessage: Mensaje de error en caso de ingresarse un caracter invalido.
 * \param min: Valor minimo del caracter a solicitar.
 * \param max: Valor maximo del caracter a solicitar.
 * \param Retries: Retries: Cantidad de intentos en caso de error. Setear en -1 para infinito.
 * \param input: Puntero a caracter donde cargar el caratcer en caso de ser valido.
 * \return Devuelve [1] si el caracter ingresado es valido o [0] en caso contrario.
 *
 */

int getChar(char* message, char* eMessage, char min, char max, int retries,char* input )
{
    int infinite = 0;
    int ret = 0;
    char character = 0;
    if( input != NULL && message != NULL && eMessage != NULL )
    {
        infinite = (retries == -1)? 1 : 0; //Si el usuario eligio iteraciones infinitas asigno un 1 a infinite.
        while( retries > 0 || infinite )
        {
            retries--;
            printf(message);
            character = getche();
            printf("\n");
            if( character >=  min && character  <= max )
            {
                *input = character;
                ret = 1;
                break;
            }
            printf(eMessage);
            system("pause");
            system("cls");
        }
    }
    return ret;
}
