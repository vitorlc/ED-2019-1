#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Considerando a entrada de valores inteiros não negativos, ordene estes valores segundo o seguinte critério:

Primeiro os Pares
Depois os Ímpares
Sendo que deverão ser apresentados os pares em ordem crescente e depois os ímpares em ordem decrescente.

Entrada
A primeira linha de entrada contém um único inteiro positivo N (1 < N < 105) Este é o número de linhas 
de entrada que vem logo a seguir. 
As próximas N linhas conterão, cada uma delas, um valor inteiro não negativo.


*/

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
