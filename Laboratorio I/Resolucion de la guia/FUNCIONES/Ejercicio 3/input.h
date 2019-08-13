#ifndef INPUT_H
#define INPUT_H
#endif // INPUT_H

/* Prototipos */

int getInt(char* message, char* eMessage, int min, int max, int retries,int* input  );
int getFloat(char* message, char* eMessage, float min, float max, int retries,float* input  );
int getChar(char* message, char* eMessage, char min, char max, int retries,char* input  );
int getString(char* message, char* eMessage, unsigned short min, unsigned short max, int retries,char* input );
