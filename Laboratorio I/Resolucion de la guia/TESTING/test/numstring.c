#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "numstring.h"
/* Prototipos de funciones privadas */

static int strLenCmp(char* str1, char* str2);
static int chrCmp(char chr1, char chr2 );

/* FIN PROTIPOS */

/* ---------------------------- */

/* FUNCIONES PRIVADAS */

/** \brief Compara dos cadenas y determina cual es mayor, menor o igual segun su longitud.
 *
 * \param str1: Primera cadena a comparar.
 * \param str2: Segunda cadena a comparar.
 * \return Retorna 1 si la primera cadena es mas larga, 0 si son iguales o -1 si la primera cadena es mas corta.
 *
 */

static int strLenCmp(char* str1, char* str2)
{
    int ret = 0;
    if( str1 != NULL && str2 != NULL )
    {
        if( strlen(str1) > strlen(str2))
        {
            ret = 1;
        }
        else if( strlen(str1) < strlen(str2))
        {
            ret = -1;
        }
    }
    return ret;
}

/** \brief Compara dos caracteres y devuelve un valor segun posicion ASCII.
 *
 * \param chr1: Primer caracter a comparar.
 * \param chr2: Segundo caracter a comparar.
 * \return Devuelve 1 si el primer caracter es mayor , 0 si son iguales y -1 si el primer caracter es menor.
 *
 */

static int chrCmp(char chr1, char chr2 )
{
    int ret = 0;
    if(chr1 > chr2 )
    {
        ret = 1;
    }
    else if( chr1 < chr2 )
    {
        ret = -1;
    }
    return ret;
}

/* FIN FUNCIONES PRIVADAS */

/* ---------------------------- */

/* FUNCIONES PUBLICAS */


/** \brief Verifica si una cadena es numerica.
 *
 * \param num: Cadena a verificar.
 * \return  Retorna 1 si la cadena es numerica sino 0.
 *
 */

int isNumericStr(char* num )
{
    int ret = 0;
    int minimumPointIndex = 1; //Indice minimo de punto decimal en caso de numero sin signo.
    int signedNum = 0;
    int pointFlag = 1; //Para evitar leer correctamente cadenas con varios puntos decimales.

    if( num != NULL)
    {
        if( num[0] == '+' || num[0] == '-' )
        {
            signedNum = 1;
            minimumPointIndex = 2; //Si el numero tiene un signo , entonces el punto decimal debe estar en el indice 2 o mayor.
        }

        int i = 0;
        while( i < strlen(num) )
        {
            if( pointFlag == 1 && num[i] == '.' && i >= minimumPointIndex && num[i+1] != '\0')
            {
                pointFlag = 0;
            }
            else if( !isdigit(num[i]) && !(i == 0 && signedNum && num[i+1] != '\0') )
            {
                break;
            }
            else if( i == strlen(num) - 1) //Si llegue a la ultima letra y todas son digitos, la cadena es numerica.
            {
                ret = 1;
            }
            i++;
        }
    }
    return ret;
}

/** \brief Verifica si una cadena numerica puede representarse como un numero entero.
 *
 * \param num: Cadena a verificar.
 * \return Retorna 1 si la cadena es un entero en caso contrario cero.
 *
 */

int isIntegerStr(char* num)
{
    return num != NULL && isNumericStr(num) && indexOf(num,'.') == -1;
}

/** \brief Verifica si una cadena numerica es cero.
 *
 * \param num: Cadena a verificar.
 * \return [1] para cero. [0] para numero distinto de cero.
 *
 */

int isZeroStr(char* num )
{
    int ret = 0;
    if( isNumericStr(num) )
    {
        int i = 0;
        while( i < strlen(num) && ( num[i] == '0' || num[i] == '+' || num[i] == '-' || num[i] == '.')  )
        {
            if( i == strlen(num) - 1)
            {
                ret = 1;
            }
            i++;
        }
    }
    return ret;
}

/** \brief Elimina signos + , ceros redundantes, entre otros, de una cadena numerica.
 *
 * \param str: Cadena a reparar.
 * \return Retorna el puntero a la cadena reparada.
 *
 */

