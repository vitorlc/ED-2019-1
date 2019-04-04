#include <stdio.h>
#include <stdlib.h>
/*
Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

Entrada
A entrada contém um valor inteiro N (N < 10000).

Saída
Imprima todos valores que quando divididos por N dão resto = 2, um por linha.
*/
int main () {
    int n;
    scanf("%d", &n);
    for (int i=0; i<=10000; i++){
        if(i%n == 2)
            printf("%d\n", i);
    }
	system("pause");
	return 0;
}
