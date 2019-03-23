    #include <stdio.h>
    #include <stdlib.h>

    int main () {
        int N, troco, cem, cinquenta, vinte, dez, cinco, dois, um;
        
        scanf("%d", &N);
        
        troco = N;
        cem = troco / 100;
        troco = troco - (cem *100);
        cinquenta = troco / 50;
        troco = troco - (cinquenta * 50);
        vinte = troco / 20;
        troco = troco - (vinte * 20);
        dez = troco /10;
        troco = troco -(dez * 10);
        cinco = troco / 5;
        troco = troco - (cinco * 5);
        dois = troco / 2;
        troco = troco - (dois * 2);
        
        printf(" %d nota(s) de R$ 100 \n",cem);
        printf(" %d nota(s) de R$ 50 \n",cinquenta);
        printf(" %d nota(s) de R$ 20 \n",vinte);
        printf(" %d nota(s) de R$ 10 \n",dez);
        printf(" %d nota(s) de R$ 5 \n",cinco);
        printf(" %d nota(s) de R$ 2 \n",dois);
        printf(" %d nota(s) de R$ 1 \n",troco);

        system("pause");
        return 0;
    }

