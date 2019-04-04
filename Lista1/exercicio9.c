#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000). 
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.
*/
int main () {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        printf("%d %d %d \n", i, i*i, i*i*i);
    }
	system("pause");
	return 0;
}
