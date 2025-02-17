#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;

    do {
         printf("Vai ser executado ao menos uma vez\n");
         printf("Mesmo que a condicao seja falsa.");
    } while (i < 5);

    return 0;
}
