#include <stdio.h>
#include <stdlib.h>

/*
Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. 
Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.

Entrada
Leia tr�s valores de ponto flutuante (double) A, B e C.

Sa�da
Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". 
Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
Imprima sempre o final de linha ap�s cada mensagem.
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

