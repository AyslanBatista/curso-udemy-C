#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 3

int main()
{

    // Cria a Matriz
    int matriz[LINHA][COLUNA];
    int i, j;

    // Lê os valores para a Matriz
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    // Imprime os valores lidos na tela
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
