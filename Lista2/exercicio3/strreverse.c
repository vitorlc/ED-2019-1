#include <stdio.h>
#include <string.h>

void strreverse(char *destino, char *origem){
    int i, j=0, tamanho = strlen(origem);
    
    //strcpy(destino, origem);
    for(i= tamanho-1; i>=0; i--){
        destino[j]= origem[i];
        j++;
    }
    destino[i] = '\0';
}