char* numStrFixer(char* str )
{
    if( str != NULL && isNumericStr(str) )
    {
        int i = (str[0] == '-' && !isZeroStr(str))? 1 : 0 ; //Si el numero tiene signo menos y no es un cero contraigo a partir del indice 1.
        while(  (str[i] == '0' || str[i] == '-' || str[i] == '+') && str[i+1] != '.' && str[i+1] != '\0')
        {
            contract(str,i); // mientras haya un cero a la izquierda y no un punto en la posicion siguiente, contraigo la cadena.
        }
        if( indexOf(str,'.') > -1 ) //Si el numero tiene punto decimal puede haber ceros redundantes a la derecha.
        {
            i = 0;
            strrev(str); //Doy vuelta la cadena para colocar los ceros redundantes delante del numero.
            while( str[i] == '0')
            {
                contract(str,i);
                if(str[i] == '.') // Si encuentro un punto despues de un cero, ese punto es redundante.
                {
                    contract(str,i);
                    break;
                }
            }
            strrev(str); //Acomodo la cadena.
        }
    }
    return str;
}

/** \brief Compara dos cadenas numericas.
 *
 * \param num1: Primera cadena.
 * \param num2: Segunda cadena.
 * \return Retorna 1 si el primer numero es mayor, 0 si son iguales y -1 si el primer numero es menor.
 *
 */

int numStrCmp(char* num1, char* num2 )
{
    int pointIndex1 = 0;
    int pointIndex2 = 0;
    int ret = 0;
    if( num1 != NULL && num2 != NULL && isNumericStr(num1) && isNumericStr(num2)  )
    {
        numStrFixer(num1);
        numStrFixer(num2);
        pointIndex1 = (indexOf(num1,'.') == -1)? strlen(num1) : indexOf(num1,'.'); //Si el numero no tiene punto fijo la longitud.
        pointIndex2 = (indexOf(num2,'.') == -1)? strlen(num2) : indexOf(num2,'.'); //Si el numero es 34, el punto estara en el indice 2.

        if( num1[0] == '-' && num2[0] != '-') // Descarto casos sencillos de signo distinto.
        {
            ret = -1;
        }
        else if( num1[0] != '-' && num2[0] == '-')
        {
            ret = 1;
        }
        else if(pointIndex1 > pointIndex2) //Que el indice del punto sea mayor indica que la parte entera es mas grande y por ende todo el numero.
        {
            ret = 1;
        }
        else if(pointIndex1 < pointIndex2)
        {
            ret = -1;
        }
        else //Si el punto tiene la misma ubicacion recorro para descartar digito por digito.
        {
            int i;
            for(i = 0 ; i < strlen(num1) ; i++ )
            {
                if( num1[i] != num2[i])
                {
                    ret = chrCmp(num1[i],num2[i]);
                    break;
                }
            }
            if( ret == 0 ) //Si los numeros son iguales puede que uno sea mas largo que el otro.
            {
                ret = strLenCmp(num1,num2);
            }
        }
        if(num1[0] == '-' && num2[0] == '-') //Si ambos numeros son negativos se invierte el signo.
        {
            ret *= -1;
        }
    }
    return ret;
}

/** \brief Obtiene el indice de la primera ocurrencia de un caracter en una cadena dada.
 *
 * \param num: Cadena donde buscar ocurrencia.
 * \param chr: Caracter a buscar en cadena.
 * \return Retorna el indice del caracter o -1 en caso de no existir.
 *
 */

int indexOf(char* num, char chr )
{
    int index = -1;
    if( num != NULL)
    {
        int i = 0;
        while( i < strlen(num))
        {
            if( num[i] == chr )
            {
                index = i;
                break;
            }
            i++;
        }
    }
    return index;
}

/** \brief Elimina un caracter de un indice dado moviendo los caracteres siguientes un lugar.
 *
 * \param str: Cadena a contraer.
 * \param index: Indice hacia el que contraer caracteres.
 * \return Retorna 1 si la cadena se contrajo con exito. 0 en caso contrario.
 *
 */

int contract(char* str, int index)
{
    int ret = 0;
    if(str != NULL && index >= 0 && index < strlen(str) )
    {
        ret = 1;
        int i;
        for(i = index ; i < strlen(str) ; i++)
        {
            str[i] = str[i+1];
        }
    }
    return ret;
}

/** \brief Determina si una cadena numerica cabe en una variable de tipo signed int.
 *
 * \param str: Cadena a verificar.
 * \return Devuelve cero
 *
 */

int isSignedINTStr(char* str)
{
    int ret = 0;
    if(str != NULL && isIntegerStr(str))
    {
        numStrFixer(str);
        if( ( sizeof(int) == 2 && numStrCmp(str,"32767") <= 0 && numStrCmp(str,"-32768") >= 0 )       ||
           (sizeof(int) == 4 && numStrCmp(str,"2147483647") <= 0 && numStrCmp(str,"−2147483647") >= 0) )
        {
            ret = 1;
        }
    }
    return ret;
}
