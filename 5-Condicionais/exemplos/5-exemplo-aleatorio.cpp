#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Usa o tempo atual
    srand(time(NULL));

    // Cria um número aleatório de 5 a 14
    int maximo = 14;
    int minimo = 5;

    // Traduzindo para fórmula
    int r = (rand() % (maximo - minimo + 1)) + minimo;

    // Impreme o número gerado
    printf("Numero gerado: %d", r);

    return 0;
}
