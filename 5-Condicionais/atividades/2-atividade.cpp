#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;

    printf("Insira o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Insira o segundo valor: \n");
    scanf("%d", &valor2);

    if (valor1 < valor2)
    {
        printf("Valor %d é maior que %d", valor2, valor1);
    }
    else if (valor1 > valor2)
    {
        printf("Valor %d é menor que %d", valor2, valor1);
    }
    else
    {

        printf("Os valor de %d e %d são iguais", valor1, valor2);
    }
    return 0;
}
