#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Valor A: \n");
    scanf("%d", &a);

    printf("Valor B: \n");
    scanf("%d", &b);

    if ((a % 2 == 0) || (b % 2 == 0))
    {
        printf("Existe valores pares");
    }
    else
    {
        printf("Não existe valores pares");
    }
    return 0;
}
