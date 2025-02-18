#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para usar strlen()

int main() {
    // Definindo Strings de várias formas
    char palavra1[] = "boi";
    char palavra2[5] = "bala";  // Definimos um tamanho para evitar estouro
    char palavra3[] = {'a', 'b', 'c', 'd', '\0'};
    char palavra4[5] = {'f', 'o', 'n', 'e', '\0'};

    // Imprimindo Strings
    printf("Palavra 1: %s\n", palavra1);
    printf("Palavra 2: %s\n", palavra2);
    printf("Palavra 3: %s\n", palavra3);
    printf("Palavra 4: %s\n", palavra4);

    // Lendo uma String (Sem espaços) corretamente
    printf("\nDigite uma palavra com até 4 letras: ");
    scanf("%4s", palavra2); // Evita estouro de buffer

    // Lendo uma String (Com espaços)
    char fruta[255];

    printf("\nDigite o nome de uma fruta: ");
    getchar();  // Remove o '\n' deixado pelo scanf anterior
    fgets(fruta, sizeof(fruta), stdin);

    // Removendo o '\n' do final da string lida com fgets()
    fruta[strcspn(fruta, "\n")] = '\0';

    // Imprimindo a fruta lida
    printf("\nFruta lida: %s\n", fruta);

    return 0;
}
