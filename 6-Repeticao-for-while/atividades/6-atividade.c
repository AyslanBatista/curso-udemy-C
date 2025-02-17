#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_inicial, valor_max, valor_modificador;
    printf("Informe o valor inicial \n");
    scanf("%d", &valor_inicial);

    printf("Informe o valor Maximo \n");
    scanf("%d", &valor_max);

    printf("Informe o valor Modificador \n");
    scanf("%d", &valor_modificador);

    printf("\n --------------------------------- \n");

    for (int i = valor_inicial; i <= valor_max; i += valor_modificador)
    {
        printf("%d \n", i);
    }

    return 0;
}
