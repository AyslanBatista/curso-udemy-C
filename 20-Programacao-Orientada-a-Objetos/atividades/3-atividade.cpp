#include <iostream>
using namespace std;

class Pessoa
{
    public:
        string nome;
        int idade;
        float salario;
        Pessoa(string novoNome, int novaIdade, float novoSalario){
            nome = novoNome;
            idade = novaIdade;
            salario = novoSalario;
        }

        void ImprimeDetalhes(){
            cout << "Nome: " << nome << " Idade: " << idade << "\n";
            cout << "Salario: " << salario << "\n";
        }

};

int main()
{
    Pessoa pessoa1("John", 25, 2500.50);
    pessoa1.ImprimeDetalhes();

    return 0;
}
