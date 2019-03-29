#include <stdio.h>
#include <stdlib.h>
/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. 
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. 
Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
*/

int main () {
    int idadeEmDias,resto , anos, meses, dias;
	
	scanf("%d", &idadeEmDias);

    resto = idadeEmDias;
    anos = resto/365;
    resto = resto - (anos*365);
    meses = resto/30;
    resto = resto - (meses*30);
    dias = resto;

    printf("%d ano(s)\n",anos);
    printf("%d meses(s)\n",meses);
    printf("%d dia(s)\n",dias);

	system("pause");
	return 0;
}

