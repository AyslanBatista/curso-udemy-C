#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", i);
        printf("%d \n", soma);
        soma += i;

        printf("\n-----------\n");
    }
    printf("%d", soma);

    return 0;
}
