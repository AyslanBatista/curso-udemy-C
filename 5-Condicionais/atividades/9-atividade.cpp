#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, somar, subtrair, opcao;
    printf("Informe o valor A: \n");
    scanf("%d", &a);

    printf("Informe o valor B: \n");
    scanf("%d", &b);

    somar = a + b;
    subtrair = a - b;

    printf("-----OPERAÇÕES-----\n");
    printf("1 - Somar  \n");
    printf("2 - Subtrair  \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("%d + %d = %d", a, b, somar);
        break;
    case 2:
        printf("%d - %d = %d", a, b, subtrair);
        break;
    default:
        printf("Opção invalida !!");
        break;
    }
    return 0;
}
