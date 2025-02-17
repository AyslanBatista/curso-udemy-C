#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade; // Define a idade

    scanf("%d", &idade); // Lê a idade

    // Analise se é maior de idade
    if (idade < 17)
    {
        printf("Menor de Idade");
    }
    else if (idade == 18)
    {
        printf("Tem que se alistar");
    }
    else
    {
        printf("Maior de idade");
    }
    return 0;
}
