#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2], i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 1; i > -1; i--)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
