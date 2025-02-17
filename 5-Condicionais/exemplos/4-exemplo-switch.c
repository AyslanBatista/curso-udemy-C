#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Menu
    printf("Menu             \n");
    printf("1 - Expresso     \n");
    printf("2 - Cappuccino   \n");
    printf("3 - Machiato     \n");
    printf("Escolha uma opção: \n");

    // Lê a opção escolhida
    int opcao;
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Expresso escolhido.");
        break;
    case 2:
        printf("Cappuccino escolhido.");
        break;
    case 3:
        printf("Macchiato escolhido.");
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}
