#include <stdio.h>
#include <stdlib.h>
//Definindo uma constante no cabeçalho
#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

int main()
{
    //Definindo uma constante dentro da função
    const int LADO = 10;

    //Imprimindo as constantes
    printf("%d \n", CONSTANTE);
    printf("%f \n", QUEBRADO);
    printf("%c \n", LETRA);
    printf("%d \n", LADO);

    return 0;
}
