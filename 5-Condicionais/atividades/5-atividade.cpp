#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Informe o valor A: \n");
    scanf("%d", &a);

    printf("Informe o valor B: \n");
    scanf("%d", &b);

    printf("Informe o valor C: \n");
    scanf("%d", &c);

    if (a > 10 && b > 10 && c > 10)
    {
        printf("Os 3 valores são maiores que 10");
    }
    return 0;
}
