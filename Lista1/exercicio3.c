#include <stdio.h>
#include <stdlib.h>

/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
Imprima sempre o final de linha após cada mensagem.
*/

int main () {
	float A, B, C, X1, X2, delta;
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	 // Calcula o valor de dela, x1 e x2
	 delta = B*B - 4*A*C;
	 X1 = (-B + sqrt(delta)) / (2*A);
	 X2 = (-B - sqrt(delta)) / (2*A);
	 
	 // Imprime os resultados
	 if(delta < 0 || A==0) {
	 printf("Impossivel calcular\n");
	 } else {
	 printf("x1: %.5f\n", X1);
	 printf("x2: %.5f\n", X2);
	 }
	
	system("pause");
	return 0;
}

