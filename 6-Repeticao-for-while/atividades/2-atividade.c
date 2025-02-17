#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    int number;

    printf("Informe um numero: \n");
    scanf("%d", &number);

    while (i <= number)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
        i += 1;
    }
    return 0;
}
