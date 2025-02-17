#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;
    int soma = valor1 + valor2;

    printf("Coloque o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Coloque o segundo valor: \n");
    scanf("%d", &valor2);

    if (soma > 10)
    {
        printf("%d+%d=%d é maior que 10", valor1, valor2, soma);
    }
    else if (soma == 10)
    {
        printf("%d+%d=%d é igual a 10", valor1, valor2, soma);
    }
    else
    {
        printf("%d+%d=%d é menor que 10", valor1, valor2, soma);
    }
    return 0;
}
