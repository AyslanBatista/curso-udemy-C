#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoa1, pessoa2;

    scanf("%d", &pessoa1);
    scanf("%d", &pessoa2);

    if (pessoa1 > 17 || pessoa2 > 17)
    {
        printf("OK");
    }
    else
    {
        printf("PROBLEMA");
    }
    return 0;
}
