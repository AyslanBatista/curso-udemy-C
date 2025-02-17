#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma;

    printf("Digites valores entre 5 e 10. \n");

    do
    {
        printf("Informe o valor A: \n");
        scanf("%d", &a);

        printf("Informe o valor B: \n");
        scanf("%d", &b);

        printf("\n------------------\n");

    } while ((a <= 5 || a >= 10) || (b <= 5 || b >= 10));

    soma = a + b;
    printf("Valor de %d + %d = %d \n", a, b, soma);

    return 0;
}
