#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma;

    printf("Valor A: \n");
    scanf("%d", &a);

    printf("Valor B: \n");
    scanf("%d", &b);

    soma = a + b;

    if ((soma > 0 && soma < 10) || (soma % 2 == 0)) {
        printf("OK");
    } else {
        printf("ERRO");
    }

    return 0;

}
