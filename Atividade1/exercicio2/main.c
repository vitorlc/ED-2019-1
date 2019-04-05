/*
Crie um programa para ajudar o professor à calcular a média dos alunos. O programa deve processar uma lista
de dados de alunos: matrícula, nome e suas respectivas notas em cada uma das 3 avaliações.

Em seguida, o programa deve permitir calcular a média final e mostrar o resultado final para uma lista de
alunos selecionados.

A média final é calculada com a seguinte fórmula: 0.35 * a1 + 0.35 * a2 + 0.30 * a3

Entrada

A primeira linha de entrada contém um inteiro positivo N (1 < N < 50) indicando o número de registros de alunos
a serem lidos. A primeira linha é seguida por uma sequencia de registros contendo os seguintes dados de cada
aluno: matrícula, nome, e uma linha com registros das notas de três avaliações: a1, a2, a3

Ao fim dos registros há uma sequência de números de matrículas dos alunos para os quais devem ser calculadas
a média.

Saída

Para cada matrícula fornecida após os registros dos alunos, deve ser impressa uma linha contendo matrícula,
nome e média final do aluno.

*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[30], numero_Mat[20];
    float a1, a2, a3, media;
} Alunos;

int main (void){

	int i, n;
    printf("Digite o número de alunos: (até 50)");
	scanf("%d", &n);
	Alunos a[n];

	for(i=0; i<n; i++) {
	    strcpy(a[i].nome, "NULL");
		strcpy(a[i].numero_Mat, "NULL");
        a[i].a1 = 0.0;
        a[i].a2 = 0.0;
        a[i].a3 = 0.0;
        a[i].media = 0.0;
	}
    for(i=0; i<n; i++) {
	    printf("Entre com a matricula: ");
		scanf("%s*c", a[i].numero_Mat);
		printf("Entre com o nome: ");
		scanf("%s*c", a[i].nome);
		printf("Entre com as notas: ");
		scanf("%f%*c %f%*c %f%*c", &a[i].a1, &a[i].a2, &a[i].a3);
		a[i].media = ((0.35*a[i].a1)+(0.35*a[i].a2)+(0.30*a[i].a3));
        printf("\n");

	}

    printf("\nDados dos Alunos Gravados:\n");

     for(i=0; i<n; i++) {
	    printf("%s - %s - %.2f",a[i].numero_Mat, a[i].nome, a[i].media);
		printf("\n");
	}


}
