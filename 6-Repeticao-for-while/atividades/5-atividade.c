#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado;

    printf("Informe o numero que deseja saber a tabuada: \n");
    scanf("%d", &numero);

    printf("\n------ TABUADA do %d ------\n", numero);
    for (int i = 0; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%d x %d = %d \n", i, numero, resultado);

    }
    
    return 0;
}
