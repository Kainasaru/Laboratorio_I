#ifndef NUMSTRING_H
#define NUMSTRING_H
#endif // NUMSTRING_H

/* NUMERIC STRINGS (numstring.h ) */

/* NUMERIC STRINGS es una biblioteca con funciones para el manejo de cadenas de caracteres numericas.
Con estas potentes funciones es posible determinar si una cadena es numerica, si es un numero que cabe en una variable entera,
flotante, entre otras utilidades. */

/* Prototipos de funciones */

int isNumericStr(char* num );
int isIntegerStr(char* num);
int isZeroStr(char* num );
char* numStrFixer(char* str );
int numStrCmp(char* num1, char* num2 );
int indexOf(char* num, char chr );
int contract(char* str,int index);
int isSignedINTStr(char* str);

/* Kainasaru */
