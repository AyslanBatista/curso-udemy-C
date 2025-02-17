#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int maximo = 6;
    int minimo = 1;

    int dado1 = (rand() % (maximo - minimo + 1)) + minimo;
    int dado2 = (rand() % (maximo - minimo + 1)) + minimo;
    int dado3 = (rand() % (maximo - minimo + 1)) + minimo;

    int soma = dado1 + dado2 + dado3;

    printf("----DADOS JOGADOS-----\n");
    printf("Valor: %d \n", dado1);
    printf("Valor: %d \n", dado2);
    printf("Valor: %d \n", dado3);
    printf("Soma dos pontos: %d", soma);

    return 0;
}
