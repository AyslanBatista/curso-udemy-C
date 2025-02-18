#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media;
    int vetor[3];

    printf("Informe os 3 valores que deseja calcular a media: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nValor %d: ", i+1);
        scanf("%d", &vetor[i]);

    }
    
    media = (vetor[0] + vetor[1] + vetor[2]) / 3.0; 
    printf("Média: %.2f\n", media);

    return 0;

}
