#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strtrim(char *destino, char *origem){
    int n = 0, j=0;
    
    while (n < strlen(origem)) {
        if (origem[n] == ' ' || origem[n] == '\t' || origem[n] == '\n' || origem[n] == '\r' ){
        	n++;
        }
        else{
            strcpy(&destino[j], &origem[n]);
            j++;
            n++;
        }  
    }
}