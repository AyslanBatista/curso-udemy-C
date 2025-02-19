#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa // Definição do "molde" para PEssoas
{
    int idade;      // Atributo de idade
    char nome[255]; // atributo de nome
};

int main()
{
    struct Pessoa pessoa1;        // Cria um Struct da classe Pessoa
    pessoa1.idade = 15;           // Muda a idade da pessoa1
    strcpy(pessoa1.nome, "John"); // Muda o nome da pessoa1

    // Exibe o resultado na tela
    printf("%s tem %d anos", pessoa1.nome, pessoa1.idade);
    return 0;
}
