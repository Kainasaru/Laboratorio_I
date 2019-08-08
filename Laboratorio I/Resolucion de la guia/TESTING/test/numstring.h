#ifndef NUMSTRING_H
#define NUMSTRING_H
#endif // NUMSTRING_H

/* Prototipos de funciones */

int isNumericStr(char* num );
int isIntegerStr(char* num);
int isZeroStr(char* num );
char* numStrFixer(char* str );
int numStrCmp(char* num1, char* num2 );
int indexOf(char* num, char chr );
int contract(char* str,int index);

int isSignedSHORT(char* num);
int isSignedINT(char* num);
int isSignedLONG(char* num);
int isSignedFLOAT(char* num);
int isSignedDOUBLE(char* num);

int isUnsignedSHORT(char* num);
int isUnsignedINT(char* num);
int isUnsignedLONG(char* num);
int isUnsignedFLOAT(char* num);
int isUnsignedDOUBLE(char* num);

/* Kainasaru */
