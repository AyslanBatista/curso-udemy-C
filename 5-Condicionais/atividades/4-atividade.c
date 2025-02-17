#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Informe um valor: \n");
    scanf("%d", &a);

    if (a > 0 && a < 10)
    {
        printf("Esta entre 0 e 10");
    }
    return 0;
}
