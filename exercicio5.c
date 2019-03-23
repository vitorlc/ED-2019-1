#include <stdio.h>
#include <stdlib.h>

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

