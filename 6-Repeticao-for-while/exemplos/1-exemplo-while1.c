#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    while (i <= 10)
    {
        // Impre i e pula uma linha
        printf("%d \n", i);

        //Aumenta em 1 o valor do i atual
        i = i + 1;

        // i <=10 continua verdadeira
        // executa while novamente ou sair
    }
    return 0;
    
}
