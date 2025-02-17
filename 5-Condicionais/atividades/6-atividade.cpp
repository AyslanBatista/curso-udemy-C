#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Valor A: \n");
    scanf("%d", &a);

    printf("Valor B: \n");
    scanf("%d", &b);

    if (a > 10 || b > 10)
    {
        printf("Existe valores maiores que 10");
    }
    else
    {
        printf("Nenhum valor é maior que 10");
    }
    return 0;
}
