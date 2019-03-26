#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    int tam = pow(10,5);
    int valores[tam], i=0, auxPar=0, auxImpar=tam;
	
    for(i=0; i<=tam; i++){
	    scanf("%d", &valores[i]);

        if(valores[i]=='\n'){
            tam = valores[i];
            break;
        }
            
        if((valores[i] % 2)== 0){
            valores[auxImpar] = valores[i];
            auxImpar--;
        }else
        {
            valores[auxPar] = valores[i];
            auxPar++;
        }
    }
    
    printf("\n\n");

    for(i=0;i<=tam;i++){
        printf("%d - %d\n",i, valores[i]);
    }

	system("pause");
	return 0;
}
