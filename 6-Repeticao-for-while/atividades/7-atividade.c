#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado;

    printf("Informe o numero que deseja verificar se é primo: \n");
    scanf("%d", &numero);

    for (int i = 2; i <= numero; i++)
    {
        resultado = numero % i;

        if (resultado == 0 && i != numero)
        {
            printf("Numero %d não é PRIMO !", numero);
            break;
        }

        if (resultado == 0 && i == numero)
        {
            printf("Numero %d é PRIMO !", numero);
        }
    }
    return 0;
}
