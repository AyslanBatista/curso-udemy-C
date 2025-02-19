#include <iostream>
using namespace std;

class Pessoa
{                  // Definição do "molde" para PEssoas
public:            // Modificador de acesso
    int idade;     // Atributo de idade
    float salario; // Atributo salario
    string nome;   // Atributo de nome
};

int main()
{
    Pessoa pessoa1;            // Cria um objeto da classe Pessoa
    pessoa1.idade = 15;        // Muda a idade da pessoa1
    pessoa1.salario = 1234.35; // Muda o salario da pessoa1
    pessoa1.nome = "John";     // Muda o nome da pessoa1

    cout << pessoa1.nome << "tem" << pessoa1.idade << "anos";

    return 0;
}
