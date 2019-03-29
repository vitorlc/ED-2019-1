#include <stdio.h>
#include <stdlib.h>

/*
Bino e Cino são colegas inseparáveis. Bino gosta de criar desafios matemáticos para Cino resolver.
Desta vez, Bino gerou uma lista de números e perguntou ao Cino quantos números da lista são múltiplos de 2, 3, 4 e 5.

Esse desafio pode parecer simples, porém, quando a lista contém muitos números, Cino se confunde e acaba 
errando alguns cálculos. Para ajudar Cino, faça um programa para resolver o desafio de Bino.

Entrada
A primeira linha da entrada consiste em um inteiro N (1 ≤ N ≤1000), representando a quantidade de números na 
lista de Bino.

A segunda linha contém N inteiros Li (1 ≤ Li ≤ 100), representando os números da lista de Bino.

Saída
Imprima a quantidade de números múltiplos de 2, 3, 4 e 5 presentes na lista. 
*/

int main () {
    int n=0, l[10000], i, mult2=0, mult3=0, mult4=0, mult5=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &l[i]);
            if(l[i]%2==0)
                mult2++; 
            if(l[i]%3==0)
                mult3++;
            if(l[i]%4==0)
                mult4++;
            if(l[i]%5==0)
                mult5++;
    }
    printf("%d Multiplo(s) de 2\n",mult2);
    printf("%d Multiplo(s) de 3\n",mult3);
    printf("%d Multiplo(s) de 4\n",mult4);
    printf("%d Multiplo(s) de 5\n",mult5);
	system("pause");
	return 0;
}
