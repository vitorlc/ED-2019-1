#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    scanf("%d", &n);
    for (int i=0; i>=10000; i++){
        if(i%n == 2)
            printf("%d\n", i);
    }
	system("pause");
	return 0;
}
