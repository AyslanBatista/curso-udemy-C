#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, resto;

    printf("Informe o valor: \n");
    scanf("%d", &a);

    resto = a % 2;

    if (resto == 0)
    {
        printf("Valor %d é PAR", a);
    }
    else
    {
        printf("Valor %d é IMPAR", a);
    }

    return 0;
}
